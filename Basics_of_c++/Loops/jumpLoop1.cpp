#include<iostream>
using namespace std;

int main()
{
    int j;
    int coll;
    int m=200;

    for(coll=1;coll<=7;coll++)
    {
        if(coll%2==0){
            continue;
        }
        if
            (m==0)
            {
                break;
            }
        m=m-100;  // to see the function of this change it accordingly 
        cout<<"Go college today"<<endl;
    }
    return 0;
}