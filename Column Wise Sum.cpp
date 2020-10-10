#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int numrows;
    int numcols;
    cin>>numrows>>numcols;
    int input[numrows][numcols];
    for(int i=0;i<numrows;i++){
        for(int j=0;j< numcols;j++){
            cin>>input[i][j];
        }
    }
    for(int j=0;j<numcols;j++){
        int sum=0;
        for(int i=0; i<numrows;i++){
            sum+=input[i][j];
            
        }
        cout<<sum<<" ";
    }
}
