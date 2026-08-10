#include <iostream>
using namespace std;

void pattern(int n) {

    int size = n;

    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size; j++) {

            if(i == 0 || j == size - 1 || i == size - 1 ||
               (j == 0 && i >= size / 2) ||
               (i == size / 2 && j <= size / 2)) {
                cout << "* ";
            }
            else {
                cout << "  ";
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

* * * * *
        *
* * *   *
*       *
* * * * *

Time Complexity : O(n²)
Space Complexity: O(1)
*/