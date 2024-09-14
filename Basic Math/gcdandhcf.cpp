#include <bits/stdc++.h>
using namespace std;

// ANSI escape codes for colors
const string YELLOW = "\033[33m";
const string RESET = "\033[0m";

void gcd1(int n1, int n2) {
    int gcd = 1;
    for (int i = 1; i < min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    cout << "O(min(n1,n2)) => " << YELLOW << gcd << RESET << endl; // Yellow output
}

void gcd2(int n1, int n2) {
    int gcd = 1;
    for (int i = min(n1, n2); i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            break;
        }
    }
    cout << "O(min(n1,n2)) less => " << YELLOW << gcd << RESET << endl; // Yellow output
}

void gcd3(int n1, int n2) {
    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) {
            n1 = n1 % n2;
        } else {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0) {
        cout << "O(min(n1,n2)) moreless => " << YELLOW << n2 << RESET << endl; // Yellow output
    } else {
        cout << "O(min(n1,n2)) moreless => " << YELLOW << n1 << RESET << endl; // Yellow output
    }
}

int main() {
    int n1, n2;
    cout << "Enter the numbers" << endl;
    cin >> n1 >> n2;
    gcd1(n1, n2);
    gcd2(n1, n2);
    gcd3(n1, n2);

    return 0;
}
