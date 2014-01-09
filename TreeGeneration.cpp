//Generates a tree of characters in the console!
#include<iostream>
#include<string>

using namespace std;

bool is_odd(int n){
	if(n%2 != 0)return true;
	else return false;
}

void enterinformation(int &n, char &leaves, char &trunk){
	cout <<"Enter the size of the base of the tree: "<<endl;
	cin >> n;

	//Base Size
	while(cin.fail()){
		cin.clear();
		cin.ignore();
		cout <<"The base must be a digit, try again:" <<endl;
		cin >> n;
	}

	while(n < 3){
		cout <<"The base must be larger than or equal to 3, try again:"<<endl;
		cin >>n;
	}

	while(!is_odd(n)){
		cout<<"It has to be an odd number, try again:"  <<endl;
		cin >> n;
	}
	//Trunk
	cout << "Enter the character to be represented as the trunk:" <<endl;
	cin >> trunk;

	while(!isprint(trunk)){
		cout <<"The character must be printable! Try again:" << endl;
		cin >> trunk;
	}
	//Leaves
	cout << "Enter the character to be represented as leaves:" <<endl;
	cin >> leaves;

	while(!isprint(leaves)){
		cout <<"The character must be printable! Try again:" << endl;
		cin >> leaves;
	}

}
int main(){
	
	int i,n;
	char trunk, leaves;
	
	enterinformation(n,leaves,trunk);
	
	for(i=1;i<n-1;i+=2){
		cout << string((n-i)/2, ' ')<< string(i,leaves)<<endl;
	}
	cout << string((n-1)/2-1, ' ') << string(3,trunk)<<endl;

	return 0;
}