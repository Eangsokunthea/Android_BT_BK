/*HoTen: EANG SOKUNTHEA
  MSSV: 20180280*/
#include <bits/stdc++.h>
using namespace std;
struct state{
    int i, j, old_L;
    state(int _i = 0, int _j = 0, int _L = 0):
        i(_i), j(_j), old_L(_L){}
};

int main() {
	printf("HoVaTen: EANG SOKUNTHEA\n");
	printf("MSSV: 20180280\n");
    int n, k;
    cin >> n >> k;
    int x[n+1];
    stack<state> s;
    int L = 0;
    s.push(state(1, 0));
    while (!s.empty()){
        state &top = s.top();
        if (top.i > n){
            for (int i = 1; i <= n; ++i)
                cout << x[i] << " \n"[i == n];
            s.pop();
            continue;
        }
        
        if(top.j){
          	L = top.old_L;
        }
        if(top.j > 1){
          s.pop();
          continue;
        }
        if(L + 1 < k || top.j == 0){
		  x[top.i] = top.j;
		  
          top.old_L = L;
          L = top.j ? L + 1 : 0;
          s.push(state(top.i + 1, 0));
        }
        ++top.j;
    }
    return 0;
}
