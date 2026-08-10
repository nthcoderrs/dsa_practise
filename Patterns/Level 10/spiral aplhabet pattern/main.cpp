#include <iostream>
using namespace std;

void pattern(int n) {

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;
    char ch = 'A';

    while(top <= bottom && left <= right) {

        for(int j = left; j <= right; j++)
            cout << ch++ << " ";
        top++;

        for(int i = top; i <= bottom; i++)
            cout << ch++ << " ";
        right--;

        if(top <= bottom) {
            for(int j = right; j >= left; j--)
                cout << ch++ << " ";
            bottom--;
        }

        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                cout << ch++ << " ";
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
1
5

Sample Output

A B C D E
P Q R S F
O X Y T G
N W V U H
M L K J I

Time Complexity : O(n²)
Space Complexity: O(1)
*/