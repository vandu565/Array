#include<climits>
void pairSum(int input[], int size, int x) {
   
  int i,j;

    for(i=0;i<size;i++)
    {
        int c=input[i];
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(input[i]+input[j]==x)
                {
                    int a=input[i];
                    int b =input[j];
                    if(input[i]>input[j])
                    {
                        cout<<b<<" "<<a<<endl;
                        //break;
                    }
                    else if(b>=a)
                    {
                        cout<<a<<" "<<b<<endl;
                        //break;
                    }
                }
            }
        }
     input[i]=INT_MIN;   
    }  
    
    
    }
