#include <iostream>
using namespace std;

int main() {
    char C;
    cin>>C;
    
    if(C=='A' || C=='E' || C=='I' || C=='O' || C=='U')
        cout<<"Vowel";     
    else
        cout<<"Consonant";
	return 0;
}
