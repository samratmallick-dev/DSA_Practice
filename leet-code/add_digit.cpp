#include <iostream>
using namespace std;

int main() {
      int num = 1234;
      while (num > 9)
      {
            int ans = 0;
            int rem = 0;
            while (num > 0)
            {
                  rem = num % 10;
                  ans = ans + rem;
                  num = num / 10;
            }
            num = ans;
      }
      cout << num << endl;
      
      return 0;
}