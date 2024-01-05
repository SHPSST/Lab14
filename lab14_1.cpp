#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int n=1;n<N;n++){
		for(int i=0;i<n;i++){
			if(d[i]<d[n]){
				T temp = d[i];
				d[i]=d[n];
				d[n]=temp;
			}
		}
		cout << "Pass " << n << ":";
		for(int i=0;i<N;i++){
			cout << d[i] << " ";
			if(N-i==1) cout << endl ;
		}
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

