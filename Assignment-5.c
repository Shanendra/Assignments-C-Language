#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


// PLEASE REMOVE COMMENT FROM FUNCTION WHICH YOU WANT RUN!




int a,b;





// 1. Write a program to print MySirG N times on the screen
void  Mysirg()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1;
    while(a<=b)
    {
        printf("\n%d := MySirG",a);
        a++;
    }
}









// 2. Write a program to print the first N natural numbers
void Natural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1;
    printf("\nNatural Numbers :=");
    while (a<=b)
    {
        printf("\n %d",a);
        a++;

    }
}








// 3. Write a program to print the first N natural numbers in reverse order
void Natural_Numbers_Rev()
{
    printf("\nEnter A Number := ");
    scanf("%d",&a);
   
    printf("\nNatural Numbers Reverse :=");
    while (a>=1)
    {
        printf("\n %d",a);
        a--;
    }
    
}









// 4. Write a program to print the first N odd natural numbers
void Odd_Natural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1;
    while(a<=b)
    {
        if (a%2)
        printf("\n %d",a);
        a++;
    }
}









// 5. Write a program to print the first N odd natural numbers in reverse order.
void Odd_Natural_NumbersRev()
{
    printf("\nEnter A Number := ");
    scanf("%d",&a);
    
    while(a>=1)
    {
        if(a%2)
        {
        printf("\n %d",a);
        }
        a--;
        
    }
}











// 6. Write a program to print the first N even natural numbers
void Even_Natural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1;
    while(a<=b)
    {

        if (a%2==0)
        printf("\n %d",a);
        a++;
    }
}








// 7. Write a program to print the first N even natural numbers in reverse order
void Even_Natural_NumbersRev()
{
    printf("\nEnter A Number := ");
    scanf("%d",&a);
    while(a>=1)
    {
        if(a%2==0)
        {
        printf("\n %d",a);
        }
        a--;
        
    }
}










// 8. Write a program to print squares of the first N natural numbers
void SquarNatural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1;
    printf("\nNatural Numbers :=");
    while (a<=b)
    {
        printf("\n %d",a*a);
        a++;

    }
}










// 9. Write a program to print cubes of the first N natural numbers
void CubeNatural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1;
    printf("\nNatural Numbers :=");
    while (a<=b)
    {
        printf("\n %d",a*a*a);
        a++;
    }
}









  
// 10. Write a program to print a table of N
void TableofN()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1 ;
    printf("\nTable Of %d :=",b);
    while (a<=10)
    {
        printf("\n%d * %d = %d",b,a,b*a);
        a++;
    }
}

















int main ()
{
    system("cls");

 // PLEASE REMOVE COMMENT FROM FUNCTION WHICH YOU WANT RUN!   
    
    
    
    
    //Mysirg();
   //Natural_Numbers();
    //Natural_Numbers_Rev();
    //Odd_Natural_Numbers();
    // Odd_Natural_NumbersRev();
    //Even_Natural_Numbers();
    //Even_Natural_NumbersRev();
    //SquarNatural_Numbers();
    //CubeNatural_Numbers();
    //TableofN();








return 0 ;


// **************** COMPLETE! ***************
}
