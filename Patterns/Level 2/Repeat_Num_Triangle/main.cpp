#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j <= i; j++) {
            cout << i + 1 << " ";
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
2 2
3 3 3

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

Time Complexity : O(n²)
Space Complexity: O(1)

*/