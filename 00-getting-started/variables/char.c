#include <stdio.h>

int main()
{
	char *x;
	char *z;
	char *y;
	char *w;
    char *grade;
    char hello[] = "Hello";
    char my[] = "my";
    char name[] = "name";
    char is[] = "is";
    char wildan[] = "Wildan Hermawan";
    char *depan = "HELLO";
    char *belakang = "WORLD";
/*
    _hello = "Hello";
    _my = "my";
    _name = "name";
    _is = "is";
    _wildan = "Wildan";
  */  
    grade = "A";
	printf("%s\n", grade);
	x = "What Is Your Name?";
	z = "Whyy Do You Learn C Language?";
	y = "Do You Like Coffe?";
    w = "Do you know CR7?";
    printf("%s %s %s %s\n ", x, z, y, w);  

    printf("%d %d %d %d %d\n ", *hello, *my, *name, *is, *wildan);

       printf("%s%s\n", depan, belakang  
);

	return 0;


}
