#include <bits/stdc++.h>
using namespace std;
long res = -1, n, m, ans = 0;
string s;
long  a[505][505];
long sum;
int main(){
    /*
    cin >> n;
    for(long i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            bool ok_1 = false, ok_2 = false, ok = false;
            long x = i;
            for(long i = 2; i <= sqrt(x); i++)
                if(x >= i * i && x % (i * i) == 0)
                    ok = true;
            if(ok == false) res = max(res, x);
            x = n / i;
            ok = false;
            for(long i = 2; i <= sqrt(x); i++)
                if(x >= i * i && x % (i * i) == 0)
                    ok = true;
            if(ok == false) res = max(res, x);
        }
    }
    cout << res;
    */
    res = 0;
    cin >> n >> m;
    for(long i = 1; i <= n; i++)
        for(long j = 1; j <= m; j++){
            cin >> a[i][j];
            res = res + a[i][j];
        }
    cout << res;
}
