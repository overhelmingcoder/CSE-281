#include<stdio.h>

// don't use int main on first.


    int main()
    {
        int num;
        printf("Enter a number:\n");
        scanf("%d",&num);

        printf("Factorial of %d is :%d",num,factorial(num));
    }
     int factorial(int n)
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        else
        {
            return n*factorial(n-1);
        }
    }



