#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 int a,b,c,d,e,f,g,h;




// 1. Write a program to print unit digit of a given number
    void UnitDigit()
    {
        printf("Enter A Number :=");
        scanf("%d",&a);
        printf("Unit Digit Of Given Number := %d",a%10);
    }
   
   
   
   
// 2. Write a program to print a given number without its last digit.   
    void UnitDigitl()
    {
        printf("Enter A Number :=");
        scanf("%d",&a);
        printf("Unit Digit Of Given Number := %d",a/10);
    }



// 3. Write a program to swap values of two int variables
void Swap()
{

    
    int x,y;
    printf("Enter First Number := ");
    scanf ("%d ",&a);
    printf("Enter Second Number := ");
    scanf ("%d ",&b);
    x=a;y=b;

    int temp ;

    temp = y ;
    y = x ;
    x = temp ;

    printf ("The Value Of x Is := %d" "\nThe Value Of Y Is :=%d",x,y);
}




// 4. Write a program to swap values of two int variables without using a third variable.
void SwapThird()
{
    int x,y;
    printf("Enter First Number := ");
    scanf ("%d",&a);
    printf("Enter Second Number := ");
    scanf ("%d",&b);
    x=a;y=b;

    x= x+y ;
    y= x-y;
    x= x-y ;

    printf ("The Value Of x Is := %d" "\nThe Value Of Y Is :=%d",x,y);
}



//5. Write a program to input a three-digit number and display the sum of the digits.

void SumDigit()
    {
        printf("Enter A Number :=");
        scanf("%d",&a);
 
        c=0;

        while(a!=0)
        {
            b= a%10;
            c = c+b;
            a= a/10;

        }

        printf("Sum Of digits := %d",c);
    }



// 6. Write a program which takes a character as an input and displays its ASCII code.
void Charcterinput()
{
    printf("Enter A Single Character :=");
    char a ;
    scanf("%c",&a);

    printf("\nASCII Value Of Your Character %d",a);

}


// 7. Write a program to find the position of first 1 in LSB.

    void LSB()
    {
        printf("Enter A Number To Check LSB Set Or Not! :=");
         scanf("%d",&a);

         if (a&1 == 1)
         {
             printf("LSB Set!");
         }
         else 
         {
            printf("LSB Not Set!");
         }

    }




// 8. Write a program to check whether the given number is even or odd using a bitwise
//operator.
void EvenoddXor()
{
    printf("Enter A Number To Check Even/Odd :=");
    scanf("%d",&a);

    if ((a^1) == a+1)
    {
        printf("Given Number Is Even! ");
    }
    else
    {
        printf("Given Number Is Odd!");
    }
}




// 9. Write a program to print size of an int, a float, a char and a double type variable
void Sizeof()
{

a = sizeof(int);
b = sizeof(char);
c = sizeof(float);
d = sizeof(double);


printf("\nSize Of An int Variable    := %d",a);
printf("\nSize Of An char Variable   := %d",b);
printf("\nSize Of An float Variable  := %d",c);
printf("\nSize Of An double Variable := %d",d);

}




//Q.10=> Write a program to make the last digit of a number stored in a variable as zero.
//         (Example - if x=2345 then make it x=2340)

    
    void LastDigit()
    {
      printf("enter a no. :");

      int n,x;
      scanf("%d",&n);

      x=n%10;
      n=n-x;

      printf("result is : %d", n);
      return 0;
     
    }




// 11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number.
void InpNum()
{
    printf("Enter A Number := ");
    scanf ("%d",&a);
    printf ("\nEnter A Digit := ");
    scanf ("%d",&b);

    printf("Append a resulting number := %d%d",a,b) ;
}




// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.
void USDconversion()
{
    float a;
    printf("Enter Money In Rupee :=");
    scanf("%f",&a);
    a = a/76.23;
    printf("After Exchanging Money Rupee - Doller :=%f",a);
}



// 13. Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.
 void ShiftDigit ()
 {
    printf("Enter A Number := ");
    scanf ("%d",&a);

     b = a%10;
     a = a/10;

     printf("Value :=%d%d",b,a);
 }




int main ()
{
    system("cls");
  // Swap();
   //SwapThird();
   //Charcterinput();
   //Sizeof();
   //InpNum() ;
   //USDconversion();
   // LSB();
   //UnitDigit();
   //UnitDigitl();
    //SumDigit();
    //EvenoddXor();
    //ShiftDigit ();
   //LastDigit();

   int choose ; 


    // ******************* MENU ********************
    do 
    {
    printf ("\n(Answer!)");
    printf ("\n\n\n\n********************* MENU *********************\n");
    printf ("\n");
    printf ("00.Maza Nhi Aa Rha H Band Kro Program! -- :(\n\n01. Print unit digit of a given number ?\n02. Print a given number without its last digit.?\n03. Swap values of two int variables?\n04. Swap values of two int variables without using a third variable.?\n05. Input a three-digit number and display the sum of the digits.?\n06. Takes a character as an input and displays its ASCII code.?\n07. Find the position of first 1 in LSB.?\n08. Check whether the given number is even or odd using a bitwise operator.?\n09. Print size of an int, a float, a char and a double type variable? \n10. Make the last digit of a number stored in a variable as zero. ?\n11. Append a digit in the number and print the resulting number.?\n12. Take the amount in INR and convert it into USD.?\n13. Take a three-digit number from the user and rotate its digits ?\n");
    printf ("\n") ;
    printf ("\n \nMai Aap Ki Seva M Hazir Hu Sir :\n");
    printf ("Aap Kon Sa Program Chalana Chahen Ge?, No. Select Kriye ;\n");
    printf ("Number? := ");
    


    scanf("%d",&choose);



     switch (choose)
    {
    case 0 :
        printf("See You Soon Sir :)");
        return 0 ;
    
    case 1 :
       UnitDigit();
        break;

    case 2 :
        UnitDigitl();
        break;

    case 3 :
       Swap(); 
        break;

    case 4 :
       SwapThird(); 
        break;

    case 5 :
       SumDigit();  
        break;

    case 6 :
      Charcterinput(); 
        break;

    case 7 :
        LSB();
        break;


    case 8 :
        EvenoddXor(); 
        break;

    case 9 :
        Sizeof();
        break;

    case 10 :
      LastDigit();
        break;

    case 11 :
       InpNum() ; 
        break;

    case 12 :
      USDconversion();  
        break;

    case 13 :
        ShiftDigit ();
        break;

    
    }


} while (choose !=0);






    getch();
    return 0 ;

//             ***********************************COMPLETE*********************************     
}

   
