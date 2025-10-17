#include<iostream>
using namespace std;
template<typename T>
void sort(T a[],int n){
	T temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
 }
}
template<typename T>
void print(T a[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[3]={44,76,2};
	char c[3]={'d','h','h'};
	sort(a,3); print(a,3);
	sort(c,3); print(c,3);
}
