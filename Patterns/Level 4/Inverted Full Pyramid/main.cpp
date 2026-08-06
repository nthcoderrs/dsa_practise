#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i; j++)
            cout << " ";

        for(int j = 0; j < 2 * (n - i) - 1; j++)
            cout << "*";

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

*****
 ***
  *

*********
 *******
  *****
   ***
    *

Time Complexity : O(n²)
Space Complexity: O(1)
*/