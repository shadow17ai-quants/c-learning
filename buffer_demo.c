#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);

    // Clear the buffer
    while(getchar() != '\n');

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Age: %d, Name: %s", age, name);
    return 0;
}