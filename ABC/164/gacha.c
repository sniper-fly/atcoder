#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_TABLE 10000
#define SIZE_KEYSTR 11

typedef struct node{
	char			keyStr[SIZE_KEYSTR];
	int 			value;
	struct node*	pNextNode;
} node_t;

int printfHashTable(node_t** pHashTable){
	node_t* pNode = NULL;
	int i;
	int ct = 0;
	
	for(i = 0; i < SIZE_TABLE; i++){
		if(pHashTable[i] != NULL){
			pNode = pHashTable[i];
			while(pNode != NULL){
				ct++;
				pNode = pNode->pNextNode;
			}
		}
	}
	
	return (ct);
}

int hashFunc(char* keyStr){
	int sum = 0;
	int i = 0;
	
	while(keyStr[i] != '\0'){
		sum += keyStr[i];
		i++;
	}
	
	return sum % SIZE_TABLE;
}

void initHashTable(node_t** pHashTable){
	int i;
	
	for(i = 0; i < SIZE_TABLE; i++){
		pHashTable[i] = NULL;
	}
}
 
node_t* initNode(char* keyStr, int value){
	node_t* pNode = NULL;
	
	pNode = (node_t*)malloc(sizeof(node_t));
	if(pNode == NULL){
		return NULL;
	}
	
	strcpy(pNode->keyStr, keyStr);
	pNode->value = value;
	pNode->pNextNode = NULL;
	
	return pNode;
}
 
void registerKeyVal(node_t** pHashTable, char* keyStr, int value){
	node_t* pNode = NULL;
	node_t* pPreNode = NULL;
	
	if(strlen(keyStr) > SIZE_KEYSTR - 1){
		return;
	}
	
	//連結リストが存在しない場合
	if(pHashTable[hashFunc(keyStr)] == NULL){
		pHashTable[hashFunc(keyStr)] = initNode(keyStr, value);
		if(pHashTable[hashFunc(keyStr)] == NULL){
			return;
		}
		return;
	}
 
	//連結リストが存在した場合
	pNode = pHashTable[hashFunc(keyStr)];
	pPreNode = pNode;
	while(pNode != NULL){
		if(strcmp(keyStr, pNode->keyStr) == 0){
			pNode->value = value;
			return;
		}
		pPreNode = pNode;
		pNode = pNode->pNextNode;
	}
	
	pPreNode->pNextNode = initNode(keyStr, value);
	//error chkはなし
	
	return;
}

int		main(void)
{
	node_t *pHashTable[SIZE_TABLE];
	initHashTable(pHashTable);

	int N;
	char gachaword[12];
	int i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", gachaword);
		registerKeyVal(pHashTable, gachaword, i);
	}
	printf("%d", printfHashTable(pHashTable));
	return (0);
	
}