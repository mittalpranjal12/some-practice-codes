#include<bits/stdc++.h>
using namespace std;
#define ll long long 
string BinaryOfNumber(long long int num){
	long long int i = 0, temp = num;
	string str = "";
	while(num){
		if(!(num&1))
			str += '0';
		else
			str += '1';
		num = (num >> 1);
	}
	reverse(str.begin(), str.end());
    ll value = 63 - str.length();
    string aux = "";
    for(int i=0; i<value; i++)
        aux += '0';
    str = aux + str;
	return str;
}
ll NumberFromBinary(string str){
	int len = str.length();
	unsigned long long int num = 0;
	unsigned long long int val = 1;
	for(int i=len-1; i>=0; i--){
			num = num + val*(str[i] - '0');
			val = val * 2;
	}
	// cout << num << endl;
	return num;
}
ll swapBit(ll num, ll first, ll second){
    if(first < 63 && second < 63){
        string str = BinaryOfNumber(num);
        // cout << str << endl;
        swap(str[str.length() -1-first], str[str.length() - 1 -second]);
        // cout << str << endl;
        return NumberFromBinary(str);
    }
}
int main(){    
    ll num;
    cout << "Enter your number: ";
    cin >> num;
    cout << "Enter your option: \n";
    cout << "1. Swap two bits:\n";
    cout << "2. Encrypt the data:\n";
    ll res;
    cin >> res;
    switch(res){
        case 1:{
                ll first, second;
                cout << "Enter two position for swapping the bits...\n";
                cin >> first >> second;
                cout << swapBit(num, first, second) << endl;
            };break;
        case 2:{
                cout << swapBit(swapBit(swapBit(num, 5, 6), 0, 4), 1, 3) << endl;
            };break;        
    }
return 0;
}
