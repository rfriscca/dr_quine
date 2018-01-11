#include <stdio.h>
#include <stdlib.h>
#define print_to_file(x, y) fprintf(x, y, 10, 10, 10, 34, 34, 34, 34, 10, 34, 34, 10, 10, 10, i, 10, 34, y, 34, 10); fclose(x);
#define open_file char s[100]; snprintf(s, 99, "Sully_%d.c", i); FILE *fptr = fopen(s, "w");
#define compile_and_run char command[1000]; snprintf(command, 999, "gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d && ./Sully_%d", i, i, i); system(command);
#define check_i if (i == 0) {return(0);}
int main() {
int i = 5;
check_i --i; open_file print_to_file(fptr, "#include <stdio.h>%c#include <stdlib.h>%c#define print_to_file(x, y) fprintf(x, y, 10, 10, 10, 34, 34, 34, 34, 10, 34, 34, 10, 10, 10, i, 10, 34, y, 34, 10); fclose(x);%c#define open_file char s[100]; snprintf(s, 99, %cSully_%%d.c%c, i); FILE *fptr = fopen(s, %cw%c);%c#define compile_and_run char command[1000]; snprintf(command, 999, %cgcc -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d && ./Sully_%%d%c, i, i, i); system(command);%c#define check_i if (i == 0) {return(0);}%cint main() {%cint i = %d;%ccheck_i --i; open_file print_to_file(fptr, %c%s%c) compile_and_run%c}") compile_and_run
}