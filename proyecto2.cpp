#include <iostream>
#include <string>
using namespace std;

class Nodo{
	public:
string nombre;
int tiempo;
Nodo *sig;
Nodo(){
sig=NULL;
}	
};

class Nodo2{
	public:
string nombre;
int tiempo;
int ganancia;
Nodo2 *ant;
Nodo2 *sig;
Nodo2(){
sig=NULL;
ant=NULL;
}	
};

class Pila{	//Tipo Recreativa
		public:
Nodo *primero; 
Nodo *ultimo;
Nodo2 *sal;
public:
Pila(){
primero=NULL;
ultimo=NULL;
}


bool empty(){
if (primero==NULL){
return true;}else{return false;}
}	

void insertar(string n, int t){
			if(empty()){	
				primero= new Nodo();
				primero->nombre=n;
				primero->tiempo=t;
				ultimo=primero;	
			}else{
				Nodo *aux=new Nodo();
				aux->nombre=n;
				aux->tiempo=t;
				aux->sig=primero;
				primero=aux;
			}
}

void eliminar(){
if (empty()){
}else{
Nodo *aux=new Nodo();
aux=primero;
primero=aux->sig;
delete aux;
}	
}


void recorrer(){
if (primero==NULL){}else{
int cont=0;
Nodo *aux= primero;
while (aux!=NULL){
cout<<aux->nombre<<" ";
aux=aux->sig;
cont=cont+1;
}
cout<<endl;
}
}

Nodo2 gettop(){
	Nodo2 *sal=new Nodo2();
	if(empty()){
		}else{
		sal->nombre=primero->nombre;
		sal->tiempo=primero->tiempo;
		primero=primero->sig;
		return *sal;	
		}
	return *sal;
}

};


class Cola{			//Tipo Musical
			public:
Nodo *primero; 
Nodo *ultimo;
Nodo2 *sal;
public:
Cola(){
primero=NULL;
ultimo=NULL;
}

bool empty(){
if (primero==NULL){
return true;}else{return false;}
}

void insertar(string n, int t){
	if(empty()){
				primero= new Nodo();
				primero->nombre=n;
				primero->tiempo=t;
				ultimo=primero;
	}else{
		Nodo *aux1=primero;
		while(aux1->sig!=NULL){
			aux1=aux1->sig;
		}
				Nodo *aux=new Nodo();
				aux->nombre=n;
				aux->tiempo=t;
				aux->sig=aux1->sig;
				aux1->sig=aux;
				ultimo=aux;
			
	}
}


void eliminar(){
if (empty()){
}else{
Nodo *aux=new Nodo();
aux=primero;
primero=aux->sig;
delete aux;
}	
}

Nodo2 gettop(){
	Nodo2 *sal=new Nodo2;
	if(empty()){
		}else{
		sal->nombre=primero->nombre;
		sal->tiempo=primero->tiempo;
		primero=primero->sig;
		return *sal;	
		}
	return *sal;
}

void recorrer(){
if (primero==NULL){}else{
int cont=0;
Nodo *aux= primero;
while (aux!=NULL){
cout<<aux->nombre<<" ";
aux=aux->sig;
cont=cont+1;
}
cout<<endl;
}
}

};


class Lista2{		//Tipo Hogar    
	public:
Nodo2 *primero;
Nodo2 *ultimo;
int cont;
public:
Lista2(){
cont=0;
primero=NULL;
ultimo=NULL;
}

bool empty(){
if (primero==NULL){
return true;}else{return false;}
}

void insertar(string n, int t){
	if (empty()){
				primero= new Nodo2();
				primero->nombre=n;
				primero->tiempo=t;
				ultimo=primero;
		}else{
			if(cont%2==0){ //izquierdo
				Nodo2 *aux= new Nodo2();
				aux->nombre=n;
				aux->tiempo=t;
				aux->sig=primero;	
				primero->ant=aux;
				primero=aux;
				
			}else{ //derecho
				Nodo2 *aux= new Nodo2();
				aux->nombre=n;
				aux->tiempo=t;
				ultimo->sig=aux;	
				aux->ant=ultimo;
				ultimo=aux;
				
			}
			
			}
	
	cont++;
}

void recorrer(){
if (primero==NULL){
	}else{
Nodo2 *aux= primero;
	while (aux!=NULL){
		cout<<aux->nombre<<" ";
		aux=aux->sig;
		}
		cout<<endl;
	}
}

	void eliminar2(){
		if (empty()){
			}else{
		Nodo2 *aux1=new Nodo2();
		aux1=primero;
		while(aux1->sig!=NULL){
		aux1=aux1->sig;
		}
		aux1->ant->sig=NULL;
		ultimo=aux1;
		delete aux1;
			}
cont--;
}


	void eliminar(){
		if (empty()){
			}else{
		Nodo2 *aux=new Nodo2();
		aux=primero;
		if(aux->sig!=NULL){
		primero=aux->sig;
		primero->ant=NULL;
		delete aux;
			}else{
			delete primero;
				}
			}
cont--;	
}

Nodo2 gettop(){
	Nodo2 *sal=new Nodo2;
	if(empty()){
		}else{
		sal->nombre=primero->nombre;
		sal->tiempo=primero->tiempo;
		primero=primero->sig;
		return *sal;	
		}
	return *sal;
}
	
};


class Lista1{		//Tipo Trabajo   
	public:	
Nodo2 *primero; 
Nodo2 *ultimo;

public:
Lista1(){
	
primero=NULL;
ultimo=NULL;

}

bool empty(){
if (primero==NULL){
return true;}else{return false;}
}
	
void insertar(string nom, int g, int t){    
    Nodo2 *aux=new Nodo2();
    aux->nombre=nom;
    aux->ganancia=g;
    aux->tiempo=t;
    if (empty()){
                primero= new Nodo2();
                primero->nombre=nom;
                primero->ganancia=g;
                primero->tiempo=t;
                ultimo=primero;
    }else{
        Nodo2 *aux1=primero;
while(aux1->sig!=NULL){
        if(aux->ganancia > aux1->ganancia){
        break;
        }
        if(aux->ganancia ==aux1->ganancia){
			if(aux->tiempo > aux1->tiempo || aux1->sig==NULL){
				break;}
        }
        if(aux->ganancia < aux1->ganancia){
            if(aux->ganancia > (aux1->sig)->ganancia){
            break;}
        }
            aux1=aux1->sig;
}

	if(aux->ganancia > aux1->ganancia){
		aux->sig=aux1;
		aux->ant=aux1->ant;
		aux1->ant=aux;
		primero=aux;
	}


	if(aux->ganancia == aux1->ganancia){
		if(aux->tiempo > aux1->tiempo){
			if(aux1==primero){
				aux->sig=aux1;
				aux->ant=NULL;
				aux1->ant=aux;
				primero=aux;
			}else{
				if(aux1==ultimo){
					aux->sig=aux1;
					aux->ant=aux1->ant;
					aux->sig->ant=aux;
					aux->ant->sig=aux;					
				}else{
					aux->sig=aux1;
					aux->ant=aux1->ant;
					aux->ant->sig=aux;
					aux->sig->ant=aux;
					}	
				}
		}else{	
       	if(aux1==primero){
				aux->ant=aux1;
				aux->sig=NULL;
				aux1->sig=aux;
				ultimo=aux;
				}else{
			if(aux1==ultimo){
				aux->sig=NULL;
				aux->ant=aux1;
				aux1->sig=aux;
				ultimo=aux;
					}else{
				aux->sig=aux1->sig;
				aux->ant=aux1;
				aux1->sig=aux;
				aux->sig->ant=aux;
            }
		}
		}
	}
        
	if(aux->ganancia < aux1->ganancia){
		if(aux1==primero){
			aux->sig=NULL;
			aux->ant=aux1;
			aux1->sig=aux;
			ultimo=aux;
		}else{
			if(aux1==ultimo){
				aux->sig=NULL;
				aux->ant=aux1;
				aux1->sig=aux;
				ultimo=aux;
			}else{
				aux->sig=aux1->sig;
				aux->ant=aux1;
				aux->ant->sig=aux;
			}
		}
	}
        
	}
}
	
	void eliminar(){
if (empty()){
}else{

Nodo2 *aux=new Nodo2();
aux=primero;
primero->sig->ant=NULL;
primero=primero->sig;
delete aux;
}
}
	
void recorrer(){
if (primero==NULL){
	}else{
int cont=0;
Nodo2 *aux=primero;
	while (aux->sig!=NULL){
		cout<<aux->nombre<<" ";
		aux=aux->sig;
		cont=cont+1;
	}
	cout<<aux->nombre<<endl;
		}
}

Nodo2 gettop(){
	Nodo2 *aux=new Nodo2;
	if(empty()){
		}else{
		aux=primero;
		primero=primero->sig;
		return *aux;	
		}
	return *aux;
}
 
};


class ListaSalida{
			public:
Nodo2 *primero;
Nodo2 *ultimo;
public:
ListaSalida(){
primero=NULL;
ultimo=NULL;
}


bool empty(){
if (primero==NULL){
return true;}else{return false;}
}	

void insertar(string n){
			if(empty()){	
				primero= new Nodo2();
				primero->nombre=n;
				ultimo=primero;
			
			}else{
		Nodo2 *aux1=primero;
		while(aux1->sig!=NULL){
			aux1=aux1->sig;
		}
				Nodo2 *aux=new Nodo2();
				aux->nombre=n;
				aux->sig=aux1->sig;
				aux1->sig=aux;
				ultimo=aux;
			}
}


void recorrer(){
if (primero==NULL){
	}else{
int cont=0;
Nodo2 *aux= primero;
while (aux!=NULL){
cout<<aux->nombre<<" ";
aux=aux->sig;
cont=cont+1;
}
cout<<endl;
}
}

};



int main(){
	int tipo,ganancia,tiempo,maxtareas,stamina,rosa,flag,flag2;
	rosa=0;
	string n;
	Lista2 l2;	//Hogar
	Lista1 l1;	//Trabajo
	Pila p;		//Recreativa
	Cola c;		//Musical
	ListaSalida salida;

cin>>stamina;
cin>>maxtareas;
flag=maxtareas;
flag2=stamina;
//			ENTRADA
	cin>>n;
	while(n!="fin"){
	cin>>tipo;
			if(tipo==1){	//Tipo Recreativa
			cin>>tiempo;
			p.insertar(n,tiempo);
			
			}
			if(tipo==2){	//Tipo Hogar
			cin>>tiempo;
			l2.insertar(n,tiempo);
			
			}
			if(tipo==3){	//Tipo Trabajo
			cin>>tiempo;
			cin>>ganancia;
			l1.insertar(n,ganancia,tiempo);
			}
			if(tipo==4){	//Tipo Musical
			cin>>tiempo;
			c.insertar(n,tiempo);
			
			}
			cin>>n;
			
	}

//			SALIDA
int et,eh,em;

while(l1.empty() && l2.empty() && c.empty()){
	while(true){
		if(l1.primero->tiempo > l2.primero->tiempo && l1.primero->tiempo > c.primero->tiempo){
		salida.insertar(l1.primero->nombre);
		l1.eliminar();
		break;
		}
		if(l2.primero->tiempo > l1.primero->tiempo && l2.primero->tiempo > c.primero->tiempo){
		salida.insertar(l2.primero->nombre);
		l2.eliminar();
		break;
		}
		if(c.primero->tiempo > l2.primero->tiempo && c.primero->tiempo > l1.primero->tiempo){
		salida.insertar(c.primero->nombre);
		c.eliminar();
		break;
		
		}
	}
}

l1.recorrer();
l2.recorrer();
c.recorrer();
p.recorrer();
salida.recorrer();
}

