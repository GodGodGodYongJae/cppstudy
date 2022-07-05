#include <bits/stdc++.h>

using namespace std;

int main()
{
  set<pair<string, int>> st;
  st.insert({"test1", 1});
  st.insert({"test1", 1});
  st.insert({"test3", 1});
  st.insert({"test1", 1});
  st.insert({"test1", 1});
  cout << st.size() << endl;
  for (auto it : st)
  {
    cout << it.first << " :: " << it.second << endl;
  }
  set<int> st2;
  st2.insert(1);
  st2.insert(2);
  st2.insert(2);
  for (auto it : st2)
  {
    cout << it << endl;
  }
  return 0;
}

// 셋(set)은 특정 순서에 따라 고유한 요소를 저장하는 컨테이너이며, 중복되는 요소는 없고
// 오로지 희소한(unique) 값만 저장하는 자료 구조입니다.

// 다음 코드처럼 pair나 int형을 집어넣어서 만들 수 있습니다. 중복된 값은 제거 되며 희소한
// 값만을 출력하는 것을 볼 수 있습니다. 나머지 사항은 map과 똑같습니다.