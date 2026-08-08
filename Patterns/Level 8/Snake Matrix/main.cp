#include <iostream>
using namespace std;

void pattern(int n) {

    int count = 1;

    for(int i = 0; i < n; i++) {

        if(i % 2 == 0) {

            for(int j = 0; j < n; j++) {
                cout << count++ << " ";
            }

        } else {

            for(int j = n - 1; j >= 0; j--) {
                cout << count++ << " ";
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
2
3
4

Sample Output

1 2 3
6 5 4
7 8 9

1 2 3 4
8 7 6 5
9 10 11 12
16 15 14 13

Time Complexity : O(n²)
Space Complexity: O(1)
*/