//input the serial number of the month and then output the
//quantity of days in that month
#include <iostream>

using namespace std;

int main()
{
    int month = 0;
    cout<<"请输入第几月";
    cin>>month;

    switch (month)
    {
        case 1 :cout<<"该月有31天"; break;
        case 2 :cout<<"该月有28天"; break;
        case 3 :cout<<"该月有31天"; break;
        case 4 :cout<<"该月有30天"; break;
        case 5 :cout<<"该月有31天"; break;
        case 6 :cout<<"该月有30天"; break;
        case 7 :cout<<"该月有31天"; break;
        case 8 :cout<<"该月有31天"; break;
        case 9 :cout<<"该月有30天"; break;
        case 10 :cout<<"该月有31天"; break;
        case 11 :cout<<"该月有30天"; break;
        case 12 :cout<<"该月有31天"; break;
    }

    return 0;
}
