#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int l,r,count=0;
        cin>>l>>r;
        for(int i=l; i<=r; i++){
            if(i%10 == 2 || i%10 == 3 || i%10 == 9){
                count += 1;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}
