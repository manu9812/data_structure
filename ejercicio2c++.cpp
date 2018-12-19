#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    int res = -1 , www = -1 << 30;
    for (int i = 1 ; i <= n ; ++ i) {
        if (n % i == 0) {
            int sum = 0 , x = i;
            while (x) {
                sum += x % 10;
                x /= 10;
            }
            if (sum > www || sum == www && i < res) {
                res = i;
                www = sum;
            }
        }    
        
    }
    cout << res << endl;
    return 0;
}
