#include<iostream>
using namespace std;
int main()
{ int pr,mb,temp=0;
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
for(int i=0;i<mb-1;i++)
{
for(int j=0;j<mb-i-1;j++)
{
if(memory_array[j]<=memory_array[j+1])
{
temp=memory_array[j];
memory_array[j]=memory_array[j+1];
memory_array[j+1]=temp;
}
}
}
for( int i=0;i<mb;i++)
{
cout<<memory_array[i]<<" ";
}
if(pr<=memory_array[0])
{
cout<<"\nMemory is allocated at block "<<memory_array[0]<<endl;
memory_array[0]=memory_array[0]-pr;

cout<<"Now the reduced space is "<<memory_array[0];

}

else
{
cout<<"\nMemory full no space left\n";
}
}