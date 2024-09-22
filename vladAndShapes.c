#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int grid[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            scanf("%d",&grid[i][j]);
        }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if(grid[i][j]==1 && grid[i][j+1]==1 && grid[i+1][j]==1 && grid[i+1][j+1]==1)
            printf("SQUARE\n");
            else printf("TRIANGLE\n");
        }
        }

    }
}