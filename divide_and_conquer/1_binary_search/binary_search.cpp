#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size();
    int mid;
    while (right > left) {
        mid = left + (right - left) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] > x) {
            // go left
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return -1;
     
}

 
int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }

  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }

  for (int i = 0; i < m; ++i) {
    
    std::cout << binary_search(a, b[i]) << ' ';
  }


}
