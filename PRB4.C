#include <stdio.h>
int main(){
    int age;
    printf ("Enter your age :");
    scanf ("%d",&age);
    if (age>18){
        printf ("You are than 18!");
    }
    else {
        printf ("You are 18 or younger.");
    }
}