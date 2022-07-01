/Adrian Widmer
//Orlando Mota Pires

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char tp_item;	
	
typedef struct tp_no{
	struct tp_no *esq;
	tp_item info;
	struct tp_no *dir;
} tp_no; 

typedef tp_no * tp_arvore;

tp_arvore inicializa_arvore(){
 return NULL;
}

int arvore_vazia(tp_arvore raiz){
	if(raiz==NULL) return 1;
	else return 0;
}

tp_no *aloca_no(){
	tp_no *no;
	no=(tp_no*)malloc(sizeof(tp_no));
	return no;
}

int insere_no(tp_arvore *raiz, tp_item e){	
      
      tp_no *pai=NULL, *novo, *p;
	novo=aloca_no();
	if(!novo) return 0; 

	novo->info=e;
	novo->esq=NULL;
	novo->dir=NULL;
		
	p = *raiz;
	while(p!=NULL){
		pai=p;
		if( e < p->info)
			p=p->esq;
		else
			p=p->dir;
	}	
	
	if(pai!=NULL){	
		if ( e < pai->info)
		   pai->esq=novo;
		else 
		   pai->dir=novo;
	}
	else 
		*raiz=novo;

	return 1;	
}

int altura_arvore(tp_arvore raiz){
	if(raiz == NULL) return 0;
	int alt_esq = altura_arvore(raiz->esq);
	int alt_dir = altura_arvore(raiz->dir);
	if(alt_esq > alt_dir){
		return alt_esq + 1;
	}else{
		return alt_dir + 1;
	}
}

void pre_ordem(tp_no *p, int *aux){ //imprime os elementos em pre-ordem
	if(p!=NULL){
		if(*aux != 1) {
      printf(" %c",p->info);
    }
    else{
      *aux = 0;
      printf("%c",p->info);
    }
		pre_ordem(p->esq,  aux);
		pre_ordem(p->dir,  aux);
	}
}	

void em_ordem (tp_no *p, int *aux){  //imprime os elementos em ordem
  if (p != NULL) {
    em_ordem (p->esq, aux);	
    if(*aux != 1) {
      printf(" %c",p->info);
    }
    else{
      *aux = 0;
      printf("%c",p->info);
    }
    em_ordem (p->dir,  aux);
  }
}

void pos_ordem (tp_no *p, int *aux){ //imprime os elementos em pós-ordem 
	if (p != NULL) {
	pos_ordem (p->esq, aux);
	pos_ordem (p->dir, aux);
  if(*aux != 1) {
      printf(" %c",p->info);
    }
    else{
      *aux = 0;
      printf("%c",p->info);
    }
	}
}
      
tp_no* busca_no(tp_no *p, tp_item e){
	while (p != NULL){ 
		if (e < p->info) 
			p = p->esq; 
		else 
			if (e > p->info) 
				p = p->dir; 
			else 
				return (p);
	}
 	return (NULL); 
}

tp_item busca_maior_no(tp_no *p){
	tp_item e;
	while (p != NULL){ 		 		 
		if(p->dir == NULL) {
      break;
    }else p = p->dir; 
	}
  return (p->info);
}

void le_letras(tp_arvore *raiz){    
	char letra[15];
  int aux = 0;
	while(scanf(" %[^\n]s", letra) != EOF){   
			
		if((letra[0] == 'I' || letra[0] == 'i') && letra[1] == ' '){
			insere_no(raiz, letra[2]);
		}	
		else if(!strcmp(letra, "INFIXA")){
      	aux = 1;
			em_ordem(*raiz, &aux);	
			printf("\n");	
		}
		else if(!strcmp(letra, "PREFIXA")){
      	aux = 1;
      pre_ordem(*raiz, &aux);	
			printf("\n");								
		}
		else if(!strcmp(letra, "POSFIXA")){
     		aux = 1;
			pos_ordem(*raiz, &aux);
			printf("\n");
		}
		else if(letra[0] == 'P' || letra[0] == 'p'){
			if(busca_no(*raiz, letra[2]) == NULL){
				printf("%c nao existe\n", letra[2]);						
			}else printf("%c existe\n", letra[2]);
		}        
	}
}

int main(){

	tp_arvore raiz = inicializa_arvore();
	le_letras(&raiz);
	return 0;
      
}

