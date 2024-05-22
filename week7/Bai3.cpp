#include <bits/stdc++.h>

using namespace std;

int power_(int x, int n){
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= x;
    }
    return res;
}
void findPower(int x, int n, int cur, int acc, int &count){
    static int lim = pow(x, 1/static_cast<float>(n));
    //cout<<acc<<" "<<cur<<endl;
    if (x == acc){
        count++;
        return;
    }
    else{
        for (int i = cur; i <= lim; i++){
            int curNum = power_(i, n);
            acc += curNum;
            if(acc>x) break;
            findPower(x, n, i+1, acc, count);
            acc-=curNum;
        }
    }
}
int powerSum(int X, int N)
{
    int count = 0;
    findPower(X, N, 1, 0, count);
    return count;
}
int main(){
    int x, n;
    cin >> x >> n;
    cout << powerSum(x, n);

    return 0;
}

