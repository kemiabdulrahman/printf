#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    int best = 23;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
     
  
                
                
                _printf("#u",13);
		_printf("+i", 89);
                _printf("+d", 8);
		_printf("+u", 23);
                _printf("+o", 10);
		_printf("+x", 10);
                _printf("+X", 89);
		_printf(" i", 89);
                _printf(" d", 123);
		_printf(" u", 890);
                _printf(" o", 123); 
		_printf(" x", 78);
                _printf(" X", 123);

                
		_printf("%", 23);
                _printf("l", 123);
		_printf("h", 12345);
                _printf(" +i", 455);
		_printf(" +d", 123);
                _printf("+ i", 1245);
		_printf("+ d", 56);
                _printf(" %\n", 33);
        











    _printf("%#i\n", 345);
    _printf("%#X\n", 14);
    _printf("%+i\n", 12);
    _printf("% i\n", 34);
    _printf("%hu\n", 12);


    _printf("%hX\n", 456);
    _printf("%hi\n", 4);
    _printf("%hx\n", 10);
    _printf("%ho\n", 10);


    _printf("%r\n", "Reverse me");
    _printf("%R\n", "Hey Guys");
    _printf("%p\n", &best);
    _printf("%lo\n", 12.34555);
    _printf("%lx\n", 12.34556);
    _printf("%li\n", 45662);
    _printf("%lX\n", 123);
    _printf("%lu\n", 12);




    _printf("Length:[%d, %i]\n", len, len);
    _printf("Length:[%d, %i]\n", len, len);
    _printf("%o\n", 12);
    _printf("%s\n", "Display me");
    _printf("%i\n", 123);
    _printf("%b\n", 1234);
    _printf("%S\n", "Hello World");
    _printf("%X\n", 12.45);








    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    
    
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
   
    return (0);
}
