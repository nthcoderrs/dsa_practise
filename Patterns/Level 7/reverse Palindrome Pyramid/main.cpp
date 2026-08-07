#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        // Spaces
        for(int j = 0; j < i; j++)
            cout << "  ";

        // Left Numbers
        for(int j = n - i; j >= 1; j--)
            cout << j << " ";

        // Right Numbers
        for(int j = 2; j <= n - i; j++)
            cout << j << " ";

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

3 2 1 2 3
  2 1 2
    1

5 4 3 2 1 2 3 4 5
  4 3 2 1 2 3 4
    3 2 1 2 3
      2 1 2
        1

Time Complexity : O(n²)
Space Complexity: O(1)

*/