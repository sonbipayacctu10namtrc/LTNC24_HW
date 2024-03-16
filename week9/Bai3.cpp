#include <bits/stdc++.h>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    cout << round(meal_cost + meal_cost / 100 * tip_percent + meal_cost / 100 * tax_percent);
}

int main()
{
    double a;
    int b, c;
    cin >> a >> b >> c;
    solve(a, b, c);
}


