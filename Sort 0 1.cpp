void SortZeroesAndOne(int*input, int size){
   
int ptr=0;
    for(int i=0;i<size;i++)
    {
        if(input[i]==0)
        {
            int temp=input[ptr];
            input[ptr]=input[i];
            input[i]=temp;
            ptr++;
        }
    }
}
