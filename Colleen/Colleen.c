#include <stdio.h>

/*
	Ceci est un commentaire en dehors de la fonction main
*/

int my_func() {return(0);}

int main() {
char *s = "#include <stdio.h>%c%c/*%c%cCeci est un commentaire en dehors de la fonction main%c*/%cint my_func() {return(0);}%c%cint main() {%cchar *s =%c%s%c;%c/*%c%cCeci est un commentaire dans la fonction main%c*/%cint a;%ca = my_func();%cprintf(s, 10, 10, 10, 9, 10, 10, 10 , 10, 10, 10, 10, 34, s, 34, 10, 10, 9, 10, 10, 10, 10, 10, 10);%creturn(0);%c}" ;
/*
	Ceci est un commentaire dans la fonction main
*/
int a;
a = my_func();
printf(s, 10, 10, 10, 9, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 9, 10, 10, 10, 10, 10, 10);
return(0);
}