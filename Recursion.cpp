/*A function that calls itself is known as a recursive function.
And, this technique is known as recursion. */

/*The recursion continues until some condition is met.

To prevent infinite recursion,
 if...else statement (or similar approach) can be used where
    one branch makes the recursive call and the other doesn't.*/

// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
