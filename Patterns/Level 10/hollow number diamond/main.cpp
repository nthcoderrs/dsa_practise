#include <iostream>
using namespace std;

void pattern(int n) {

    // Upper half
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++)
            cout << " ";

        cout << i;

        if(i > 1) {
            for(int j = 1; j <= 2 * i - 3; j++)
                cout << " ";

            cout << i;
        }

        cout << endl;
    }

    // Lower half
    for(int i = n - 1; i >= 1; i--) {

        for(int j = 1; j <= n - i; j++)
            cout << " ";

        cout << i;

        if(i > 1) {
            for(int j = 1; j <= 2 * i - 3; j++)
                cout << " ";

            cout << i;
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
1
5

Sample Output

    1
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1

Time Complexity : O(n²)
Space Complexity: O(1)
*/