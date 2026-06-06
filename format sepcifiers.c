#include <stdio.h>
int main(){

// Format Specifiers = A special tokens that begins with a % symbol,
//    followed by a character that specifies the type of data type                     
//    and optional modifiers (width,precision,flags),
//    They control how data is displayed or interpreted     


int age = 25; 
float price = 19.99;
double pi = 3.4167526;
char currency = '$';
char name[] = "Ryan Kaushal";

printf("%d\n", age);
printf("%f\n", price);
printf("%lf\n", pi);
printf("%c\n", currency);
printf("%s\n", name);

// Width = Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with spaces.

int num1 = 1;
int num2 = 10;
int num3 = 100;



printf("Width: %1d\n", num1);
printf("Width: %2d\n", num2);
printf("Width: %3d\n", num3);


// precision = For floating-point numbers, it specifies the number of digits to be printed of 

float price1 = 19.99;
float price2 = 19.9999;
float price3 = 19.999999;

printf("Price: %.1f\n", price1);
printf("Price: %.2f\n", price2);
printf("Price: %.3f\n", price3);

//flags = Special characters that can be added to format specifiers to modify the output. some common flags include:
// - : Left-justify the output within the specified width. By default, the output is right-justified.
 
float num4 = 3.14;
 
printf("Default: %10f\n", num4); // Right-justified within a width of 10



return 0;
}