#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // Left Alphabet
        for(int j = 0; j <= i; j++) {
            cout << char('A' + j) << " ";
        }

        // Right Alphabet
        for(int j = i - 1; j >= 0; j--) {
            cout << char('A' + j) << " ";
        }

        cout << endl;
    }
}

int main() {

    int testCase;
    cin >> testCase;

    while(testCase--) {
        int n;
        cin >> n;
        pattern(n);
        cout << endl << endl;
    }

    return 0;
}

/*
Sample Input
2
3
5

Sample Output

    A
  A B A
A B C B A

        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

Time Complexity : O(n²)
Space Complexity: O(1)

*/