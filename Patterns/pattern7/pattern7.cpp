#include<iostream>
using namespace std;

void pattern7(int n) {
  for(int i = 0; i < n; i++) {
    //space
    int space = n - i - 1;
    while(space) { 
      cout << "  ";
      space --;
    }

    //stars
    int star = 2*i+1;
    while(star) {
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
    pattern7(n);
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

*/