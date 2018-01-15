#include <iostream>
using namespace std;

int main()
{
    char array[3]={'a','b','c'};
    int n=3;

    for(int i=0;i<(1<<n);i++)
    {
        string s="";
        for(int j=0;j<n;j++)
        {

            if((i & (1<<j))>0)
                s+=array[j];

        }
        //if(s.size()==2)
            cout<<s;
        cout<<endl;

    }

    return 0;
}
