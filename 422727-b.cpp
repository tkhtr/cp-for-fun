#include <iostream>
using namespace std;

int lower_bound(int num, int arr[], int n) {
  int left = 0, right = n;

  while(left < right) {
    int mid = (left + right) / 2;

    if(num <= arr[mid]) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }

  return left;
}

int upper_bound(int num, int arr[], int n) {
  int left = 0, right = n;

  while(left < right) {
    int mid = (left + right) / 2;

    if(num < arr[mid]) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }

  return left;
}

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

    int lower = lower_bound(num, a, n);
    int upper = upper_bound(num, a, n);

    cout << upper - lower << "\n";
  }

  return 0;
}