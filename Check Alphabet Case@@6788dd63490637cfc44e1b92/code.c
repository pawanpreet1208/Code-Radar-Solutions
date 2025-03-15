// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(97<=ch<=122){
        printf("Lowercase");
    }
    else if(65<=ch<=91){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}

   