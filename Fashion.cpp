/*
Problem
Vera has N pairs of tops and N pairs of bottoms. Both the i-th top and the i-th bottom have color i. All N colors are different.

How many combinations of tops and bottoms are in different colors in total?

Input
The input is given as follows.

N
Output
It outputs the number of combinations of tops and bottoms with different colors.
*/

#include <iostream>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    cout << (N*N)-N;

    return 0;
}