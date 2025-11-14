#include <iostream>
using namespace std;

int main() {

  int n, q;

  cin >> n >> q;

  int a[n];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  while(q--) {
    int num;
    cin >> num;

    int left = 0, right = n;
    bool found = false;

    while(left < right) {
      int mid = (left + right) / 2;

      if(a[mid] == num) {
        found = true;
        break;
      } else if(a[mid] < num) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    
    if(found) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }

  return 0;
}