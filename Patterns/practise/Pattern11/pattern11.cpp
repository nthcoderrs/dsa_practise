#include<iostream>
using namespace std;

void pattern11(int n) {

    for(int i = 0; i < n; i++) {

        // Calculate spaces
        int spaces = n - i - 1;
        int s = 0;
        while(s < spaces) {
            cout << "  ";
            s++;
        }

        // Calculate columns
        int stars = 2 * i + 1;
        int j = 0;
        while(j < stars) {

            if(j == 0 || j == stars - 1 || i == n - 1)
                cout << "* ";
            else
                cout << "  ";

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
        pattern11(n);
        cout << endl;
    }

    return 0;
}

/*

        * 
      *   * 
    *       * 
  *           * 
* * * * * * * * * 

*/