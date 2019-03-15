#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    int A,N1,D1,N2,D2,X,Y;
    string E,F,G;
    int i,j;
    cin>>A;
    for(i=0;i<A;i++)
    {
        cin>>N1;
        cin>>E;
        cin>>D1;
        cin>>F;
        cin>>N2;
        cin>>G;
        cin>>D2;
        if(F=="+")
        {
            X=(N1*D2)+(N2*D1);
            Y=(D1*D2);
            cout<<X<<"/"<<Y<<" = ";
            if(X!=0)
             {
            for(j=2;j<=10000;j++)
            {
                if(X%j==0 and Y%j==0)
                {
                    X=X/j;
                    Y=Y/j;
                    j=2;
                }
            }
            }
            cout<<X<<"/"<<Y<<"\n";
        }
        else if(F=="-")
        {
             X=(N1*D2)-(N2*D1);
             Y=(D1*D2);
             cout<<X<<"/"<<Y<<" = ";
             if(X!=0)
             {
             for(j=2;j<=10000;j++)
            {
                if(X%j==0 and Y%j==0)
                {
                    X=X/j;
                    Y=Y/j;
                    j=2;
                }
            }
            }
            cout<<X<<"/"<<Y<<"\n";
        }
        else if(F=="*")
        {
             X=(N1*N2);
             Y=(D1*D2);
             cout<<X<<"/"<<Y<<" = ";
             if(X!=0)
             {
             for(j=2;j<=10000;j++)
            {
                if(X%j==0 and Y%j==0)
                {
                    X=X/j;
                    Y=Y/j;
                    j=2;
                }
            }
            }
            cout<<X<<"/"<<Y<<"\n";
        }
        else if(F=="/")
        {
             X=(N1*D2);
             Y=(N2*D1);
             cout<<X<<"/"<<Y<<" = ";
             if(X!=0)
             {
             for(j=2;j<=10000;j++)
            {
                if(X%j==0 and Y%j==0)
                {
                    X=X/j;
                    Y=Y/j;
                    j=2;
                }
            }
            }
            cout<<X<<"/"<<Y<<"\n";
        }
    }
}
