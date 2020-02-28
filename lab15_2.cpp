#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *dPtr,int N,int M){
	
	for(int i=0; i<N*M ; i++){
	
			*(dPtr+i) = rand()%100 / 100.00;
			
			  
		}
	}




void findColSum(const double *dPtr,double *result,int N,int M){
	double sum =0;
	int x=0,y=0;
for(int i=0; i<N ; i++){
	for(int j=0 ; j<M; j++){
	sum += *(dPtr+j*7+i);
	
	}*(result+i) =sum;
		sum =0;



	
	}

}

void showData(double *a,int N,int M){
for(int i=0; i<(N*7) ; i+=7){
		for(int j=0; j<M ; j++){
			cout<<fixed<<setprecision(2);
			cout << *(a+i+j) <<"  ";

		}cout<<'\n';
		
}
}