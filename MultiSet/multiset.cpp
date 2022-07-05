#include <bits/stdc++.h>

using namespace std;

multiset<int> s;
int main()
{
  s.insert(12);
  s.insert(10);
  s.insert(2);
  s.insert(10);
  s.insert(90);
  s.insert(91);
  s.insert(85);
  s.insert(89);

  cout << " MultiSet element after sort " << endl;
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << *it << ' ';
  }
  cout << endl;

  auto it1 = s.find(10);
  auto it2 = s.find(90);

  // 10 ~ 90(미만) 숫자 범위 제거.
  s.erase(it1, it2);

  cout << " MultiSet element after erase " << endl;
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << *it << ' ';
  }

  //해당 숫자 제거.
  s.erase(s.begin());
  cout << "\n";
  for (auto it = s.begin(); it != s.end(); it++)
    cout << (*it) << ' ';
}

// multiset은 중복되는 원소도 집어넣을 수 있는 자료구조입니다. key, value 형태로 집어넣을
// 필요도 없고 넣으면 자동적으로 정렬되는 편리한 자료구조입니다. 아래처럼 erase, find,
// insert가 가능합니다.