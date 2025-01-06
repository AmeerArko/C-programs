#include <stdio.h>
int main(){
    int temp;
    printf ("Enter temprature :");
    scanf ("%d",&temp);
    if (temp<=0){
        printf ("The temprature is equal or below freezing point!");
    }
    else {
        printf ("The tempreture is above freezing point!");
    }
}