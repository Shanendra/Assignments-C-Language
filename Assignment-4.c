#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


// PLEASE REMOVE COMMENT FROM FUNCTION WHICH YOU WANT RUN!




int a,b;



// 1. Write a program to print MySirG 5 times on the screen
void  Mysirg()
{
    a=1;
    while(a<=5)
    {
        printf("\n%d := MySirG",a);
        a++;
    }
}









// 2. Write a program to print the first 10 natural numbers.
void Natural_Numbers()
{
    a=1;
    printf("\nNatural Numbers :=");
    while (a<=10)
    {
        printf("\n %d",a);
        a++;

    }
}








// 3. Write a program to print the first 10 natural numbers in reverse order
void Natural_Numbers_Rev()
{
    a=10;
    printf("\nNatural Numbers Reverse :=");
    while (a>=1)
    {
        printf("\n %d",a);
        a--;
    }
    
}









// 4. Write a program to print the first 10 odd natural numbers
void Odd_Natural_Numbers()
{
    a=1;
    while(a<=20)
    {
        if (a%2)
        printf("\n %d",a);
        a++;
    }
}









// 5. Write a program to print the first 10 odd natural numbers in reverse order.
void Odd_Natural_NumbersRev()
{
    a=20;
    while(a>=1)
    {
        if(a%2)
        {
        printf("\n %d",a);
        }
        a--;
        
    }
}











// 6. Write a program to print the first 10 even natural numbers
void Even_Natural_Numbers()
{
    a=1;
    while(a<=20)
    {

        if (a%2==0)
        printf("\n %d",a);
        a++;
    }
}








// 7. Write a program to print the first 10 even natural numbers in reverse order
void Even_Natural_NumbersRev()
{
    a=20;
    while(a>=1)
    {
        if(a%2==0)
        {
        printf("\n %d",a);
        }
        a--;
        
    }
}










// 8. Writea program to print squares of the first 10 natural numbers
void SquarNatural_Numbers()
{
    a=1;
    printf("\nNatural Numbers :=");
    while (a<=10)
    {
        printf("\n %d",a*a);
        a++;

    }
}










// 9. Write a program to print cubes of the first 10 natural numbers
void CubeNatural_Numbers()
{
    a=1;
    printf("\nNatural Numbers :=");
    while (a<=10)
    {
        printf("\n %d",a*a*a);
        a++;
    }
}









  
// 10. Write a program to print a table of 5.
void Tableof5()
{
    a=1 ; b=5;
    printf("\nTable Of 5 :=");
    while (a<=10)
    {
        printf("\n5 * %d = %d",a,b*a);
        a++;
    }
}

















int main ()
{
    system("cls");

 // PLEASE REMOVE COMMENT FROM FUNCTION WHICH YOU WANT RUN!   
    
    
    
    
    //Mysirg();
    //Natural_Numbers();
    // Natural_Numbers_Rev();
    ///Odd_Natural_Numbers();
    //Odd_Natural_NumbersRev();
    //Even_Natural_Numbers();
    //Even_Natural_NumbersRev();
    //SquarNatural_Numbers();
    //CubeNatural_Numbers();
    // Tableof5();








return 0 ;


// **************** COMPLETE! ***************
}
