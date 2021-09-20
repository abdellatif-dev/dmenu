static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;    /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
static int fuzzy = 1; /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */

static const char *fonts[] = {
    "Hack:pixelsize=15:antialias=true:autohint=true",
    "JoyPixels:pixelsize=15:antialias=true:autohint=true"};

static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#cccccc", "#1A1B26"},
    [SchemeSel] = {"#090A0F", "#23b0c0"},
    [SchemeSelHighlight] = {"#d7d7d7", "#090A0F"},
    [SchemeNormHighlight] = {"#23b0c0", "#090A0F"},
    [SchemeOut] = {"#090A0F", "#ACCCEE"},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 10;
static unsigned int columns = 2;
static unsigned int lineheight =
    25; /* -h option; minimum height of a menu line */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " *''/?\"&[]";

/* Size of the window border */
static unsigned int border_width = 3; /* -bw option; to add border width */
