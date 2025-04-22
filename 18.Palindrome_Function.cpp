#include<iostream>
using namespace std;

// Function to reverse an integer
int reverse(int n) {
    int res = 0;
    while (n > 0) {
        int lastDig = n % 10; // Corrected the modulo operator
        res = res * 10 + lastDig;
        n = n / 10;
    }
    return res;
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int revNum = reverse(num);
    return num == revNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
