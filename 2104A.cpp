// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
   int a,b,c;
   cin>>a>>b>>c;
   int l2= c-b;
   int l1= b-a;
   l2= l2-l1;
   if(l2>=0 && l2%3==0){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
   }

    return 0;
}
