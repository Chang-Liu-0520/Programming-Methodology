//calculate how far I can see and calculate how high I need to go
//if I want to see the things at 500000meters away

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double theta,height,distance,length = 0;
    const int radius = 6371000;
    cout<<"������������"<<endl;
    cin>>height;
    if (height>3)
        cout<<"�㲻��������ô�ߣ�"<<endl;
    else if (height<0)
        cout<<"��Ч�����"<<endl;
    else
    {
        theta = acos(radius/(height+radius));
        distance = theta*radius;
        cout<<"���ܿ����ľ�����"<<distance<<"��";
    }
    cout<<"����������Ҫ�����ľ�����:"<<endl;
    cin>>distance;
    if (distance>radius)
        cout<<"�㲻���ܿ�����ôԶ��"<<endl;
    else if (distance<0)
        cout<<"��Ч�ľ��룡"<<endl;
    else
    {
        theta = distance/radius;
        length = radius/cos(theta);
        height  = length-radius;
        cout<<"����Ҫ�ĸ߶��ǣ�"<<height;
    }

    return 0;
}
