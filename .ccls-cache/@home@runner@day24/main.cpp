// Write a program to print Pyramid pattern using stars
#include <iostream>
using namespace std;
void patten(int a) {
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int a = 7;
  patten(a);
}