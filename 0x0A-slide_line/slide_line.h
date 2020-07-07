#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

#include <stdio.h>
#include <stdlib.h>

#define SLIDE_LEFT 2
#define SLIDE_RIGHT 1

int slide_line(int *line, size_t size, int direction);
int to_the_left(int *line, size_t size);
int to_the_right(int *line, size_t size);

#endif /* SLIDE_LINE_H */
