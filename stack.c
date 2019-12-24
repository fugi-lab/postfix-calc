#include <stdio.h>
#include "calc.h"
#define MAXVAL 1000

static int sp = 0; // Stack pointer
static double val[MAXVAL];

void push (double f) {
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("Error: stack full, can not push %g\n", f);
}

double pop(void) {
	if (sp > 0)
		return val[--sp];
	else {
		printf("Error: stack empty\n");
		return 0.0;
	}
}
