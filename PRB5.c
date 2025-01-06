#include <stdio.h>
int main(){
    int score ;
    printf ("Enter your score:");
    scanf ("%d",&score);
    if (score <50){
        printf ("You've Failed!");

    }
    else {
        printf ("you've passed!");
    }
}