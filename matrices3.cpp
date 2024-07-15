#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese las filas de la matriz: "; cin>>n;
	int A[n][3*n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n*3; j++){
			if(i==0 || i==n-1){
			cout<<"1 ";
		}
		else if(j==0 || j==(n*3)-1){
			cout<<"1 ";
		}
		else{
			cout<<"0 ";
		}	
		}
		cout<<endl;
	}
	return 0;
}