#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    long long a = 0, b = 0, c = 0;
    for (auto it = arr.begin(); it != arr.end(); ++it){
        if (*it > 0) ++a;
        else if (*it < 0) ++b;
        else ++c; 
    }
    int m = (int) arr.size();
    cout << setprecision(6) << fixed << (float) a / m << endl
         << (float) b / m << endl
         << (float) c / m;
}

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.push_back(x);
    }
    plusMinus(a);
}
