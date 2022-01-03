#include <iostream>
using namespace std;

int main()
{
    int height=7;
    int size=4;
    int ch1=0;
    int ch2=size/2;
    
    for(int i=0;i<height;i++){
        
        if(i<=height/2){
            char chr = 'A'+i;
            for(int j=0;j<size;j++){
                
                if(j>=ch1)
                    cout<<chr++<<" ";
                else
                    cout<<" "<<" ";
            }
            
            ch1++;
            cout<<endl;
            
        }
        
        else
        {
           for(int j=0;j<size;j++){
                char chr='A'+j; 
                if(j>=ch2)
                    cout<<chr++<<" ";
                else
                    cout<<" "<<" ";
            }
            
            ch2--;
            cout<<endl;
        }
    }
    

    return 0;
}
