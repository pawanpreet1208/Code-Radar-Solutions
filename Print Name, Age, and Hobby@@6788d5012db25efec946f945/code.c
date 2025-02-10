#include <stdio.h>


int main() {
    char str1[100];
    int age;
    char str2[100];

    scanf("%c %d %c",&str1,&age,&str2);
    printf("Name: %c/n",str1);
    printf("Age: %d/n",age);
    printf("Hobby: %c/n",str2);


    return 0;
}