# include <bits/stdc++.h>
using namespace std;
void tallyMarrk()
{
    for(int i =0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            if(i==j)
            {
                cout<<'\\'<<' ';
            }
            else
            {
            cout<<'|'<<' ';
            }
        }
        cout<<"\n";
    }
}
int main(){
    int num;
    cin>>num;
    int tallyFive = num/5;
    for(int i =0; i<tallyFive ; i++)
    {
        tallyMarrk();
        cout<<'\n';
    }

    int remaingTally = num%5;
    for(int i =0; i<4; i++)
    {
        for(int j = 0; j<remaingTally; j++)
        {
            cout<<'|'<<' ';
        }
        cout<<"\n";
    }
}