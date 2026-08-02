#include<iostream>
using namespace std;

void pattern8(int n) {

    for(int i = 0; i < 2 * n - 1; i++) {

        // Calculate stars first
        int stars;

        if(i < n)
            stars = i + 1;
        else
            stars = 2 * n - i - 1;

        // Print stars
        int j = 0;
        while(j < stars) {
            cout << "* ";
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
        pattern8(n);
        cout << endl;
    }

    return 0;
}

// n = 5;

/*

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/