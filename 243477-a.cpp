#include <iostream>
using namespace std;

// A. Приближенный двоичный поиск

int main()
{
  int n, k;
  
  cin >> n >> k;

  int a[n], b[k];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < k; i++) {
    cin >> b[i];
  }

  for(int num : b) {
    int left = 0, right = n - 1;

    while(left < right) {
      int mid = (left + right) / 2;
      if(a[mid] > num) {
        right = mid;
      } else {
        left = mid + 1;
      }
    }
    
    int ans = a[left];

    if(left > 0) {
      if(abs(a[left] - num) >= abs(a[left-1] - num)) {
        ans = a[left-1];
      }
    }

    cout << ans << '\n';
  }

  return 0;
}