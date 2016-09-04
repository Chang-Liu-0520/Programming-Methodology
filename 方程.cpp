//this program is to solve the equation  x^2-(10^9+1)*x+10^9=0

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double delta,x1,x2= 0;
    delta = sqrt((10e9+1)*(10e9+1)-4*10e9);
    cout<<"delta ="<<delta<<endl;
    //delta = 1e+010

    x1 = (10e9+1+delta)/2;
    x2 = (10e9+1-delta)/2;
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;
    //x1 = 1e+010
    //x2 = 1

    return 0;
}
