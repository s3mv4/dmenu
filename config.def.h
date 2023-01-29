/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:style Regular:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* gruvbox colors */
/* normal */
#define BG          "#282828"
#define N_RED       "#cc241d"
#define N_GREEN     "#98971a"
#define N_YELLOW    "#d79921"
#define N_BLUE      "#458588"
#define N_PURPLE    "#b16286"
#define N_AQUA      "#689d6a"
#define N_GRAY      "#a89984"
/* bright */
#define B_GRAY      "#928374"
#define B_RED       "#fb4934"
#define B_GREEN     "#b8bb26"
#define B_YELLOW    "#fabd2f"
#define B_BLUE      "#83a598"
#define B_PURPLE    "#d3869b"
#define B_AQUA      "#8ec07c"
#define FG          "#ebdbb2"

#define MAIN N_AQUA

/* normal theme */
//static const char norm_fg[]         = FG;
//static const char norm_bg[]         = BG;
//static const char sel_fg[]          = FG;
//static const char sel_bg[]          = MAIN;
/* alternative theme */
static const char norm_fg[]         = FG;
static const char norm_bg[]         = BG;
static const char sel_fg[]          = MAIN;
static const char sel_bg[]          = BG;
static const char out_fg[]          = BG;
static const char out_bg[]          = FG;

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { norm_fg, norm_bg },
	[SchemeSel] = { sel_fg, sel_bg },
	[SchemeOut] = { out_fg, out_bg },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
