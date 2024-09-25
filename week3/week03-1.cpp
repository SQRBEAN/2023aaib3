///因為版本不夠新不能使用進階函式
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(char c:s){
		if(c!= '2')cout<<c;
	}
	cout<<"\n";

}
