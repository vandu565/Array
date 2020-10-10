void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
int nextindex = 0;
    for(int i=0 ; input[i] !='\0';i++){
        if(input[i] != c){
            input[nextindex] = input[i];
            nextindex++;
            
        }
    }input[nextindex] = '\0';
}
