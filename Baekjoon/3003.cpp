#include <iostream>

using namespace std;

int main(){
    
    int king=1, queen=1, look=2, bishop=2, night=2, pon=8;
    int k,q,l,b,n,p;
    
    
    


    cin>>k>>q>>l>>b>>n>>p;

    if(k==1){
        cout<<0<<" ";
    }
    else{
        cout<<king-k<<" ";
    }
    //king
    if(q==1){
        cout<<0<<" ";
    }
    else{
        cout<<queen-q<<" ";
    }
    //queen
    if(l==2){
        cout<<0<<" ";
    }
    else{
        cout<<look-l<<" ";
    }
    //look
    if(b==2){
        cout<<0<<" ";
    }
    else{
        cout<<bishop-b<<" ";
    }
    //bishop

    if(n==2){
        cout<<0<<" ";
    }
    else{
        cout<<night-n<<" ";
    }
    //night
    if(p==8){
        cout<<0;
    }
    else{
        cout<<pon-p;
    }
}