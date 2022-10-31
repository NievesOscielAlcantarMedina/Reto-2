#include <stdio.h>
int ordenamiento( int resul[],int TAM);
int main()
{
    int m;
    int n;
    printf("dame el tamaño M");
    scanf("%d",&m);
    while (m < 0 && m > 100){
        printf("el tamaño debe de ser mayor a 0 y menor a 100");
        scanf("%d",&m);
        
    }
    
     printf("dame el tamaño N");
    scanf("%d",&n);
     while (n < 0 && n > 100){
        printf("el tamaño debe de ser mayor a 0 y menor a 100");
        scanf("%d",&n);
     }
     
    
    
    
    
    int nums1[m] ;
    int nums2[n] ;
    int resul[n + m];
    
    for(int i = 0;i < m;i++){
        
        printf("dame valor %d del arreglo 1",i);
        scanf("%d",&nums1[i]);
        
        
    }
    for(int i = 0;i < n;i++){
        
        printf("dame valor %d del arreglo 2",i);
        scanf("%d",&nums2[i]);
        
        
    }
    int contaux = 0;
    for(int i = 0;i < m; i++){
        resul[i] = nums1[i];
        contaux++;
        
    }
     for(int i = 0;i < n; i++){
        resul[contaux] = nums2[i];
        contaux++;
        
    }
    
    for(int i=0; i<m+n; i++){
      printf("%d,",resul[i]);
  }
  
   ordenamiento(resul,n + m);
  
 printf("\n");
for(int i=0; i<m+n; i++){
      printf("%d,",resul[i]);
  }
   
    
    
    
}
 int ordenamiento( int resul[],int TAM){
for (int i=1; i<TAM; i++){
    
    for(int j=0 ; j<TAM - 1; j++){
        if (resul[j] > resul[j+1]){ 
            int temp = resul[j];
            resul[j] = resul[j+1];
            resul[j+1] = temp;
            
        }
        
        
    }
}
}



