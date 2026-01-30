#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &A,int &B,int &C,int &D){
	int t=2;
	while(t--){
		switch(rand()%6){
			case 0 : swap(A,B);
			case 1 : swap(A,C);
			case 2 : swap(A,D);
			case 3 : swap(B,C);
			case 4 : swap(B,D);
			case 5 : swap(C,D);
		}
	}
}