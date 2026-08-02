#include<iostream>
using namespace std;

void pattern(int n) {

    for(int i = 0; i < n; i++) {

        // Calculate elements in current row
        int elements = i + 1;

        int j = 0;
        while(j < elements) {

            cout << (i + j) % 2;

            j++;
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

        cout << endl;
    }

    return 0;
}
