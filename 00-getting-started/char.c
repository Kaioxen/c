#include <stdio.h>

int main()
{
	char *_x;
	char *_z;
	char *_y;
	char *_w;
    char *_grade;
    char _hello[] = "Hello";
    char _my[] = "my";
    char _name[] = "name";
    char _is[] = "is";
    char _wildan[] = "Wildan Hermawan";
    
/*
    _hello = "Hello";
    _my = "my";
    _name = "name";
    _is = "is";
    _wildan = "Wildan";
  */  
    _grade = "A";
	printf("%s\n", _grade);
	_x = "What Is Your Name?";
	_z = "Whyy Do You Learn C Language?";
	_y = "Do You Like Coffe?";
    _w = "Do you know CR7?";
    printf("%s %s %s %s\n ", _x, _z, _y, _w);  

    printf("%s %s %s %s %s\n ", *_hello, *_my, *_name, *_is, *_wildan);
	return 0;
}
