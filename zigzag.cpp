#include<cstdlib>
#include<iostream>
#include<string>


using namespace std;

void zigzag(string A,int B)
{
	int i=0,flag = 0,k=0;
	string temp[B],res;
	for(i=0;i<A.length();i++)
	{
		
		temp[k].push_back(A[i]);
		if(flag ==0)
		{
			k++;
		}
		else
		{
			k--;
		}

		if(k==B-1)
		{
			flag = 1;
		}
		else if(k==0)
		{
			flag = 0;
		}
	}
	for(i=0;i<B;i++)
	{
		res = res.append(temp[i]);
	}
	cout<<temp[0]<<endl;
	cout<<temp[1]<<endl;
	cout<<temp[2]<<endl;
	cout<<res<<endl;
}
int main()
{
	string A = "PAYPALISHIRING";
	int B = 3;
	zigzag(A,B);

}
