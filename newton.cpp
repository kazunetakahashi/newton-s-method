#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
  double X[10];
  cin >> X[0];
  for (auto i=0; i<9; i++) {
    X[i+1] = 0.5 * (X[i] + X[0]/X[i]);
  }
  for (auto i=0; i<10; i++) {
    cout << fixed << setprecision(12) << X[i] << endl;
  }
}
