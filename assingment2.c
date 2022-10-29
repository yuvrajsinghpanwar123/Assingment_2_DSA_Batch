/*Assignment: 2 Operators in C Language
 C, C++ and DSA in depth with Job Assistance in Hindi */

// 1. Write a program to print unit digit of a given number
/*
#include <stdio.h>
int main()
{
    int a;
    printf("\nenter a number :");
    scanf("%d", &a);
    printf("unit digit = %d", a % 10);
    return 0;
}
*/

// 2. Write a program to print a given number without its last digit.
/*#include <stdio.h>
int main()
{
    int a;
    printf("\nenter a number :");
    scanf("%d", &a);
    printf("number without last digit is = %d", a / 10);
    return 0;
}
*/

// 3. Write a program to swap values of two int variables
/*
#include <stdio.h>
int main()
{
    int a = 2, b = 4;
    int t;
    t = a;
    a = b;
    b = t;
    printf("value of a after swappig = %d", a);
    printf("\nvalue of b after swappig = %d", b);



    return 0;
}

*/

// 4. Write a program to swap values of two int variables without using a third variable.
/*
#include <stdio.h>
int main()
{
    int a = 2, b = 4;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d", a);
    printf("\nb = %d", b);
    return 0;
}
*/

// 5. Write a program to input a three digit number and display the sum of the digits.
/*
#include <stdio.h>
int main()
{
    int a;
    printf("enter a three digit number\n");
    scanf("%d", &a);
    int x = a;
    int sum = 0;
    sum = a % 10;
    a = a / 10;
    sum += a % 10;
    a = a / 10;
    sum += a % 10;
    printf("sum of three digit number %d is %d", x, sum);

    return 0;
}
*/

// 6. Write a program which takes a character as an input and displays its ASCII code.
/*
#include <stdio.h>
int main()
{
    char c = '9';
    printf("character is = %c and its ASCII value is %d", c, c);
    return 0;
}
*/

/*Q 7. Write a program to check whether the given number is even or odd using a bitwise
operator.
*/
/*
#include <stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d", &x);
    (x & 1) ? printf("odd") : printf("even");

    return 0;
}

*/

// 8. Write a program to print size of an int, a float, a char and a double type variable .
/*
#include <stdio.h>
int main()
{
    printf("size of int = %d", sizeof(int));
    printf("\nsize of float = %d", sizeof(float));
    printf("\nsize of character = %d", sizeof(char));
    printf("\nsize of double= %d", sizeof(double));
    return 0;
}
*/

/*9. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/

/*
#include <stdio.h>
int main()
{
    int a = 1742;
    int b = a / 10;
    b = b * 10;
    printf("b = %d", b);

    return 0;
}
*/

/*10. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349).*/
/*
#include <stdio.h>
int main()
{
    int num = 123;
    int digit = 6;
    int result = num * 10 + digit;
    printf("result = %d", result);
    return 0;
}
*/

/*11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.*/
/*
#include <stdio.h>
int main()
{
    float INR;
    printf("enter INDIAN RUPEES\n");
    scanf("%f", &INR);
    float USD = INR / 76.23;
    printf("value of %f indian rupees in dollar is %f", INR, USD);
    return 0;
}
*/

/*12. Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.*/
/*
#include <stdio.h>
int main()
{
    int x;
    printf("enter a three digit number \n");
    scanf("%d", &x);
    x = (x % 10) * 100 + x / 10;
    printf("after right rotation = %d", x);
    return 0;
}
*/