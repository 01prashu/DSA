#include <iostream>
using namespace std;
void print_matrix(int sparse_matrix[4][5] , int row , int coloum)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloum;j++)
        {
            cout<<sparse_matrix[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;  
}
void triplet_matrix(int sparse_matrix[4][5] , int m , int n)
{
    int size=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sparse_matrix[i][j]!=0)
            {
                size++;
            }
        }
    }
    
    int triplet_mat[2][size];
    int k=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sparse_matrix[i][j]!=0)
            {
                triplet_mat[0][k]=i;
                triplet_mat[1][k]=j;
                triplet_mat[2][k]=sparse_matrix[i][j];
                k++;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<size;j++)
        {
            cout<<triplet_mat[i][j]<<" ";
        }
        cout<<endl; 
    }
}
int main()
{
    int m=4;
    int n=5;
    int sparse_matrix[4][5]={{0,0,3,0,4},{0,0,5,0,7},{0,0,0,0,0},{2,0,6,0,0}};
    
    print_matrix(sparse_matrix , m, n);
    triplet_matrix(sparse_matrix , 4,5);
    
    return 0;

}