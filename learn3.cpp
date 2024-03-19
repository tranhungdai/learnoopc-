 #include <iostream>
using namespace std;

void swap (int n1, int n2) {
  int temp = n1;
  n1=n2;
  n2= temp;
}

int main() {

  double n1, n2;
  cin >> n1 >> n2;

  swap(n1, n2);

  cout << n1 << endl << n2;

  return 0;
}
 