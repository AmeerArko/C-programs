#include <stdio.h>
int main(){
    int age ;
    printf ("Enter your age :");
    scanf ("%d",&age);
    if (age>=60){
        printf ("You are eligable for a seniorcitizen discount!");
    }
    else {
        printf ("You are not eligable for senior citizen discount!");
    }
}