#include <iostream>
using namespace std;

int main() {
    int A,B,C;
    cin>>A>>B>>C;
    if(A == B || B == C || C == A){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
	return 0;
}
