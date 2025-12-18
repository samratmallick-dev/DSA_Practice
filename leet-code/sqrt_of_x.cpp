#include <iostream>
using namespace std;

int mySqrt(int x) {
      if (x == 0 || x < 0) return 0;

      int low = 1, high = x;

      int mid = low + (high - low) / 2;

      while (low <= high) {
            if (mid == x / mid && x % mid == 0) {
                  return mid;
            }
            else if (mid > x / mid) {
                  high = mid - 1;
            }
            else {
                  low = mid + 1;
            }
            mid = low + (high - low) / 2;
      }
      return high;
      
}
int main() {
      int x = 1073697800;
      cout << mySqrt(x) << endl;
      return 0;
}