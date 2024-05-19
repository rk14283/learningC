/* Hello World 2.1*/
/*
#include <stdio.h>

main(void)
{
    printf("hello, world\n");
}
*/
/*Exercise 2.2*/
/*
#include <stdio.h>
int main(void)
{
    printf("Parkinson's Law: \nWork expands so as to ");
    printf("fill the time\n");
    printf("Available for its completion.\n");
    return 0; 
}
*/

/*Identify the directives and statements in this program*/
/*
Before a C program is compiled, it is first edited by a preprocessor. Comnmands
intended for the preprocessor are called directives

In our question this is the directive 
#include <stdio.h>

A statement is a com1nand to be executed when the program runs.
here statements are return and printf 
 printf("Parkinson's Law: \nWork expands so as to ");
    printf("fill the time\n");
    printf("Available for its completion.\n");
    return 0; 

Output produced by program:
Parkinson's Law: 
Work expands so as to fill the time
Available for its completion.
*/

/*Exercise 2.4 involves condensing dweight.c*/

/*Write a progra1n that declares several int and float variables-without initializing
them-and then prints their values. [s there any pattern to the values? (Usually there isn't.)*/

/*
#include <stdio.h>
int main (void)
{
    int height, weight, length, age;  
    float salary, discount, profit, loss; 

       printf("Ints: height = %d, weight = %d, length = %d, age = %d\n", height, weight, length, age);
    printf("Floats: salary = %.2f, discount = %.2f, profit = %.2f, loss = %.2f\n", salary, discount, profit, loss);
}
*/
/*
Interesting output 
Ints: height = 1444381033, weight = 32767, length = 100, age = 0
Floats: salary = 0.00, discount = -0.00, profit = 0.00, loss = 0.00

even though I did not intialize values for int 
#include <stdio.h>
int main (void)
{
    int height, weight, length, age;  
    float salary, discount, profit, loss; 

       printf("Ints: height = %d, weight = %d, length = %d, age = %d\n", height, weight, length, age);
    printf("Floats: salary = %.2f, discount = %.2f, profit = %.2f, loss = %.2f\n", salary, discount, profit, loss);
}

Uninitialized data in C can contain any values 

*/




/*Which are not legal C identifiers*/

/*Not legal because it begins with a digit*/
/*
100_bottles; 
_100_bottles; 

one__hundred__bottles; 

bottles_by_the_hundred_
*/

/*Why is it not a good idea for an identifier to contain more than one adjacent underscore (as
in current.__balance, for example)?*/

/*In summary, avoiding more than one adjacent underscore 
in identifiers improves code readability, reduces the likelihood of errors, maintains code consistency, avoids potential conflicts with language constructs,
 and ensures better international understanding. Using clear and simple naming conventions is 
key to writing maintainable and understandable code.*/

/*
7. 
Which of the foll.o\.ving are keywords in C'?
(a) for
(b) If
(c) main
(d) printf
(e) while
If is not a keyword, if with a small i is 
*/

/*
8. 
How many tokens are there in the following statement?
answer=(3*q-p*p)/3

We can think of a C program as a series of tokens: groups of characters that can't
be split up without changing their meaning. Identifiers and keywords are tokens.
So are operators like+ and -, punctuation n1arks such as the comma and semico-
lon, and stri ng literals. For example. Lhe statement

Literally every part except for the spaces are token and that means there are 14 tokens 
*/

/*
9.Insert spaces between the 
tokens in Exercise 8 to make the statement easier to read.

1. answer
2.=
3. (
4. 3
5. *
6. q
7. -
8. p
9. *
10. p
11. )
12. /
13. 3
14. ; 
*/

/* 10.ln the dweight. c program (Section 2.4). which spaces are essential? */

/* no spaces

dweight.c:3:19: warning: extra tokens at end of #include directive
    3 | #include <stdio.h>int main (void){int height = 8, length = 12, width = 10, volume;volume = height * length * width;printf("Dimensions: %dx%dx%d\n", length, width, height);printf("Volume (cubic inches): %d\n", volume);printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);return 0;}
      |                   ^~~
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
(.text+0x1b): undefined reference to `main'
collect2: error: ld returned 1 exit status

*/

/*correct answer is 1 space*/
/*
#include <stdio.h>
int main (void){int height = 8, length = 12, width = 10, volume;volume = height * length * width;printf("Dimensions: %dx%dx%d\n", length, width, height);printf("Volume (cubic inches): %d\n", volume);printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);return 0;}
*/