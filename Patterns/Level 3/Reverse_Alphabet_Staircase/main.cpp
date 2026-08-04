#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        // Spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // Alphabet
        for(int j = 0; j <= i; j++) {
            cout << char('A' + (n - i - 1) + j) << " ";
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

    C
  B C
A B C

        E
      D E
    C D E
  B C D E
A B C D E

Time Complexity : O(n²)
Space Complexity: O(1)

*/