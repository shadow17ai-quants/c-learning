#include <stdio.h>
#include <string.h>


int main() {
   int age = 0;
   float gpa = 0.0f;
   char grade = '\0';
   char name[50] = "";

printf("Enter your age: ");
scanf("%d", &age);



printf("Enter your GPA: ");
scanf("%f", &gpa);  

printf("Enter your grade: ");      
scanf(" %c", &grade);  // Note the space before %c to consume any leftover newline character        

printf("Enter your first name: ");            
scanf("%s", name);  // Note: This will only read the first word of the name
   
getchar(); // Consume the leftover newline character from the previous input        
printf("Enter your full name: ");
fgets(name, sizeof(name), stdin);  // This will read the full name including spaces
name[strlen(name) - 1] = '\0'; // Remove the newline character added by fgets                   

printf("%d\n", age);
printf("%.2f\n", gpa);
printf("%c\n", grade);
printf("%s\n", name);



return 0;
}

