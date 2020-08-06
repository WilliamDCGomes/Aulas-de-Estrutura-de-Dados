#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
struct Pilha{
	int elementos[5];
	int topo;
	void push(int elemento);
	void pop();
	int top();
	void criarPilha();
	void exibir();
	bool vazia();
	bool cheia();
};
#endif
