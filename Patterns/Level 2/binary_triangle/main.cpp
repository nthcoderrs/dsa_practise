#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j <= i; j++) {
            cout << (i + j) % 2 << " ";
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

0
1 0
0 1 0

0
1 0
0 1 0
1 0 1 0
0 1 0 1 0

Time Complexity : O(n²)
Space Complexity: O(1)

*/