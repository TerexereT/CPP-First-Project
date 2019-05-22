#include <iostream>
#include <math.h>
using namespace std;
static int cont=0;
bool alberto[12];

class coordenadas{
	public:
	int x;
	int y;
	public:
	coordenadas(){
	this->x=x;
	this->y=y;
	}
	
};



class portales{
	public:
	int n;
	
	coordenadas pp[12];
	
	
	public:
	portales(int ni){
	n=ni;
	
	for (int i=0;i<n;i++){
		cin>>pp[i].x;
		cin>>pp[i].y;
		}
for (int i=0;i<n;i++){
	alberto[i]=false;
		
	}
}
	

	void backtracking(int k){
		

		if (k==n){
			flippendo(k);
		}else{
			backtracking(k+1);
	}
	
}
	
	
void flippendo (int c){
	int j;
	j=c-1;
	do{
		for(int i=0;i<c;i++){
			if(i!=j){
		if(pp[i].x!=pp[j].x && pp[i].y==pp[j].y){
			cont=cont+1;}
			}	
		}
		j=j-1;
		}while(j>-1);
}
	
	

};




int main(){
	int po;
	cin>>po;
	if((po%2==0) && (po>=2) && (po<=12)){
	portales p(po);
	p.backtracking(1);
	cout<<cont/2<<endl;
	}
}
