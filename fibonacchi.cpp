// Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;

 fib(int n)
{
	if (n <= 1)
		{return n;}

	return fib(n - 1) + fib(n - 2);


}

int main()
{


    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
	for(int n=0;n<=num;n++)
    {
        cout<<fib(n)<<" ";
    }
}

