char highestOccurringChar(char input[]) {
    // Write your code here

  int freq[256]  ={ };
    int indices[256];
    for(int i =0;i<256;i++){
        indices[i] = -1;
        
    }
    for(int i=0;input[i] !='\0'; i++){
        int index = input[i];
        freq[index]++;
        if(indices[index] == -1){
            indices[index] = i;
        }
    }
    
    int maxindex =0;
    for(int i=0; i< 256 ; i++){
        if(freq[i]> freq[maxindex]) {
            maxindex =i;
        }
        else if (freq[i] == freq[maxindex]){
            if(indices[i] < indices[maxindex]){
                maxindex = i;
            }
        }
    }return(char)maxindex;    
}
