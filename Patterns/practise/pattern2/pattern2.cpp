#include<iostream>
using namespace std;

void pattern2(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << "* ";
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
    pattern2(n);
  }
  return 0;
}

// n = 3
/*

* * * 
* * * 
* * * 

*/