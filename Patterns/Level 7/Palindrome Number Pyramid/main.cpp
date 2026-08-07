#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        // Spaces
        for(int j = 0; j < n - i - 1; j++)
            cout << " ";

        int value = 1;

        // Numbers
        for(int j = 0; j <= i; j++) {

            cout << value << " ";

            value = value * (i - j) / (j + 1);
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

  1
 1 1
1 2 1

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

Time Complexity : O(n²)
Space Complexity: O(1)

*/