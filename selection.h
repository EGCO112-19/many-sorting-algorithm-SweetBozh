
#ifndef selection_h
#define selection_h


void selection(int a[], int N){
    int i;
    int j;
    int min,mi;// น้อยที่สุด mi= minimum index
    int temp;
    
   // min=a[0];
   for(i=0;i<N-1;i++){
    mi=i;  //min=a[mi];
    for(j=i+1;j<N;j++){
       if(a[mi]> a[j] ) {
         //min=a[j];
         mi=j;
       }
    }
   swap(&a[i],&a[mi]);
   display(a,N);
   }
   printf("    ===end in 1 round===\n");
}


#endif /* bubble_h */
