#include<iostream>
using namespace std;

void pattern3(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 1; j <= i+1; j++) {
      cout << j << " ";
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
    pattern3(n);
  }
  return 0;
}

// n = 5

/*

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/