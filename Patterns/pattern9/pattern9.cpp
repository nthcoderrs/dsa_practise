#include<iostream>
using namespace std;

void pattern8(int n) {

  // first half
  for(int i = 0; i < n; i++) {
    //space
    int space = n-i-1;
    while(space) { // space = i ; while (space)
      cout << "  ";
      space--;
    }

    //stars
    int star = 2*i+1;
    int j = 0;
    while(j < star) { // j = 1 ; j < = star
      cout << "* ";
      j++;
    }
    cout << endl;
  }

  // second half
  for(int i = 0; i < n; i++) {
    //space
    int space = 0;
    while(space < i) { // space = i ; while (space)
      cout << "  ";
      space++;
    }

    //stars
    int star = ((n-i)*2)-1;
    while(star) { // j = 1 ; j < = star
      cout << "* ";
      star --;
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

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

*/