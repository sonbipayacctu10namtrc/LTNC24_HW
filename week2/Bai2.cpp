#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 <= v2){
        cout << "NO";
    }
    else{
        if ((float) (x2 - x1) / (v1 - v2) == (x2 - x1) / (v1 - v2)) cout << "YES";
        else cout << "NO";
    }
}