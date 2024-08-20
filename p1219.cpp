#include<iostream>

using namespace std;

int tot,a[60],b[60],c[60],d[60],n;

void out()
{
	if(tot<=2)
	{
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	tot+=1;
}

void queen(int x)
{
	if(x>n)
	{
		out();
		return;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if((!b[i])&&(!c[x+i])&&(!d[x-i+n]))
			{
				a[x]=i;
				b[i]=1;
				c[x+i]=1;
				d[x-i+n]=1;
				queen(x+1);
				b[i]=0;
				c[x+i]=0;
				d[x-i+n]=0;
			}
		}
	}
}

int main()
{
	cin>>n;
	queen(1);
	cout<<tot;
	return 0;
}
