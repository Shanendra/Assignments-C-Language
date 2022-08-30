#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>



int main ()
{
    int Radius,Lengh,DD,MM,YYYY,Hour,Minuts,s;
    float Area;
    
   
    system("cls");
    
    printf("1. Hello\n");
    
    printf("\n2. Hello\nStudents\n");
    
    printf("\n3. \"MySirG\"\n");

    printf("\n4. Enter The Radius Of Circle := \n");
    scanf("%d",&Radius);
    Area = Radius*Radius*3.14;
    printf("Area Of Circle is %f having the radius %d\n",Area,Radius);
   
    printf("\n") ;
    s = printf("05. shanu");

    printf("\nThe Length Of String Is := %d",s);

    printf("\n") ;
    printf("\n06.\" Hello, Amit Kumar\"\n");

    printf("\n07.%%d");
    printf("\n\n08.\\n");
    printf("\n\n09.\\");

    printf("\n\n10. Enter date in (DD/MM/YYYY) :=");
    scanf("%d %d %d",&DD,&MM,&YYYY);
    printf("Day-%d,Month-%d,Year-%d",DD,MM,YYYY);

    printf("\n\n11. Please enter Time in (Hour & Minuts):=");
    scanf("%d %d", &Hour,&Minuts);
    printf("%d Hour and %d Minute",Hour,Minuts);  

    printf("\n") ;printf("\n") ;
    int x = printf("12. ineuron");
    printf("%d",x);
    //7 character
return 0;

}
