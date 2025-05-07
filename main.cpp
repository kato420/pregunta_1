#include "pregunta1.h"
int main() {
  int *a = new int[5];
  for (int i = 0; i < 5; i++) {
    cout << i << ": ";
    cin >> a[i];
  }
  cout << endl;
  cout << "Lista: ";
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  saluda();
  delete[] a;
  return 0;
}
