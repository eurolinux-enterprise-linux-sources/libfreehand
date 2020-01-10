%global apiversion 0.0

Name: libfreehand
Version: 0.0.0
Release: 3%{?dist}
Summary: A library for import of Macromedia/Adobe FreeHand documents

Group: System Environment/Libraries
License: MPLv2.0
URL: http://wiki.documentfoundation.org/DLP/Libraries/libfreehand
Source: http://dev-www.libreoffice.org/src/%{name}/%{name}-%{version}.tar.xz

BuildRequires: doxygen
BuildRequires: gperf
BuildRequires: libwpd-devel
BuildRequires: libwpg-devel
BuildRequires: zlib-devel

Patch0: 0001-coverity-fix-memory-leak.patch

%description
libfreehand is library providing ability to interpret and import
Macromedia/Adobe FreeHand documents into various applications.

%package devel
Summary: Development files for %{name}
Group: Development/Libraries
Requires: %{name}%{?_isa} = %{version}-%{release}

%description devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.

%package doc
Summary: Documentation of %{name} API
Group: Documentation
BuildArch: noarch

%description doc
The %{name}-doc package contains documentation files for %{name}.

%package tools
Summary: Tools to transform Macromedia/Adobe FreeHand documents into other formats
Group: Applications/Publishing
Requires: %{name}%{?_isa} = %{version}-%{release}

%description tools
Tools to transform Macromedia/Adobe FreeHand documents into other formats.
Currently supported: SVG, raw.

%prep
%setup -q

%patch0 -p1

%build
%configure --disable-silent-rules --disable-static --disable-werror
sed -i \
    -e 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g' \
    -e 's|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' \
    libtool
make %{?_smp_mflags}

%install
make install DESTDIR=%{buildroot}
rm -f %{buildroot}/%{_libdir}/*.la
# we install API docs directly from build
rm -rf %{buildroot}/%{_docdir}/%{name}

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

%changelog
* Mon Nov 04 2013 David Tardon <dtardon@redhat.com> - 0.0.0-3
- fix memory leak

* Thu Oct 31 2013 David Tardon <dtardon@redhat.com> 0.0.0-2
- add gperf to BuildRequires

* Thu Oct 31 2013 David Tardon <dtardon@redhat.com> 0.0.0-1
- initial import
