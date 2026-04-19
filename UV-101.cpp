#include <bits/stdc++.h>
using namespace std;

#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define endl '\n' // cmnt out after semicolon if u want interactive output (one by one)
#define lli long long int

bool cmp(pair<int, int> &p1, pair<int, int> &p2);

int main()
{
  optimize();
  freopen("input.txt", "r", stdin);
  freopen("output.o", "w", stdout);

  int n;
  cin >> n;
  map<int, vector<int>> m1;
  for (int i = 0; i < n; i++)
    m1[i].push_back(i);

  string s1, s2;
  int a, b;

  while (cin >> s1 >> a >> s2 >> b)
  {
    if (s1 == "move")
    {
      if (s2 == "over")
      {
        int index;
        for (int i = 0; i < n; i++)
        {
          auto it = find(m1[i].begin(), m1[i].end(), b);
          if (it != m1[i].end())
          {
           index = i;
           break;
          }
        }
        for (int i = 0; i < n; i++)
        {
          auto it = find(m1[i].begin(), m1[i].end(), a);
          if (it != m1[i].end())
          {
            m1[index].push_back(a);
            m1[i].erase(it);
          }
        }
      }
    }
  }

  for (auto m : m1)
  {
    cout << m.first << ": ";
    for (auto x : m.second)
    {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}

bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
  if (p1.first > p2.first)
    return 1;
  else if (p1.first == p2.first)
    return (p1.second < p2.second);
  return 0;
}