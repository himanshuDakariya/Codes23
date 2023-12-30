#include<iostream>
using namespace std;
int main()
{

int pr,mb;
cout<<"Enter the size of processes\n";
cin>>pr;
cout<<"Enter the number of memory blocks\n";
cin>>mb;
int memory_array[mb];
cout<<"Enter the capacity of blocks\n";
int j=0;
for( int i=0;i<mb;i++)
{
cin>>memory_array[i];
}
for(int i=0;i<mb;i++)
{
if(pr<=memory_array[i])
{
cout<<"memory is allocated at block "<<i+1<<endl;
memory_array[i]=memory_array[i]-pr;
cout<<"Now the reduced space of block "<<i+1<<" is "<<memory_array[i];
break;
}
j++;
}
if(j==mb)
{
cout<<"memory full no space left\n";
}
}