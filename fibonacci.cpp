#include <iostream>
using namespace std;

series(int n){
	int first = 0;
	int second = 1;
	cout<<first<<" "<<second<<" ";
	
	for(int i=2; i<n; i++){
		int next = first + second;
		cout<<next<<" ";
		
		first = second;
		second = next;
	}
}

int main(){
	int terms;
	cout<<"Enter number of terms: ";
	cin>>terms;
	
	series(terms);
}
