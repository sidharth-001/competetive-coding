#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        
        if(a>b) cout<<a<<" ";
        else cout<<b<<" ";
        
        cout<<a+b<<"\n";
    }
	
	return 0;
}
