//input valid score of an table tennis game and
//judge who is the winner

#include <iostream>
using namespace std;

int main()
{
    int a,b=0;
    cout<<"请输入第一位选手的分数"<<endl;
    cin>>a;

    cout<<"请输入第二位选手的分数"<<endl;
    cin>>b;

    if (a<11&& b<11)
        cout<<"比赛未分出胜负";
    else if (a-b>=2)

        cout<<"第一位选手获胜";
    else
        cout<<"第二位选手获胜";

    return 0;

}
