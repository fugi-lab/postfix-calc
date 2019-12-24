#include <stdio.h>
#define BUFSIZE 1000

static char buf[BUFSIZE];
static int bufp;

int getch(void) {
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
	if (bufp >= BUFSIZE)
		printf("ungetch: too many charachters\n");
	else
		buf[bufp++] = c;
}
