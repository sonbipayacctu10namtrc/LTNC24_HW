#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl
         << b << endl
         << c << endl
         << setprecision(3) << fixed << d << endl
         << setprecision(9) << fixed << e << endl;
    return 0;
}