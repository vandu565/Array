int FindUnique(int * arr, int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */ int i;
    int res;
    res=arr[0];
    
    for(i=1;i<size;i++)
    {
        res=res^arr[i];
    }
    return res;

    
}
