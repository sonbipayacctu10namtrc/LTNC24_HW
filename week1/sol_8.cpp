#include <bits/stdc++.h>

using namespace std;

int balancedSums(vector<int> arr) {
    int sum1 = arr[0], sum2 = 0;
    int n = (int) arr.size();
    for (int i = 1; i < n; ++i)
        sum2 += arr[i];
    if (!sum2) return 1;
    sum2 -= arr[1];
    if (sum1 == sum2) return 1;
    for (int i = 1; i < n - 1; ++i){
        sum1 += arr[i];
        sum2 -= arr[i + 1];
        if (sum1 == sum2) return 1;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            a.push_back(x);
        }
        if (balancedSums(a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}