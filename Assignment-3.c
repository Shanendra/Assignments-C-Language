#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


// ****************************** Run All Code Directly! **********************
// Run Code Only Once In A While Don't Run Multiple Times!
    
    
    
    int a,b,c,d,e,f,g,h,i,j,k;
    float l,m,q,r;
    
    char n,o,p;



// 1. Write a program to check whether a given number is positive or non-positive.
    void PositiveNon()
    {
        printf("Enter A Number To Check Positive/Non Positive :=");
        scanf("%d",&a);

        if(a>0)
        {
            printf("\nGiven Number Is Positive!");
        }
        else
        {
            printf("\nGiven Number Is Non-Positive");
        }

    }



   


// 2. Write a program to check whether a given number is divisible by 5 or not   
    void DivisiblOrNot()
    {
        printf("Enter A Number To Check It Is Divisible By 5 or Not! :=");
        scanf("%d",&a);

        if (a%5 == 0 )
        {
            printf("\nIt Is Divisible By 5!");
        }
        else
        {
            printf("\nIt Is Not Divisible By 5!");
        }
    }






// 3. Write a program to check whether a given number is an even number or an odd number.
    void EvenOdd ()
    {
        printf("Enter A Number To Check Even Or Not! :=");
        scanf("%d",&a);

        if (a%2 == 0)
        {
            printf("\nGiven Number Is Even!");
        }
        else
        {
            printf("\nGiven Number Is Odd!");
        }


    }







//4. Write a program to check whether a given number is an even number or an odd
//number without using % operator.

    void EvenoddXor()
{
    printf("Enter A Number To Check Even/Odd :=");
    scanf("%d",&a);

    if ((a^1) == a+1)
    {
        printf("\nGiven Number Is Even! ");
    }
    else
    {
        printf("\nGiven Number Is Odd!");
    }
}






// 5. Write a program to check whether a given number is a three-digit number or not.
    void ThreeDigit()
    {
   
    
    printf("enter a integer no. :");
    scanf("%d",&a);
    if(a>99 && a<1000)
    printf("\ngiven no. is three digit no.");
    else
    printf("\nnot a three digit no. "); 
        
        
    }
        
        
    



// 6. Write a program to print greater between two numbers. Print one number of both are
//the same.

    void GreaterNUmber()
    {
        printf("Enter A First Number!(A) :=  ");
        scanf("%d",&a);
        
        printf("Enter A Second Number!(B) := ");
        scanf("%d",&b);

        if (a>b)
        {
            printf("\n(%d) Is Greater!",a);
        }
        else
        {
            printf("\n(%d) Is Greater!",b);
        }
    }






//Q.7=> Write a program to check whether roots of a given quadratic equation are 
//      real & distinct, real & equal or imaginary roots


   void Root()
   {
   int a,b,c,d;
   printf("give value of  a b and c in equation ax^2+bx+c : ");
   scanf("%d %d %d",&a, &b, &c);

   d=(b*b-4*a*c);

   if(d>0)printf("\nreal and  distinct roots");
   else if(d<0)printf("\nimaginary roots");
   else printf("\nreal and equal roots ");

   
   }







// 8. Write a program to check whether a given year is a leap year or not.

    void Leapyear()
    {
        printf("Enter a Year to Check Leap Year Or Not := ");
        scanf("%d",&a);


        if (a%4)
        {
            printf("\nNot A Leap Year!");
        }
        else if (a%100)
        {
            printf("\nIt Is A Leap Year!");
        }
        else if (a%400)
        {
            printf("\nNot A Leap Year!");
        }
        else printf("\nIt Is A Leap Year!");
    }









// 9. Write a program to find the greatest among three given numbers. Print number once 
//if the greatest number appears two or three times.


    void GratesThree()
    {
        printf("Enter First Number!  := \n");
        scanf("%d",&a);
        printf("Enter Second Number! := \n");
        scanf("%d",&b);
        printf("Enter Third Number!  := \n");
        scanf("%d",&c);

        if (a>=b)
        {
            if (a>=c)
            {
                printf("\n(A) Is Grater! := %d",a);
            }
        }
        else if (b>c)
        {
            printf("\n(B) Is Grater! := %d",b);
        }
        else if (c>a)
        {
            if (c>b)
            {
                printf ("\n(C) Is Grater! := %d",c);
            }
        }
    }









//  10. Write a program which takes the cost price and selling price of a product from the 
//user. Now calculate and print profit or loss percentage.



    void ProfitLoss()
    {
        printf("Enter Cost Price Of A Product!    := \n");
        scanf("%f",&l);
        printf("Enter Selling Price Of A Product! := \n");
        scanf("%f",&m);


        q=m/l*100;
        if (m>l)
        {
            printf("\nProfit Percentage Of A Product := %0.2f%%",q);
        }
        else if (l>m)
        {
             printf("\nLoss Percentage Of A Product := %0.2f%%",q);
        }
        else 
            printf("\nNo Profit Loss Of A Product := %0.2f%%",q);


    }






//11. Write a program to take marks of 5 subjects from the user. Assume marks are given
//out of 100 and passing marks is 33. Now display whether the candidate passed the
//examination or failed.


    void PassFail()
    {
        printf("Enter Maths Marks :=");
        scanf("%d",&a);
        printf("Enter Chemistry Marks :=");
        scanf("%d",&b);
        printf("Enter Physics Marks :=");
        scanf("%d",&c);
        printf("Enter Hindi Marks :=");
        scanf("%d",&d);
        printf("Enter English Marks :=");
        scanf("%d",&e);



        if((a>33)&&(b>33)&&(c>33)&&(d>33)&&(e>33))
        {
            printf("\nPass!");
        }
    
        else
        {
        printf("\nFail!");
        }
    
    }









/*  12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/

    void UpperLower ()
    {
        printf("Enter A Character To Check Upeer/Lower Case :=");
        scanf("%c",&n);

        if (n>=65 &&  n<=90)
        {
            printf("\nGiven Character Is Uppercase!");
        }
       else if (n<=97  && n<=122)
        {
            printf("\nGiven Character Is Lowercase!");
        }

    }








// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
    void  Div23 ()
    {
        printf("Enter A NUmberto Check It Is Divisibel By 2&3 Or Not! :=");
        scanf("%d",&a);

        if(a%2  == 0)
        {
            if(a%3 == 0)
            {
            printf("\nIt Is Divisibel By Both NUmbers!");
            }
        }
        else 
            printf("\nIt Is Not Divisible!");

    }
   
   
   
   
   
   
   
   
// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3. 
    void  Div73 ()
    {
        printf("Enter A NUmberto Check It Is Divisibel By 7&3 Or Not! :=");
        scanf("%d",&a);

        if(a%7  == 0)
        {
            if(a%3 == 0)
            {
            printf("\nIt Is Divisibel By Both NUmbers!");
            }
        }
        else 
            printf("\nIt Is Not Divisible!");

    }






// 15. Write a program to check whether a given number is positive, negative or zero.

    void PosNegZero ()
    {
        printf("Enter A numbe To Check Positive/Negative/Zero? :=");
        scanf("%d",&a);

        if (a>0)
        {
            printf("\nGiven Number Is Positive!");
        }
        if(a<0)
        {
            printf("\nGiven Number Is Negative!");
        }
        if(a==0)
        {
            printf("\nIt Is A ZERO!");
            
        }
    }






// 16. Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character.
    
    void SpecialUpperLower()
    {
        printf("Enter A Number To Check Special/Upper/Lower Character? :=");
        scanf("%c",&n);

        if (n>=0 && n <= 47) 
        {
            printf("\nIt Is A Spacial Character!");
        }
        else if (n>=58 && n<=64)
        {
            printf("\nIt Is A Spacial Character!");
        }
        else if (n>=91 && n<=96)
        {
            printf("\nIt Is A Spacial Character!");
        }
        else if (n>=123 && n<=127)
        {
            printf("\nIt Is A Spacial Character!");
        }
        else if (n>=48 && n <= 57)
        {
            printf("\nIt Is A Nummeric Character!");
        }

        
        if (n>=65 && n<=90)
        {
            printf("\nGiven Character Is Uppercase!");
        }
        
        if (n>=97  && n<=122)
        {
            printf("\nGiven Character Is Lowercase!");
        }


    }






// 17. Write a program which takes the length of the sides of a triangle as an input. Display 
// whether the triangle is valid or not.

    void Triangel()
    {
        printf("enter the length of triangle :");
   int a,b,c;
   
   scanf("%d %d %d",&a,&b,&c);
   if(a<= b+c || b<=a+c || c <=a+b)printf("\nvalid triangle");
   else printf("\ninvalid triangle");
    }






// 18. Write a program which takes the month number as an input and display number of
// days in that month
    void Month()
    {
        printf("Enter Month Number :=");
        scanf("%d",&a);

        if (a==4 ||  a ==6 || a == 9 || a == 11 || a==2 )
        {
            if(a == 2)
            {
                printf("\n28 Days!");
            }
            else
            printf("\n30 Days!");

        }
        else 
        {
            if(a>12)
            {
                printf("\nInvalid Input!");
            }
            else
            {
            printf("\n31 Days!");
            }
        }


    }







int main ()
{
    system("cls");
    int choose ;

// ***** REMOVE COMMENTS FORM SPECIFIC FUNCTION AND RUN CODE!******



/* 1. Write a program to check whether a given number is positive or non-positive */
   
    //PositiveNon();



/* 2. Write a program to check whether a given number is divisible by 5 or not */    
    
    //DivisiblOrNot();



/* 3. Write a program to check whether a given number is an even number or an odd number.*/  
    
    //EvenOdd ();



/* 4. Write a program to check whether a given number is an even number or an odd number without using % operator. */  
    
    //EvenoddXor()



 /* 5. Write a program to check whether a given number is a three-digit number or not. */  
    
    //ThreeDigit();



/* 6. Write a program to print greater between two numbers. Print one number of both are the same. */  
  
   // GreaterNUmber(); 



/* 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots */  
   
   // Root()



/* 8. Write a program to check whether a given year is a leap year or not. */  
   
   //Leapyear();



/* 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times. */  
   
   //GratesThree();



/* 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage. */  
   
   //ProfitLoss();



/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. */  
    
    //PassFail();



/* 12. Write a program to check whether a given alphabet is in uppercase or lowercase. */  
    
    //UpperLower ();

    
    
/* 13. Write a program to check whether a given number is divisible by 3 and divisible by 2. */  
    
    //Div23 ();



/* 14. Write a program to check whether a given number is divisible by 7 or divisible by 3. */  
    
    //Div73 ();



/* 15. Write a program to check whether a given number is positive, negative or zero. */  
    
    //PosNeZero ();



/* 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.*/  
   
   // SpecialUpperLower();



/* 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. */  
   
   //Triangel();
   
   

/* 18. Write a program which takes the month number as an input and display number of days in that month */  
    
    //Month();










// ******************* MENU ********************
    do 
    {
    printf ("\n(Answer!)");
    printf ("\n\n\n\n********************* MENU *********************\n");
    printf ("\n");
    printf ("00.Maza Nhi Aa Rha H Band Kro Program! -- :(\n\n01. A given number is positive or non-positive?\n02. A given number is divisible by 5 or not?\n03. A given number is an even number or an odd number.?\n04. A given number is an even number or an odd number without using %% operator.?\n05. A given number is a three-digit number or not.-?\n06. Print greater between two numbers. Print one number of both are the same.?\n07. Roots of a given quadratic equation are real & distinct, real & equal or imaginary roots-?\n08. A given year is a leap year or not.-?\n09. Find the greatest among three given numbers. Print number once if the greatest number appears two or three times.-? \n10. Calculate and print profit or loss percentage.-?\n11. Take marks of 5 subjects from the user and check whether the candidate passed the examination or failed-?\n12. A given alphabet is in uppercase or lowercase.-?\n13. Check whether a given number is divisible by 3 and divisible by 2.-?\n14. Check whether a given number is divisible by 7 or divisible by 3.-?\n15. Check whether a given number is positive, negative or zero.-?\n16. Check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.-?\n17. The length of the sides of a triangle as an input. Display whether the triangle is valid or not.-?\n18. Takes the month number as an input and display number of days in that month");
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
       PositiveNon();
        break;

    case 2 :
        DivisiblOrNot();
        break;

    case 3 :
        EvenOdd ();
        break;

    case 4 :
        EvenoddXor();
        break;

    case 5 :
        ThreeDigit();
        break;

    case 6 :
        GreaterNUmber(); 
        break;

    case 7 :
        Root();
        break;


    case 8 :
        Leapyear();
        break;

    case 9 :
        GratesThree();
        break;

    case 10 :
       ProfitLoss();
        break;

    case 11 :
        PassFail();
        break;

    case 12 :
        UpperLower ();
        break;

    case 13 :
        Div23 ();
        break;

    case 14 :
        Div73 ();
        break;

    case 15 :
        PosNegZero ();
        break;

    case 16 :
       SpecialUpperLower();
        break;
    
    case 17 :
        Triangel();
        break;

    case 18 :
        Month();
        break;  
    }


} while (choose !=0);






    getch();
    return 0 ;

//             ***********************************COMPLETE*********************************     
}