#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int max,j,z;
	for(int i=1;i<N;i++){
		j = i-1;
		for(int z=0;z<N;z++){
			cout << d[z] << " ";
		}
		cout << " => ";
		while(j>=0 && d[j]< d[i]){
			swap(d,j,i);
			i--;
			j--;	
		}
		for(int z=0;z<N;z++){
			cout << d[z] << " ";
		}
		cout << "\n";
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
