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
	cout<<"Contenido de la matriz:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	int s=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i<j){
			s+=A[i][j];
			}
		}
	}
	cout<<"Suma de elemetos arriba de la diagonal principal: "<<s;
	return 0;
}