#include <stdio.h>
#include <ctype.h>
#include "calc.h"

int getop (char s[]) {
	int i;
	static int c;
	static int tracker = 0;

	if (tracker > 0) {
		tracker--;
		s[0] = c;
	} else
		while ((s[0] = c = getch()) == ' ');

	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c; // Not a number

	i = 0;
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;

	s[i] = '\0';
	if (c != EOF && c != ' ')
		tracker++;
	return NUMBER;

}
