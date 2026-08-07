#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < 2 * n - 1; i++) {

        int row = (i < n) ? i : 2 * n - i - 2;

        // Left Wing
        for(int j = 0; j <= row; j++)
            cout << "* ";

        // Middle Spaces
        for(int j = 0; j < 2 * (n - row - 1); j++)
            cout << "  ";

        // Right Wing
        for(int j = 0; j <= row; j++)
            cout << "* ";

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

*         *
* *     * *
* * * * * *
* *     * *
*         *

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

Time Complexity : O(n²)
Space Complexity: O(1)

*/