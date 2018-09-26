#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct node_element{
	node_element *np;
	int e;
} Nodes;

Nodes *head = NULL;

int put_list(int data);
int erase_list(int data);

int main(){

	int n, m;
	int data;

	cin>>n>>m;
	for(int i = 0; i < n; i++){
		cin>>data;
		put_list(data);
	}
	for(int i = 0; i < m; i++){
		cin>>data;
		erase_list(data);
	}
	return 0;
}

int put_list(int data){
	Nodes *tmp = head;
	Nodes *new_node;

	new_node = (Nodes*)malloc(sizeof(Nodes));
	new_node->np = NULL;
	new_node->e = data;
	if(tmp == NULL){
		head = new_node;
	}
	else{
		while(tmp->np != NULL)tmp = tmp->np;
		tmp->np = new_node;
	}
	return true;
}

int erase_list(int data){
	Nodes *tmp = head;
	Nodes *prev_tmp = head;
	int cnt = 1;
	if(tmp == NULL){
		printf("List is empty\n");
		return false;
	}
	while(tmp->np != NULL){
		if(cnt == data)break;
		prev_tmp = tmp;
		tmp = tmp->np;
		++cnt;
	}
	if(cnt != data){
		printf("N > list size\n");
		return false;
	}
	if(tmp == head){
		printf("%d\n",tmp->e);
		head = tmp->np;
		return true;
	}
	prev_tmp->np = tmp->np;
	printf("%d\n",tmp->e);
	return true;
}
