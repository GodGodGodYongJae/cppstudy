#include <bits/stdc++.h>
using namespace std;

pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;

int main()
{
  pi = {1, 2};
  tl = make_tuple(1, 2, 3);
  tie(a, b) = pi;
  cout << a << ":" << b << endl;
  tie(a, b, c) = tl;
  cout << a << ":" << b << " : " << c << endl;
  return 0;
}

// pair 와 Tuple
// 두가지 값을 담아야할 때 Pair
// 세가지 값을 담아야할 때 tuple
// tie는 2가지 이상 값을 끄집어 낼 때 사용.