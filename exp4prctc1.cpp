// Take 5 integer values into a stack .Find the summation of all the stack element.

#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack<int>mystack; // variable declaration
    mystack.push(1); // push operation
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);

    int sum=0;

    while(!mystack.empty())
    {
        cout<<mystack.top()<<" ";
        sum+=mystack.top();
        mystack.pop(); // pop operation
    }

    cout<<"\nSum: "<<sum<<endl;
}
