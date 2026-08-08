#include <iostream>
using namespace std;

void pattern(int n) {

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    int count = 1;

    while(top <= bottom && left <= right) {

        // Top → Left to Right
        for(int j = left; j <= right; j++) {
            cout << count++ << " ";
        }
        top++;

        // Right → Top to Bottom
        for(int i = top; i <= bottom; i++) {
            cout << count++ << " ";
        }
        right--;

        // Bottom → Right to Left
        if(top <= bottom) {
            for(int j = right; j >= left; j--) {
                cout << count++ << " ";
            }
            bottom--;
        }

        // Left → Bottom to Top
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                cout << count++ << " ";
            }
            left++;
        }
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
8 9 4
7 6 5

1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7

Time Complexity : O(n²)
Space Complexity: O(1)
*/