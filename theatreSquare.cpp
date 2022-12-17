#include <iostream>
using namespace std;
long long int theatreSquare ( int n,  int m, int a){
  long long int square, height, width;
     height=n/a;
     if(n%a!=0)
     height++;
    
     width=m/a;
     if(m%a!=0)
     width++;
     square=width*height;
     return square;
 
   
}
 
int main()
{
   int m,n,a;
   long long int ans;
    cin>>n>>m>>a;
    
   ans=theatreSquare(n,m,a);
   cout<<ans;
   
   
   
    return 0;
}
