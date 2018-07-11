/*! \file */ 
#include <iostream>
//! \fn Raise int to specific power
/*!
 \param base Integer to raise in specific power
 \param power Power
 \return result of operation
*/
int raisePower(int base, int power)
{
 int result=1;
 for (int i=0; i<=power; i++)
   result*=base;
 return result;
}
int main()
{
int b=2,p;
for(int i=0;i<10;++i)
{
p=raisePower(b,i);
std::cout<<p<<" ";
}
std::cout<<std::endl;
return 0;
}
