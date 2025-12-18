#include <iostream>
using namespace std;

int totalMoves(int A, int B) {
      int moves = 0;

      moves += min(8-A, 8-B);
      moves += min(A-1, B-1);
      moves += min(A-1, 8-B);
      moves += min(8-A, B-1);
      return moves;
}

int main() {
      int A, B;
      cin >> A >> B;
      cout << totalMoves(A, B) << endl;
      return 0;
};