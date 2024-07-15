#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese el orden de la matriz: "; cin>>n;
	int A[n][n];
	for(int i=0; i<n; i++){
	
		for(int j=0; j<n; j++){
			cout<<"Elemento ["<<i<<"]["<<j<<"]: "; cin>>A[i][j];
		}
	}
	return 0;
}