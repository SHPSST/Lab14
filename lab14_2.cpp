#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double input[N][N]){
	for(int i=0;i<N;i++){
		cout << "Row " << i+1 << ": ";
		for(int j=0;j<N;j++){
			cin >> input[i][j];
		}
	}
}

void findLocalMax(const double input[N][N], bool bul[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i>0&&j>0&&N-1!=1&&N-j!=1){
				if(input[i][j]>=input[i-1][j]&&input[i][j]>=input[i][j-1]&&input[i][j]>=input[i+1][j]&&input[i][j]>=input[i][j+1]){
					bul[i][j]=1;
				}

				else bul[i][j]=0;
			}
			if(i==0||j==0||N-i==1||N-j==1)bul[i][j]=0;
		}
	}
}

void showMatrix(const bool show[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << show[i][j] << " ";
		}
		cout << endl;
	}
}