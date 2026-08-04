#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        // Left Numbers
        for(int j = 0; j <= i; j++) {
            cout << j + 1 << " ";
        }

        // Spaces
        for(int j = 0; j < 2 * (n - i - 1); j++) {
            cout << "  ";
        }

        // Right Numbers
        for(int j = i; j >= 0; j--) {
            cout << j + 1 << " ";
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

1         1
1 2     2 1
1 2 3 3 2 1

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

Time Complexity : O(n²)
Space Complexity: O(1)

*/