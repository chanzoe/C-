#pragma once

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

/*
typedef void SeqList;
typedef void SeqListNode;
*/

typedef void SeqStack;


SeqStack* SeqStack_Create(int capacity);

void SeqStack_Destory(SeqStack *stack);

void SeqStack_Clear(SeqStack *stack);

int SeqStack_Push(SeqStack *stack, void* item);

void* SeqStack_Pop(SeqStack* stack);

void* SeqStack_Top(SeqStack* stack);

int SeqStack_Capacity(SeqStack* stack);

int SeqStack_Size(SeqStack* stack);

/*
int SeqStack_Insert(SeqStack* list, SeqListNode* node, int pos);

SeqListNode* SeqList_Get(SeqList* list, int pos);

SeqListNode* SeqList_Delete(SeqList* list, int pos);
*/
