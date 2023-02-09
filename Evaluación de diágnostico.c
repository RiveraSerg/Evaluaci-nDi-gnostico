#include <stdio.h>
#include <stdlib.h>
//Rivera Rosales Sergio Alexander

int addAtTail(int *arrayD, int *aux, int size, int dato);
int addAtFront(int *arrayD, int *aux, int size, int dato);
void size(int *arrayD, int size);
int removeAll(int *arrayD, int size);
int getAt(int *arrayD, int index, int size);

int main()
{
    int *arrayD, *aux, size=0;


}

int addAtTail(int *arrayD, int *aux, int size, int dato){
    int i;
    if(size == 0)
    {
        arrayD = (int*)malloc(sizeof(int)*(size+1));
        *(arrayD+(size-1)) = dato;
    }
    else
    {
        aux = (int*)malloc(sizeof(int)*size);
        for(i = 0; i<size; i++)
            *(aux+i)=*(arrayD+i);

        free(arrayD);

        arrayD = (int*)malloc(sizeof(int)*(size+1));

        for(i = 0; i<size; i++)
            *(arrayD+i)=*(aux+i);

        free(aux);

        *(arrayD+size)=dato;
    }

    return(size++);

}

int addAtFront(int *arrayD, int *aux, int size, int dato){
    int i;
    if(size == 0)
    {
        arrayD = (int*)malloc(sizeof(int)*(size+1));
        *(arrayD+(size-1)) = dato;
    }
    else
    {
        aux = (int*)malloc(sizeof(int)*size);
        for(i = 0; i<size; i++)
            *(aux+i)=*(arrayD+i);

        free(arrayD);

        arrayD = (int*)malloc(sizeof(int)*(size+1));

        *(arrayD)=dato;

        for(i = 1; i<size+1; i++)
            *(arrayD+i)=*(aux+(i-1));

        free(aux);

    }

    return(size++);
}

void size(int *arrayD, int size){
    int i;
    for(i = 0; i<size; i++)
        printf("Dato No.%d: %d ",i ,arrayD[i]);

    printf("Numero de datos incertados: %d",size);
}


int getAt(int *arrayD, int index, int size){
    int dato=0;
    if(index<size)
        dato=*(arrayD+index);
    else
        printf("Dato no valido");
    return(dato);
}

int removeAll(int *arrayD, int size){
    int i;
    for(i = 0; i<size; i++)
        *(arrayD+i)=0;

    free(arrayD);
    size=0;
    return(size);
}
