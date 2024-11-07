#include <stdio.h> 
int main( ){
    int a,b,sum;
     char symbol;
    printf ("Enter number :\n");
    scanf ("%d %d",&a,&b);
    printf ("Enter symbvol:");
    scanf (" %c", &symbol);
   
    if (symbol=='+'){
        sum=a+b;
        printf("The sumation is :%d",sum);
    }
    else if(symbol=='-'){6
        sum=a-b;
        printf ("The subtraction is :%d",sum);

    }
       else if(symbol=='*'){
        sum=a*b;
        printf ("The MUltiplication is :%d",sum);
        
    }   else if(symbol=='/'){
        sum=a/b;
        printf ("The Devision is :%d",sum);
        
    }
    else {
        printf ("Wrong Symbol!");
    }
    

}
