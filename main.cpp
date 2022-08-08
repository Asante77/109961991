#include <iostream>

using namespace std;

int main()
{
    int a,b,c,flag;
     cout << "Enter a positive integer: N= ";
    cin>>b;

    for(a=2;a<=b;a++)
    {
        flag=1;

         for(c=2;c<=a/2;c++)
        {
            if(a%c==0)
            {
                flag=0;
                break;
            }


        }
        if(flag==1)
            cout<<a<<",";
    }
    return 0;
}
