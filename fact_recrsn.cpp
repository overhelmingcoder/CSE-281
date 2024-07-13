#include<iostream>
using namespace std;

long int factorial(int n)
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

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;
}
