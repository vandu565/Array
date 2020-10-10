int FindSortedArrayRotation(int *input, int size) {
    
     /*int arr[],int n vandu */
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
int left =0;
    int right = size -1;
    while(left<right){
        int mid= left + (right - left)/ 2;
        if(input[mid] > input[right])
            left = mid +1;
        else
            right = mid;
        
    }
    return left;
}
