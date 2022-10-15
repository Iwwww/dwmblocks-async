#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sb-disk",        1800, 10),
	BLOCK("sb-internet",    20,   4),
	BLOCK("sb-volume",      0,    3),
	BLOCK("sb-battery",     5,    2),
	BLOCK("sb-clock",       60,   1)
};
