#include<iostream>
#include<vector>

using namespace std;
class Solution {
    int n=3,m=3;
    int  matrix[3][3];
public:
    
    void setMatrix(){
       
        cout<<"Reading Matrix....";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<"Enter m "<<i<<" "<<j<<" :";
                cin>>matrix[i][j];
            }
        }
    }
    void setZeroes() {

        int row[3]={0};
        int col[3]={0};
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
               if(matrix[i][j]==0){
                   col[j]=1;
                   //matrix[i][0]=0;
                   row[i]=1;
                  // matrix[0][j]=0;
               }
               // cout<<matrix[i][j]<<"  ";
            }
            //cout<<endl;
        }

                                                            // for(int i=1;i<n;i++){
                                                            //     for(int j=1;j<m;j++){
                                                            //        if(matrix[i][0]==0 || matrix[0][j]==0){
                                                            //            matrix[i][j]=0;
                                                            //        }
                                                            //        // cout<<matrix[i][j]<<"  ";
                                                            //     }
                                                            //     //cout<<endl;
                                                            // }

         for(int j=0;j<m;j++){
               cout<<"Row:";
                cout<<row[j]<<"  ";
            }
             for(int j=0;j<m;j++){
               cout<<"\nCol:";
                cout<<col[j]<<"  ";
            }

        for(int i=0;i<n;i++){
            
               if(row[i]==1 || col[i]==1){
                   setCol(i);
                   setRow(i);
                   
               }
               
        }

        cout<<"Display Matrix ......\n\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }

           
    }

                    void setCol(int j){

                        for(int p=0;p<n;p++){
                            matrix[p][j]=0;
                            }
                    }
                      void setRow(int i){
                        for(int k=0;k<m;k++){
                                matrix[i][k]=0;
                         }
                    }
};
int main(){
    Solution obj;
    obj.setMatrix();
    obj.setZeroes();
    
}