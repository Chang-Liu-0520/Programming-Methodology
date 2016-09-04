//calculate how far I can see and calculate how high I need to go
//if I want to see the things at 500000meters away

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double theta,height,distance,length = 0;
    const int radius = 6371000;
    cout<<"请输入你的身高"<<endl;
    cin>>height;
    if (height>3)
        cout<<"你不可能有那么高！"<<endl;
    else if (height<0)
        cout<<"无效的身高"<<endl;
    else
    {
        theta = acos(radius/(height+radius));
        distance = theta*radius;
        cout<<"你能看到的距离是"<<distance<<"米";
    }
    cout<<"请输入你想要看到的距离是:"<<endl;
    cin>>distance;
    if (distance>radius)
        cout<<"你不可能看的那么远！"<<endl;
    else if (distance<0)
        cout<<"无效的距离！"<<endl;
    else
    {
        theta = distance/radius;
        length = radius/cos(theta);
        height  = length-radius;
        cout<<"你需要的高度是："<<height;
    }

    return 0;
}
