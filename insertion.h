#ifndef insertion_h
#define insertion_h

void insertion(int a[], int N){
    int i;
    int j;
    int value;

for(i=1;i<N;i++){
   value= a[i]; //Actually this value will come from online user, but teacher just use a[i] to show us example.
   printf("value = %d\n",value);
   for(j=i-1;j>=0 && a[j]>=value;j--)
    {
     a[j+1]=a[j]; //If value not yet the first item and  still more than before --> old num Slide right 
     display(a,N);
   }   
  a[j+1]=value; //Loop end Assign value to right of the first one 
  
  display(a,N);
  printf("    ===end of round %d===\n\n",i);
}

}

#endif /* bubble_h */
