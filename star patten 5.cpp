#include<iostream>
using namespace std;
main()
{
  int i;
 int j;;
  for(i=1;i<=5;i++)
  {
  	for(j=1;j<=9;j++)
  	{
  	  if(j>=6-i&&j<=4+i)
		 cout<<"*";
	   else
	     cout<<" ";	
	  }
	   cout<<"\n";
  }
 

}
