#include<iostream>
using namespace std;

void pattern(int n) {

    int count = 1;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j <= i; j++) {
            cout << count++ << " ";
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
2 3
4 5 6

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Time Complexity : O(n²)
Space Complexity: O(1)

*/