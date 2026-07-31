#include<iostream>
using namespace std;

void pattern1(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; j++) {
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
    pattern1(n);
  }
  return 0;
}