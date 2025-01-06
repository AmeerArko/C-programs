#include <stdio.h>
int main(){
    float cg;
    int atd;
    printf ("Enter CGPA:\n");
    scanf ("%f",&cg);
    printf ("Enter attendence:\n");
    scanf("%d",atd);
    if (cg>=3.5 && atd>=80){
        printf ("Eligable for scholarships!");
    }
    else {
        printf ("Not eligable!");
    }
}