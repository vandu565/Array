int length(char str[]){
    int len=0;
    int i=0;
    while(str[i] !='\0'){
        i++;
    }
    return i;
}




bool checkPalindrome(char str[]){
int i=0,j=length(str) -1;
    while(i<j){
        if(str[i] !=str[j]){
            return false;
        
        }
        i++;
        j--;
    }
    return true;
}
