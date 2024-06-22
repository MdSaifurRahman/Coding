#include <iomanip>
#include <ios>
class Solution {
public:
    double myPow(double x, int n) {
        double ans = pow(x,n);
        //setprecision(5);
        cout << fixed;
        cout<<setprecision(5);
        return ans;
    }
};