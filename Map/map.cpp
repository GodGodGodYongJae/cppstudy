#include <bits/stdc++.h>

using namespace std;

int v[10];

int main()
{
  unordered_map<string, int> umap;
  //넣는 방법.
  umap.insert({"test1", 1});
  // 2번째방법.
  umap.emplace("test2", 5);
  //변경 혹은 추가.
  umap["test1"] = 4;

  for (auto element : umap)
  {
    cout << element.first << " :: " << element.second << endl;
  }
  // map의 find메소드는 찾지 못하면 end() 이터레이터를 반환한다.
  auto search = umap.find("test1");
  if (search != umap.end())
  {
    cout << " found : " << search->first << " " << (*search).second << endl;
  }
  else
  {
    cout << "not found .. " << endl;
  }
  // cout << search->first << search->second << endl;

  //이런식으로 바로 int형을 증가시킬 수 있습니다.

  umap["test1"]++; // 다음배열로
  cout << umap["test1"] << "\n";
  cout << umap.size() << "\n";
  umap.erase("test1");
  cout << umap.size() << "\n";
  return 0;
}

// map key와 value 형태로 이루어져 있고 Red - Balck Tree 구조를 내장.
// map은 unordered_map과 map 두가지가 있다.
// 하나는 정렬을 보장하지 않는, 하나는 정렬을 보장하는 자료구조 이다.

//참고 B0 표기법에 의해 map을 사용하는 걸 권장.
// map과 unordered_map의 차이
// map : 정렬이 됨 / 레드블랙트리기반 / 탐색, 삽입, 삭제에 O(logN)이 걸림
// unordered_map : 정렬이 안됨 / 해시테이블 기반 / 탐색, 삽입, 삭제에 평균적으로 O(1), 가장 최악의 경우
// O(N)입니다.
// 얼핏보면 정렬이 필요로 하지 않은 문제에는 unordered_map을 써야 할 것같지만 제출해보면 시간초과가
// 나기도 합니다. 이는 가장 최악의 경우 O(N)이기 때문이죠. 되도록 map을 쓰는 것을 권장합니다.
