#include<iostream>
using namespace std;

//operators are the symbols that tell the compiler to perform some specific operation 
/*
1. ARITHMETIC OPERATORS
   A) binary operators (+,-,*,/,%)
   b)unary operation 
     i)incrementer (++)
     ii) decrementer 


     PREINCREMENTER(++a)                        |                     POSTINCREMENTER (a++)
      Increment a instantly                     |
                                                |                       current value of a is preserved temporarily.
                                                |                       a will get incremented before next stament is executed  
*/

// same for predecrementer and post decrementer 


int main()
{

// code for preincrementer

int a=10;
int b;
b = ++a;
cout<<a<<" "<<b<<endl;

// code for postincrement 

int c=10;
int d;
d=c++;
cout<<c<<" "<<d<<endl;  

//code for combination of both preincrementer and postincrementer

  //ex. 1
        int i=1;
    //  4 =  1   +   3
        i = i++ + ++i;
        cout<<i<<endl;

//ex 2
int l=1;
int m=2;
int o;
o= l + m + l++ + m++ + ++l + ++m; //1+2+1+2+3+4
cout <<l<<" "<<m<<" "<<o<<endl;        

//ex. 3

int x=0;
x=x++ - --x + ++x - x--;// 0-0+1-1
cout<<x<<endl;

//ex. 4

int p=1,q=2,r=3;
int s=p-- - q--  - r--;//1-2-3
cout<<p<<" "<<q<<" "<<r<<" "<<s<<""<<endl;

// ex. 5

int u=10, v=20, w;
w=u-- - u++ + --v - ++v + --u - v-- + ++u + v++; 
cout<<u<<endl;
cout<<v<<endl;
cout<<w<<endl;



/*
RELATIONAL OPERATORS
  :- define a relation between two operands 
     returns a boolean value 

     == gives TRUE  if both operands have equal value 
     != gives TRUE  if both operands are not equal 
     > gives TRUE  if left operands is more than right operand
     < gives TRUE if left operands is less than right opeerand
     >= gives TRUE  if left operands is more than or equal to  right operand
     <= gives TRUE if left operands is less than or equal to  right opeerand
*/

/*
LOGICAL OPERATORS   
   used to connect multiple conditions /expressions together or to reverse logical value 

   && AND gives us TRUE if both operands are TRUE ,else FALSE
   || OR gives us TRUE if at least one of the operandS are TRUE
   ! NOT gives the opposite logical value of the operand . TRUE  becomes FALSE and FALSE becomes TRUE   

*/
int num;
cout<<"Enter the number "<<endl;
cin>>num;

if(num%2==0&&num%3==0)
{
    cout<<"The number is divisible by both 2 and 3 "<< endl;
}
else if(num%2==o)
{
    cout<<"The number is only divisible by 2"<<endl;
}
else if(num%3==0)
{
    cout<<" The number is only divisible by 3"<< endl;
}
else { 
    cout<<" The number divisiable by neither  2 nor 3 ";
}

/*
BITWISE OPERATORS 
operate on bit and perform bit bby bit operations 

  & AND operator   
  0101     
& 0110
  0100

  | OR operator 
  0101
| 0110
  0111

  ^ XOR OPERATOR 
  0101
  0110
^ 0011

  ~   ONCE COMPLIMENT 
~ 0101
  1010 

  <<  LEFT SHIFT OPERATOR 
     4<<1
     (0100)
    =1000                               a<<n --->  a*2^n

  >> RIGHT SHIFT OPERATOR 
   4>>1                                 a>>n --->  a/2^n

   (0100)
   =0010
*/
/*

ASSIGNMENT OOPERATORS 
= assigns value of right operand to left operand
+= assigns sum of two operands to left operand
-= assigns difference of two operands to left operand
*= assigns product of two operands to left operand 
/=assigns the quotient of two operands to left operand

*/
/*
MISCELLANEOUS OPERATORS 

 sizeof() returns the size of a variable 
 condition? x:y retures the value of x if condition is true else value of y  //also called ternary or conditional   
 cast convert one data type to another      
  comma(,)  causes a sequence of operations to be performed 
  & returns the address of a variable //reference operator 
  * pointer to a variable 
*/

//learn operations precedence 

return 0;
}