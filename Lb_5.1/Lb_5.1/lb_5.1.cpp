#include <cmath>
#include <iostream>

using namespace std;


double h(const double a, const double b);

int main()
{
    double g, s;

    cout << "g = "; cin >> g;
    cout << "s = "; cin >> s;


    double k = (h(g + 1, s) + pow(h(g, s + 1), 2)) / (1 + pow(h(g * g, s * s), 3));

    cout << "k = " << k << endl;
    return 0;
}


double h(const double a, const double b)
{
    return a * a - b * b;
}
