#include <iostream>
#include "pilha.h"
using namespace std;
void Pilha::criarPilha(){
	topo = -1;
}
void Pilha::push(int elemento){
	if(!cheia()){
		topo++;
		elementos[topo] = elemento;
	}
}
void Pilha::pop(){
	if(!vazia()){
		topo--;
	}
}
int Pilha::top(){
	if(!vazia()){
		return elementos[topo];
	}
	else{
		return -1;
	}
}
void Pilha::exibir(){
	for(int i = 4; i >= 0; i--){
		cout<<"["<<i<<"]";
		if(i > topo){
			cout<<" --- "<<endl;
		}
		else{
			cout<<elementos[i]<<endl;
			if(i == topo){
				cout<<" <-- TOPO";
			}
			cout<<endl;
		}
	}
}
bool Pilha::vazia(){
	if(topo == -1){
		return true;
	}
	return false;
}
bool Pilha::cheia(){
	if(topo == 4){
		return true;
	}
	return false;
}
