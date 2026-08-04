#include<iostream>
using namespace std;

void pattern5(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n-i; j++) { 
      cout << "* ";
    }
    // OR 
    /*
    for(int j = 1; j <= n-i; j++) { 
      cout << j << " ";
    }
    */
    cout << endl;
  }
}

int main() {
  int testCase;
  cin >> testCase;

  for(int i = 0; i < testCase; i++) {
    int n;
    cin >> n;
    pattern5(n);
  }
  return 0;
}

//  n = 5

/*

* * * * * 
* * * * 
* * * 
* * 
* 

*/