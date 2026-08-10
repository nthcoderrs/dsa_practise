#include <iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(i == 0) {
                cout << j + 1 << " ";
            }
            else if(i == n - 1) {
                cout << n - j << " ";
            }
            else if(j == 0 || j == n - 1 || i == j) {
                cout << i + 1 << " ";
            }
            else {
                cout << "* ";
            }
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

1 2 3 4 5
2 * * * 2
3 * 3 * 3
4 * * * 4
5 4 3 2 1

Time Complexity : O(n²)
Space Complexity: O(1)
*/