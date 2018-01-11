#include <stdio.h>
#include <stdlib.h>
#define print_to_file(x, y) fprintf(x, y, 10, 10, 10, 34, 34, 34, 34, 10, 34, 34, 10, 10, i, 10, 34, y, 34, 10);
#define open_file char s[100]; snprintf(s, 99, "Sully_%d.c", i); FILE *fptr = fopen(s, "w");
#define compile_and_run char command[1000]; snprintf(command, 999, "gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d && ./Sully_%d", i, i, i); system(command);
int main() {
int i = 5;
--i; open_file print_to_file(fptr, "#include <stdio.h>%c#include <stdlib.h>%c#define print_to_file(x, y) fprintf(x, y, 10, 10, 10, 34, 34, 34, 34, 10, 34, 34, 10, 10, i, 10, 34, y, 34, 10);%c#define open_file char s[100]; snprintf(s, 99, %cSully_%%d.c%c, i); FILE *fptr = fopen(s, %cw%c);%c#define compile_and_run char command[1000]; snprintf(command, 999, %cgcc -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d && ./Sully_%%d%c, i, i, i); system(command);%cint main() {%cint i = %d;%c--i; open_file print_to_file(fptr, %c%s%c) compile_and_run%c}") compile_and_run
}