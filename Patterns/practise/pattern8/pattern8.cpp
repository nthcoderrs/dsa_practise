#include<iostream>
using namespace std;

void pattern8(int n) {
  for(int i = 0; i < n; i++) {
    //space
    int space = 0;
    while(space < i ) { // space = i ; while (space)
      cout << "  ";
      space++;
    }

    //stars
    int star = 2*(n-i)-1;
    int j = 0;
    while(j < star) { // j = 1 ; j < = star
      cout << "* ";
      j++;
    }
    cout << endl;
  }
}

int main() {
  int testCase;
  cin >> testCase;

  for(int i = 0; i < testCase; i++) {
    int n;
    cin >> n;
    pattern8(n);
    cout << endl;
  }
  return 0;
}

// n = 5

/*

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

*/