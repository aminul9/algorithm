#include <iostream>
using namespace std;
struct co
{
	int x, y;
};

bool DoOverlap(co l1,co r1,co l2,co r2)
{
   if(r1.x < l2.x || r2.x <l1.x)
   	  return false;
   	if(r2.y > l1.y || r1.y >l2.y)
   		return false;
   	return true;
}

int main()
{
	co l1,r1,l2,r2;
	int T;
	//freopen("input.txt","r",stdin);
	cin>>T;
	for(int tc=1;tc<=T;tc++)
	{
		cin>>l1.x>>l1.y>>r1.x>>r1.y;
		cin>>l2.x>>l2.y>>r2.x>>r2.y;
		if(DoOverlap(l1,r1,l2,r2)==false)
			cout<<0<<endl;
		else cout<<1<<endl;
	}
	
	return 0;
}