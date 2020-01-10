%global apiversion 0.1

Name: libfreehand
Version: 0.1.1
Release: 1%{?dist}
Summary: A library for import of Macromedia/Adobe FreeHand documents

License: MPLv2.0
URL: http://wiki.documentfoundation.org/DLP/Libraries/libfreehand
Source: http://dev-www.libreoffice.org/src/%{name}/%{name}-%{version}.tar.xz

BuildRequires: doxygen
BuildRequires: gperf
BuildRequires: help2man
BuildRequires: pkgconfig(icu-i18n)
BuildRequires: pkgconfig(librevenge-0.0)
BuildRequires: pkgconfig(lcms2)
BuildRequires: pkgconfig(zlib)

%description
libfreehand is library providing ability to interpret and import
Macromedia/Adobe FreeHand documents into various applications.

%package devel
Summary: Development files for %{name}
Requires: %{name}%{?_isa} = %{version}-%{release}

%description devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.

%package doc
Summary: Documentation of %{name} API
BuildArch: noarch

%description doc
The %{name}-doc package contains documentation files for %{name}.

%package tools
Summary: Tools to transform Macromedia/Adobe FreeHand documents into other formats
Requires: %{name}%{?_isa} = %{version}-%{release}

%description tools
Tools to transform Macromedia/Adobe FreeHand documents into other formats.
Currently supported: SVG, raw, text.

%prep
%autosetup -p1

%build
%configure --disable-silent-rules --disable-static --disable-werror
sed -i \
    -e 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g' \
    -e 's|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' \
    libtool
make %{?_smp_mflags}

export LD_LIBRARY_PATH=`pwd`/src/lib/.libs${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
help2man -N -n 'debug the conversion library' -o fh2raw.1 ./src/conv/raw/.libs/fh2raw
help2man -N -n 'convert FreeHand document into SVG' -o fh2svg.1 ./src/conv/svg/.libs/fh2svg
help2man -N -n 'convert FreeHand document into plain text' -o fh2text.1 ./src/conv/text/.libs/fh2text

%install
make install DESTDIR=%{buildroot}
rm -f %{buildroot}/%{_libdir}/*.la
# we install API docs directly from build
rm -rf %{buildroot}/%{_docdir}/%{name}

install -m 0755 -d %{buildroot}/%{_mandir}/man1
install -m 0644 fh2*.1 %{buildroot}/%{_mandir}/man1

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
%doc AUTHORS COPYING
%{_libdir}/%{name}-%{apiversion}.so.*

%files devel
%doc ChangeLog
%{_includedir}/%{name}-%{apiversion}
%{_libdir}/%{name}-%{apiversion}.so
%{_libdir}/pkgconfig/%{name}-%{apiversion}.pc

%files doc
%doc COPYING
%doc docs/doxygen/html

%files tools
%{_bindir}/fh2raw
%{_bindir}/fh2svg
%{_bindir}/fh2text
%{_mandir}/man1/fh2raw.1*
%{_mandir}/man1/fh2svg.1*
%{_mandir}/man1/fh2text.1*

%changelog
* Thu Jun 11 2015 David Tardon <dtardon@redhat.com> - 0.1.1-1
- Resolves: rhbz#1207753 rebase to 0.1.1

* Fri Apr 17 2015 David Tardon <dtardon@redhat.com> - 0.1.0-1
- Resolves: rhbz#1207753 rebase to 0.1.0

* Mon Nov 04 2013 David Tardon <dtardon@redhat.com> - 0.0.0-3
- fix memory leak

* Thu Oct 31 2013 David Tardon <dtardon@redhat.com> 0.0.0-2
- add gperf to BuildRequires

* Thu Oct 31 2013 David Tardon <dtardon@redhat.com> 0.0.0-1
- initial import
