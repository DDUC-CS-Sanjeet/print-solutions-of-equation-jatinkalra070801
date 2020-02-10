#include <iostream>
using namespace std;

void printsolutions(int arr[],int start,int last,int c)
{
    if(start>last)
    {
        if(c==0)
        { 
            for(int i=0;i<=last;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        for(arr[start]=c;arr[start]>=0;arr[start]--)
            printsolutions(arr,start+1,last,c-arr[start]);      
    }  
}

  int main()
  {
      int c,n;
      cout<<"enter the number of integers\t";
      cin>>n;
      cout<<"enter the value of c\t";
	  cin>>c;
      int* array=new int[n];
      printsolutions(array,0,n-1,c);

      return 0;
  }