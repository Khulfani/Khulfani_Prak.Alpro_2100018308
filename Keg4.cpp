#include<iostream>
#include<string>
using namespace std;

class Operator{
	friend ostream& operator<<(ostream&, Operator&);
	friend istream& operator>>(istream&, Operator&);
	
	public :
		long faktorial();
		long faktorial2(int);

	private :
		int n;
		long hasil;
};

long Operator::faktorial(){
	int n = 7;
	long fak = 1;
	for(int i = 1; i<=n; i++){
		fak = fak * i;
	}
	return fak;
}

long Operator::faktorial2(int n){
	if((n==0)||(n==1)){
		return(1);
	}
	else {
		return (n*faktorial2(n-1));	
	}
}

int main(){
	Operator a;
	cout<<"Hasil Iteratif : "<<a.faktorial()<<endl;
	cout<<endl;
	cout<<"Hasil Rekursif : "<<a.faktorial2(8)<<endl;
	return 0;
}
