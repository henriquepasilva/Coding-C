#include <stdio.h>

 int search_array(int val, int vec[], int n);
 int search_narray(int val, int vec[], int n);

 int main()
 {
    int i, n, val, x;

    printf("Numero de elementos: ");
    scanf("%d", &n);
    int vec[n];
    for(i=0; i < n; i++)
    {
         printf("\nInserir %d valor: ", i+1);
         scanf("%d", &vec[i]);
    }
    
    printf("\nInserir valor a pesquisar: ");
    scanf("%d", &val);

    x = search_array(val, vec, n);
    if(x == 1)
        printf("\n0 elemento %d existe no vetor.", val);
    else
        printf("\n0 elemento %d ocorre %d vezes no vetor.", val);


    x = search_narray(val, vec, n);
    printf("\n0 elemento %d ocorre %d vezes no vetor.\n", val, x);

    return 0;
 }

    int search_array(int val, int vec[], int n)
    {
        int i;
        for(i=0; i < n; i++)
        {
            if(vec[i] == val)
                return 1;
        }
        return 0;
    }

    int search_narray(int val, int vec[], int n)
    {
        int i, count = 0;
        for(i=0; i < n; i++)
        {
            if(vec[i] == val)
                count++; 
        }
        return count; 
    }