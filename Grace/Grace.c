#include <stdio.h>
#define print_to_file(x, y) fprintf(x, y, 10, 10, 34, 34, 34, 34, 10, 34, y, 34, 10);
#define open_file FILE* fptr = fopen("Grace_kid.c", "w");
#define F() int main() {open_file print_to_file(fptr, "#include <stdio.h>%c#define print_to_file(x, y) fprintf(x, y, 10, 10, 34, 34, 34, 34, 10, 34, y, 34, 10);%c#define open_file FILE* fptr = fopen(%cGrace_kid.c%c, %cw%c);%c#define F() int main() {open_file print_to_file(fptr, %c%s%c)}%cF()")}
F()