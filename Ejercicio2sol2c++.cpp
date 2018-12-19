#include <bits/stdc++.h>

typedef long long LLONG;
typedef std::vector<int> VI;

const int N = 1e5 + 2;

inline int getSum(int k) {
  int rlt = 0;
  for(; k > 0; k /= 10) {
    rlt += k % 10;
  }
  return rlt;
}

int main() {
  int n;
  scanf("%d", &n);
  int rlt = 1;
  int mxs = 1;
  for(int i = 1; i <= n; ++i) {
    if(n % i == 0) {
      int v = getSum(i);
      if (v > mxs) {
        mxs = v;
        rlt = i;
      }
    }
  }
  printf("%d\n", rlt);
  return 0;
}
