#include <stdio.h>
#define BUFSIZE 1000

static char buf[BUFSIZE];
static int bufp;

int getch(void) {
	return (bufp > 0) ? buf[--bufp] : getchar();
}

