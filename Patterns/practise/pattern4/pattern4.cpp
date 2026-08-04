#include<iostream>
using namespace std;

void pattern4(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 1; j <= i+1; j++) {
      cout << i+1 << " ";
    }
  // OR  
    /*
    for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      cout << i << " ";
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
    pattern4(n);
  }
  return 0;
}

// n = 5

/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/