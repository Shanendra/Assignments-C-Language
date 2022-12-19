#include <stdio.h >
#include <stdlib.h>
#include <conio.h >





int a,b,c,d; float e,f; char g,h;






// 1. Write a program to calculate sum of first N natural numbers
void Sum_of_N_Natural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1; c=0;
    while(a<=b)
    {
        c=c+a;
        a++;
    }
    printf("Sum is := %d",c);
    

}








// 2. Write a program to calculate sum of first N even natural numbers
void Sum_Of_N_Even_Natural_Numbers ()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1;c=0;b*=2;
    while(a<=b)
    {

        if (a%2==0)
        c=c+a;
        a++;
    }
    printf("Sum is := %d",c);
}









// 3. Write a program to calculate sum of first N odd natural numbers
void Odd_Natural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1; b*=2; c=0;
    while(a<=b)
    {
        if (a%2)
        c=c+a;
        a++;
    }
    printf("Sum is := %d",c);
}









// 4. Write a program to calculate sum of squares of first N natural numbers
void SquarNatural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    
    a=1;
    
    while (a<=b)
    {
        c=c+a*a;
        a++;

    }
    printf("Sum is := %d",c);
}







// 5. Write a program to calculate sum of cubes of first N natural numbers
void CubeNatural_Numbers()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=1; c=0;
   
    while (a<=b)
    {
        c=c+a*a*a;
        a++;
    }
    printf("Sum is := %d",c);
}




// 6. Write a program to calculate factorial of a number
void fact()
{
     printf("\nEnter A Number := ");
    scanf("%d",&b);
    c=1;a=b;
    while(b!=0)
    {
        c=c*b;
        b--;

    }
    printf("Factorial Of %d is := %d",a,c);



}






// 7. Write a program to count digits in a given number

void count ()
{
    printf("\nEnter A Number := ");
    scanf("%d",&a);     
    c=0;

    while (a>0)
    {
        a=a/10;
        c++;
    }

    printf("You Enterd %d Digits!",c);


}









// 8. Write a program to check whether a given number is a Prime number or not.
void Prime()
{
    printf("\nEnter A Number := ");
    scanf("%d",&b);
    a=2;

    while(a<b)
    {
        if(a%b)
        {
        printf("NOT PRIME!");
        
        }
        a++;
    }
    if  (a%b==0)
    {
       printf("PRIME!"); 
    }
}






// 9. Write a program to calculate LCM of two numbers

void LCM ()
{
    printf("\nEnter Two Number := ");
    scanf("%d %d",&a,&b);

    for(c=a>b?a:b; c<=a*b; c=c+(a>b?a:b) )
    {
        if (c%a==0 && c%b==0)
        break;
    }
    printf("LCM Of Given Number Is := %d",c);

}



// 10. Write a program to reverse a given number

void Reverse()
{
    printf("\nEnter A Number := ");
    scanf("%d",&a); b=0; c=0;

    while (a!=0)
    {
        b= a%10;
        c= c*10+b;
        a= a/10;
    }

    printf("The Reverse Order Is := %d",c);
    
}











int main()
{
    system("cls");

// PLEASE REMOVE COMMENT FROM FUNCTION WHICH YOU WANT RUN!  





    //Sum_of_N_Natural_Numbers();
    //Sum_Of_N_Even_Natural_Numbers ();
    //Odd_Natural_Numbers();
    //SquarNatural_Numbers();
    //CubeNatural_Numbers();
    //fact();
    //count ();
    //Prime();
    //LCM ();
    //Reverse();





// **************** COMPLETE! ***************
    return 0;
}