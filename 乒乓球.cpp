//input valid score of an table tennis game and
//judge who is the winner

#include <iostream>
using namespace std;

int main()
{
    int a,b=0;
    cout<<"�������һλѡ�ֵķ���"<<endl;
    cin>>a;

    cout<<"������ڶ�λѡ�ֵķ���"<<endl;
    cin>>b;

    if (a<11&& b<11)
        cout<<"����δ�ֳ�ʤ��";
    else if (a-b>=2)

        cout<<"��һλѡ�ֻ�ʤ";
    else
        cout<<"�ڶ�λѡ�ֻ�ʤ";

    return 0;

}
