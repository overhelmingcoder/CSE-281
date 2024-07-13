/*Take 6 integer values (0 to 5) into a stack and then find the factorial of
each stack element. Store the outputs in another stack. Print the output in the
following way:
Factorial : 0 = 1
Factorial : 1 = 1
Factorial : 2 = 4    */


#include<bits/stdc++.h>
using namespace std;


// Function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    stack<int> input_stack;
    stack<int>f;

    // Push 6 integer values (0 to 5) into the input stack
    for (int i = 0; i <= 5; i++) {
        input_stack.push(i);
    }

    // Calculate factorial of each element in the input stack
    while (!input_stack.empty()) {
        int value = input_stack.top();
        f.push(factorial(value));
        input_stack.pop();
        //f.push(factorial(value));

    }

    // Print the factorial results
for (int i = 0; i <= 5; i++) {



        cout << "Factorial : " << i << " = " << f.top() << endl;
        f.pop();
    }

    return 0;
}

