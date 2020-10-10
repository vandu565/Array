#include<climits>


void findLargest(int arr[][1000], int row, int col){


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */
bool isrow = true;
    int largestsum = INT_MIN;
    int num=0;
    for(int i=0;i<row;i++){
        int rowsum=0;
        for( int j=0;j<col;j++){
            rowsum +=arr[i][j];
        
        }
        if(rowsum>largestsum){
            largestsum=rowsum;
            num=i;
        }
    }

    for(int j=0;j<col;j++){
        int colsum=0;
        for(int i=0; i<row;i++){
            colsum +=arr[i][j];
        }
        if(colsum>largestsum){
            largestsum = colsum;
            num=j;
            isrow = false;
        
        }
    }
    if(isrow){
        cout<<"row"<<" "<< num<<" "<< largestsum<<endl;
    }else{
        cout<<"column"<<" "<<num<<" "<<largestsum<<endl;
    }
}

