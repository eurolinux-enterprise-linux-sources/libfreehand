/* C++ code produced by gperf version 3.0.4 */
/* Command-line: /usr/bin/gperf --compare-strncmp -C -m 20 ../../src/lib/tokens.gperf  */
/* Computed positions: -k'1,4-5,8' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 5 "../../src/lib/tokens.gperf"
struct fhtoken
{
  const char *name;
  int tokenId;
};

#define TOTAL_KEYWORDS 120
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 24
#define MIN_HASH_VALUE 8
#define MAX_HASH_VALUE 161
/* maximum key range = 154, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct fhtoken *in_word_set (const char *str, unsigned int len);
};

inline unsigned int
Perfect_Hash::hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162,  68,   3,   0,  37,  26,
        2,  25,   2,  42, 162, 162,  37,   0,  27,  69,
        7, 162,  73,  37,   2,   1,  55, 162,  43, 162,
      162, 162, 162, 162, 162, 162, 162,   5,  17,  42,
       67,   2,   0,  32,  10,   1,  82,  20,  28,  61,
       44,  26,  11, 162,   0,  43,   0,  69,   8,  25,
      162,  52, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
      162, 162, 162, 162, 162, 162
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct fhtoken wordlist[] =
  {
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 73 "../../src/lib/tokens.gperf"
    {"MString",FH_MSTRING},
#line 127 "../../src/lib/tokens.gperf"
    {"UString",FH_USTRING},
#line 115 "../../src/lib/tokens.gperf"
    {"TString",FH_TSTRING},
#line 113 "../../src/lib/tokens.gperf"
    {"TEffect",FH_TEFFECT},
#line 59 "../../src/lib/tokens.gperf"
    {"Halftone",FH_HALFTONE},
#line 81 "../../src/lib/tokens.gperf"
    {"MultiBlend",FH_MULTIBLEND},
    {(char*)0, 0},
#line 31 "../../src/lib/tokens.gperf"
    {"ContentFill",FH_CONTENTFILL},
    {(char*)0, 0},
#line 117 "../../src/lib/tokens.gperf"
    {"TaperedFill",FH_TAPEREDFILL},
#line 118 "../../src/lib/tokens.gperf"
    {"TaperedFillX",FH_TAPEREDFILLX},
#line 116 "../../src/lib/tokens.gperf"
    {"TabTable",FH_TABTABLE},
#line 24 "../../src/lib/tokens.gperf"
    {"CharacterFill",FH_CHARACTERFILL},
#line 91 "../../src/lib/tokens.gperf"
    {"Path",FH_PATH},
#line 93 "../../src/lib/tokens.gperf"
    {"PatternFill",FH_PATTERNFILL},
#line 74 "../../src/lib/tokens.gperf"
    {"MasterPageDocMan",FH_MASTERPAGEDOCMAN},
#line 75 "../../src/lib/tokens.gperf"
    {"MasterPageElement",FH_MASTERPAGEELEMENT},
#line 54 "../../src/lib/tokens.gperf"
    {"FilterAttributeHolder",FH_FILTERATTRIBUTEHOLDER},
#line 48 "../../src/lib/tokens.gperf"
    {"FWFeatherFilter",FH_FWFEATHERFILTER},
#line 46 "../../src/lib/tokens.gperf"
    {"FWBevelFilter",FH_FWBEVELFILTER},
#line 78 "../../src/lib/tokens.gperf"
    {"MasterPageSymbolClass",FH_MASTERPAGESYMBOLCLASS},
#line 76 "../../src/lib/tokens.gperf"
    {"MasterPageLayerElement",FH_MASTERPAGELAYERELEMENT},
#line 77 "../../src/lib/tokens.gperf"
    {"MasterPageLayerInstance",FH_MASTERPAGELAYERINSTANCE},
#line 79 "../../src/lib/tokens.gperf"
    {"MasterPageSymbolInstance",FH_MASTERPAGESYMBOLINSTANCE},
#line 27 "../../src/lib/tokens.gperf"
    {"Color6",FH_COLOR6},
#line 119 "../../src/lib/tokens.gperf"
    {"TextBlok",FH_TEXTBLOK},
#line 51 "../../src/lib/tokens.gperf"
    {"FWSharpenFilter",FH_FWSHARPENFILTER},
#line 92 "../../src/lib/tokens.gperf"
    {"PathTextLineInfo",FH_PATHTEXTLINEINFO},
#line 33 "../../src/lib/tokens.gperf"
    {"CustomProc",FH_CUSTOMPROC},
#line 124 "../../src/lib/tokens.gperf"
    {"TintColor",FH_TINTCOLOR},
#line 125 "../../src/lib/tokens.gperf"
    {"TintColor6",FH_TINTCOLOR6},
#line 32 "../../src/lib/tokens.gperf"
    {"ContourFill",FH_CONTOURFILL},
#line 29 "../../src/lib/tokens.gperf"
    {"ConeFill",FH_CONEFILL},
#line 68 "../../src/lib/tokens.gperf"
    {"List",FH_LIST},
#line 123 "../../src/lib/tokens.gperf"
    {"TileFill",FH_TILEFILL},
#line 82 "../../src/lib/tokens.gperf"
    {"MultiColorList",FH_MULTICOLORLIST},
#line 63 "../../src/lib/tokens.gperf"
    {"Layer",FH_LAYER},
#line 89 "../../src/lib/tokens.gperf"
    {"PantoneColor",FH_PANTONECOLOR},
#line 34 "../../src/lib/tokens.gperf"
    {"Data",FH_DATA},
#line 69 "../../src/lib/tokens.gperf"
    {"MDict",FH_MDICT},
#line 70 "../../src/lib/tokens.gperf"
    {"MList",FH_MLIST},
#line 38 "../../src/lib/tokens.gperf"
    {"DuetFilter",FH_DUETFILTER},
#line 28 "../../src/lib/tokens.gperf"
    {"CompositePath",FH_COMPOSITEPATH},
#line 36 "../../src/lib/tokens.gperf"
    {"DateTime",FH_DATETIME},
#line 23 "../../src/lib/tokens.gperf"
    {"CalligraphicStroke",FH_CALLIGRAPHICSTROKE},
#line 65 "../../src/lib/tokens.gperf"
    {"LinePat",FH_LINEPAT},
#line 72 "../../src/lib/tokens.gperf"
    {"MQuickDict",FH_MQUICKDICT},
#line 67 "../../src/lib/tokens.gperf"
    {"LinearFill",FH_LINEARFILL},
#line 50 "../../src/lib/tokens.gperf"
    {"FWShadowFilter",FH_FWSHADOWFILTER},
#line 94 "../../src/lib/tokens.gperf"
    {"PatternLine",FH_PATTERNLINE},
#line 88 "../../src/lib/tokens.gperf"
    {"PSLine",FH_PSLINE},
#line 122 "../../src/lib/tokens.gperf"
    {"TextInPath",FH_TEXTINPATH},
#line 98 "../../src/lib/tokens.gperf"
    {"Procedure",FH_PROCEDURE},
#line 19 "../../src/lib/tokens.gperf"
    {"Brush",FH_BRUSH},
#line 100 "../../src/lib/tokens.gperf"
    {"PropLst",FH_PROPLST},
#line 99 "../../src/lib/tokens.gperf"
    {"ProcessColor",FH_PROCESSCOLOR},
#line 90 "../../src/lib/tokens.gperf"
    {"Paragraph",FH_PARAGRAPH},
#line 26 "../../src/lib/tokens.gperf"
    {"Collector",FH_COLLECTOR},
#line 42 "../../src/lib/tokens.gperf"
    {"Envelope",FH_ENVELOPE},
#line 21 "../../src/lib/tokens.gperf"
    {"BrushStroke",FH_BRUSHSTROKE},
#line 71 "../../src/lib/tokens.gperf"
    {"MName",FH_MNAME},
#line 49 "../../src/lib/tokens.gperf"
    {"FWGlowFilter",FH_FWGLOWFILTER},
#line 18 "../../src/lib/tokens.gperf"
    {"Block",FH_BLOCK},
#line 114 "../../src/lib/tokens.gperf"
    {"TFOnPath",FH_TFONPATH},
#line 106 "../../src/lib/tokens.gperf"
    {"SpotColor",FH_SPOTCOLOR},
#line 107 "../../src/lib/tokens.gperf"
    {"SpotColor6",FH_SPOTCOLOR6},
#line 62 "../../src/lib/tokens.gperf"
    {"Import",FH_IMPORT},
#line 22 "../../src/lib/tokens.gperf"
    {"BrushTip",FH_BRUSHTIP},
#line 96 "../../src/lib/tokens.gperf"
    {"PerspectiveGrid",FH_PERSPECTIVEGRID},
#line 52 "../../src/lib/tokens.gperf"
    {"Figure",FH_FIGURE},
#line 66 "../../src/lib/tokens.gperf"
    {"LineTable",FH_LINETABLE},
#line 121 "../../src/lib/tokens.gperf"
    {"TextEffs",FH_TEXTEFFS},
#line 95 "../../src/lib/tokens.gperf"
    {"PerspectiveEnvelope",FH_PERSPECTIVEENVELOPE},
#line 120 "../../src/lib/tokens.gperf"
    {"TextColumn",FH_TEXTCOLUMN},
#line 17 "../../src/lib/tokens.gperf"
    {"BendFilter",FH_BENDFILTER},
#line 15 "../../src/lib/tokens.gperf"
    {"BasicFill",FH_BASICFILL},
#line 14 "../../src/lib/tokens.gperf"
    {"AttributeHolder",FH_ATTRIBUTEHOLDER},
#line 30 "../../src/lib/tokens.gperf"
    {"ConnectorLine",FH_CONNECTORLINE},
#line 45 "../../src/lib/tokens.gperf"
    {"FHDocHeader",FH_FHDOCHEADER},
#line 35 "../../src/lib/tokens.gperf"
    {"DataList",FH_DATALIST},
#line 43 "../../src/lib/tokens.gperf"
    {"ExpandFilter",FH_EXPANDFILTER},
#line 37 "../../src/lib/tokens.gperf"
    {"DisplayText",FH_DISPLAYTEXT},
#line 101 "../../src/lib/tokens.gperf"
    {"RadialFill",FH_RADIALFILL},
#line 102 "../../src/lib/tokens.gperf"
    {"RadialFillX",FH_RADIALFILLX},
#line 105 "../../src/lib/tokens.gperf"
    {"SketchFilter",FH_SKETCHFILTER},
#line 84 "../../src/lib/tokens.gperf"
    {"NewContourFill",FH_NEWCONTOURFILL},
#line 112 "../../src/lib/tokens.gperf"
    {"SymbolLibrary",FH_SYMBOLLIBRARY},
#line 56 "../../src/lib/tokens.gperf"
    {"GraphicStyle",FH_GRAPHICSTYLE},
#line 41 "../../src/lib/tokens.gperf"
    {"Element",FH_ELEMENT},
#line 53 "../../src/lib/tokens.gperf"
    {"FileDescriptor",FH_FILEDESCRIPTOR},
#line 61 "../../src/lib/tokens.gperf"
    {"ImageImport",FH_IMAGEIMPORT},
#line 16 "../../src/lib/tokens.gperf"
    {"BasicLine",FH_BASICLINE},
#line 58 "../../src/lib/tokens.gperf"
    {"Guides",FH_GUIDES},
#line 87 "../../src/lib/tokens.gperf"
    {"Oval",FH_OVAL},
#line 128 "../../src/lib/tokens.gperf"
    {"VDict",FH_VDICT},
#line 11 "../../src/lib/tokens.gperf"
    {"AGDFont",FH_AGDFONT},
#line 126 "../../src/lib/tokens.gperf"
    {"TransformFilter",FH_TRANSFORMFILTER},
#line 108 "../../src/lib/tokens.gperf"
    {"StylePropLst",FH_STYLEPROPLST},
#line 97 "../../src/lib/tokens.gperf"
    {"PolygonFigure",FH_POLYGONFIGURE},
#line 80 "../../src/lib/tokens.gperf"
    {"MpObject",FH_MPOBJECT},
#line 20 "../../src/lib/tokens.gperf"
    {"BrushList",FH_BRUSHLIST},
#line 130 "../../src/lib/tokens.gperf"
    {"Xform",FH_XFORM},
#line 57 "../../src/lib/tokens.gperf"
    {"Group",FH_GROUP},
#line 55 "../../src/lib/tokens.gperf"
    {"GradientMaskFilter",FH_GRADIENTMASKFILTER},
#line 47 "../../src/lib/tokens.gperf"
    {"FWBlurFilter",FH_FWBLURFILTER},
#line 60 "../../src/lib/tokens.gperf"
    {"ImageFill",FH_IMAGEFILL},
#line 25 "../../src/lib/tokens.gperf"
    {"ClipGroup",FH_CLIPGROUP},
#line 104 "../../src/lib/tokens.gperf"
    {"Rectangle",FH_RECTANGLE},
#line 40 "../../src/lib/tokens.gperf"
    {"ElemPropLst",FH_ELEMPROPLST},
    {(char*)0, 0},
#line 64 "../../src/lib/tokens.gperf"
    {"LensFill",FH_LENSFILL},
#line 110 "../../src/lib/tokens.gperf"
    {"SymbolClass",FH_SYMBOLCLASS},
#line 103 "../../src/lib/tokens.gperf"
    {"RaggedFilter",FH_RAGGEDFILTER},
    {(char*)0, 0}, {(char*)0, 0},
#line 85 "../../src/lib/tokens.gperf"
    {"NewRadialFill",FH_NEWRADIALFILL},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 86 "../../src/lib/tokens.gperf"
    {"OpacityFilter",FH_OPACITYFILTER},
#line 13 "../../src/lib/tokens.gperf"
    {"ArrowPath",FH_ARROWPATH},
    {(char*)0, 0},
#line 44 "../../src/lib/tokens.gperf"
    {"Extrusion",FH_EXTRUSION},
    {(char*)0, 0},
#line 39 "../../src/lib/tokens.gperf"
    {"ElemList",FH_ELEMLIST},
#line 83 "../../src/lib/tokens.gperf"
    {"NewBlend",FH_NEWBLEND},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 111 "../../src/lib/tokens.gperf"
    {"SymbolInstance",FH_SYMBOLINSTANCE},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 129 "../../src/lib/tokens.gperf"
    {"VMpObj",FH_VMPOBJ},
    {(char*)0, 0},
#line 109 "../../src/lib/tokens.gperf"
    {"SwfImport",FH_SWFIMPORT},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 12 "../../src/lib/tokens.gperf"
    {"AGDSelection",FH_AGDSELECTION}
  };

const struct fhtoken *
Perfect_Hash::in_word_set (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (s && *str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
#line 131 "../../src/lib/tokens.gperf"

