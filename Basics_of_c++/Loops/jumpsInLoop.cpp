// jumps in loops :- 1)continue 2) break
// to controls the flow of loops on meeting some specified condition 
//Continue :-skip to the next iteranation of the loop 
//Break :- Terminate the loop 

// program to print all numbers between 1  to 100 exclude numbers which are divisible by 3
#include<iostream>
using namespace std;


int main()
{ 
    for(int i=1;i<=100;i++)
    {
      if (i%3==0)
      {
        continue ;
      }
        cout<<i<<endl;
    }
return 0;
}
 