#include <iostream>
using namespace std;

int bitwiseComplement(int n)
{
      if (n == 0)
      {
            return 1;
      }
      int mul = 1, rem = 0, ans = 0;
      while (n > 0)
      {
            rem = n % 2;
            rem = rem ^ 1;
            n = n / 2;
            ans = ans + rem * mul;
            mul = mul * 2;
      }
      return ans;
}

int main()
{
      int n;
      cin >> n;
      cout << bitwiseComplement(n) << endl;
      return 0;
}