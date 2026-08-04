#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n - i; j++) {
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

A B C
A B
A

A B C D E
A B C D
A B C
A B
A

Time Complexity : O(n²)
Space Complexity: O(1)

*/