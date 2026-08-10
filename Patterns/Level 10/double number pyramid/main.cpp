#include <iostream>
using namespace std;

void pattern(int n) {

    for(int i = 1; i <= n; i++) {

        // Left spaces
        for(int j = 1; j <= n - i; j++)
            cout << " ";

        // Left number pyramid
        for(int j = 1; j <= i; j++)
            cout << j;

        // Middle gap
        for(int j = 1; j <= 2 * (n - i) + 1; j++)
            cout << " ";

        // Right number pyramid
        for(int j = i; j >= 1; j--)
            cout << j;

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
1
5

Sample Output

    1       1
   12     21
  123   321
 1234 4321
12345 54321

Time Complexity : O(n²)
Space Complexity: O(1)
*/