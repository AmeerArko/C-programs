#include <stdio.h>
int main(){
    int id,pin;
    printf ("Enter ID number :");
    scanf ("%d",&id);
    printf ("Enter Pin:");
    scanf ("%d",&pin);
    if (id==1234||pin==5678){
        printf ("Access Granted!");
    }
    else {
        printf ("Access Denied!");
    }
}