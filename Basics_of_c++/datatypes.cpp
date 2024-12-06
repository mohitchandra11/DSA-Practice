#include<iostream>
using namespace std;
int main()
{ 
    /* 
DATA TYPES:
      1. Primitive 
          a) Integer    
          b)Float
          c)character
          d)Boolean
      2. Derived
          a)Function 
          b)Array
          c)pointer
          d)Reference
      3. User-Defined
          a)Class
          b)Structure
          c)Union
          d)Enum
*/
/*
    INT
    size=4 byte (1 Byte=8 bit) or 32 bits ||
    Total numbers=2^32
    maximum no. = (2^32)-1
    range (unsigned) = 0 to (2^32)-1
    range (signed) =-2^31 to (2^31)-1
    if msb is 1 so the sign is -
    if msb is 0 so the sign is +
*/
int a;//declaration
    a=12;//initialisation 
    cout<<"Size of int is "<<sizeof(a)<<endl;


/*
    FLOAT
    size= 4 byte(upto 7 decimal digits )
    DOUBLE 
    size =8 byte(upto 15 decimal digits)
*/
float b;
    cout<<"Size of float "<<sizeof(b)<<endl;

/*
    CHAR
    size= 1 byte 
    to store char in memory we use ASCII values for corressponding character
*/
 char c;
    cout<< " size of character "<<sizeof(c)<<endl;
/*
    BOOL
      size= 1 byte
      stores boolean values -> true or false 
*/
     bool d;
    cout<< " Size of bool "<< sizeof(d)<<endl;

   
/* TYPE MODIFIERs

signed        4 bytes           -2,147,483,648 TO 2,147,483,647
unsigned      4 bytes            0 to 4,294,967,295
long          8 bytes           -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807
short         2 bytes           -32,768 to 32,767

*/

      short int si;
      long int li;
       cout<< " size of short int "<<sizeof(si)<<endl;
       cout<< "size of long int "<<sizeof(li)<<endl;
 return 0;
}