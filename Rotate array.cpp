void Rotate(int arr[], int d, int size) {
   int i,j,arr2[1000];
   if(d<=size && d>=1)
   {
    for(i=0;i<d;i++)
    {
        j=i;
        arr2[j]=arr[i];
    }
    for(i=0;i<size-d;i++)
    {
        arr[i]=arr[i+d];
    }
    for(j=0;j<d;j++)
    {
        i=j;
        arr[size-d+i]=arr2[j];
    }
       
   }
   }
