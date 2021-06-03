#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,i,j,C,maxp,number,power;
    cin>>t;
	while(t--)// your code goes here
    {
        cin>>C;

        for(i=0;i<10000;i++)
        {
            if((pow(2,i)<C)&&(pow(2,i+1)>=C))
            power=i+1;
        }
        number=pow(2,i);
        maxp=1;
        for(i=1;i<=number;i++)
        {
            for(j=1;j<=number;j++)
            {
               if((char(i)^char(j))==char(C))
                {
                    if(maxp<i*j)
                    maxp=i*j;
                }

            }
        }
        cout<<maxp<<endl;
    }
	return 0;
}
