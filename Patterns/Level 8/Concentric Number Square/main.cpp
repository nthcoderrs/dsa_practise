#include<iostream>
using namespace std;

void pattern(int n) {

    int size = 2 * n - 1;

    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int right = size - j - 1;
            int bottom = size - i - 1;

            cout << n - min(min(top, bottom), min(left, right)) << " ";
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
2
4

Sample Output

2 2 2
2 1 2
2 2 2

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

Time Complexity : O(n²)
Space Complexity: O(1)

*/