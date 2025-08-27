class Solution {
public:
    bool check(int i,int j,int r,int c){
        if(i<0||j<0||i>=r||j>=c){
            return false;
        }
        return true;
    }
    int maxi=0;
    int r;
    int c;
    void f(int i,int j,vector<vector<int>>&mat,int k,int cnt,int p){
        maxi=max(maxi,cnt);
        if(mat[i][j]==1){
            if(k==0){
                if(check(i-1,j-1,r,c)&&mat[i-1][j-1]==2){
                    f(i-1,j-1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i-1,j+1,r,c)&&mat[i-1][j+1]==2){
                        f(i-1,j+1,mat,1,cnt+1,1);
                    }
                }
            }
            else if(k==1){
                if(check(i-1,j+1,r,c)&&mat[i-1][j+1]==2){
                    f(i-1,j+1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i+1,j+1,r,c)&&mat[i+1][j+1]==2){
                        f(i+1,j+1,mat,2,cnt+1,1);
                    }
                }
            }
            else if(k==2){
                if(check(i+1,j+1,r,c)&&mat[i+1][j+1]==2){
                    f(i+1,j+1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i+1,j-1,r,c)&&mat[i+1][j-1]==2){
                        f(i+1,j-1,mat,3,cnt+1,1);
                    }
                }
            }
            else if(k==3){
                if(check(i+1,j-1,r,c)&&mat[i+1][j-1]==2){
                    f(i+1,j-1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i-1,j-1,r,c)&&mat[i-1][j-1]==2){
                        f(i-1,j-1,mat,0,cnt+1,1);
                    }
                }
            }
        }
        else if(mat[i][j]==2){
            if(k==0){
                if(check(i-1,j-1,r,c)&&mat[i-1][j-1]==0){
                    f(i-1,j-1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i-1,j+1,r,c)&&mat[i-1][j+1]==0){
                        f(i-1,j+1,mat,1,cnt+1,1);
                    }
                }
            }
            else if(k==1){
                if(check(i-1,j+1,r,c)&&mat[i-1][j+1]==0){
                    f(i-1,j+1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i+1,j+1,r,c)&&mat[i+1][j+1]==0){
                        f(i+1,j+1,mat,2,cnt+1,1);
                    }
                }
            }
            else if(k==2){
                if(check(i+1,j+1,r,c)&&mat[i+1][j+1]==0){
                    f(i+1,j+1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i+1,j-1,r,c)&&mat[i+1][j-1]==0){
                        f(i+1,j-1,mat,3,cnt+1,1);
                    }
                }
            }
            else if(k==3){
                if(check(i+1,j-1,r,c)&&mat[i+1][j-1]==0){
                    f(i+1,j-1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i-1,j-1,r,c)&&mat[i-1][j-1]==0){
                        f(i-1,j-1,mat,0,cnt+1,1);
                    }
                }
            }
        }
        else{
            if(k==0){
                if(check(i-1,j-1,r,c)&&mat[i-1][j-1]==2){
                    f(i-1,j-1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i-1,j+1,r,c)&&mat[i-1][j+1]==2){
                        f(i-1,j+1,mat,1,cnt+1,1);
                    }
                }
            }
            else if(k==1){
                if(check(i-1,j+1,r,c)&&mat[i-1][j+1]==2){
                    f(i-1,j+1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i+1,j+1,r,c)&&mat[i+1][j+1]==2){
                        f(i+1,j+1,mat,2,cnt+1,1);
                    }
                }
            }
            else if(k==2){
                if(check(i+1,j+1,r,c)&&mat[i+1][j+1]==2){
                    f(i+1,j+1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i+1,j-1,r,c)&&mat[i+1][j-1]==2){
                        f(i+1,j-1,mat,3,cnt+1,1);
                    }
                }
            }
            else if(k==3){
                if(check(i+1,j-1,r,c)&&mat[i+1][j-1]==2){
                    f(i+1,j-1,mat,k,cnt+1,p);
                }
                if(p==0){
                    if(check(i-1,j-1,r,c)&&mat[i-1][j-1]==2){
                        f(i-1,j-1,mat,0,cnt+1,1);
                    }
                }
            }
        }
    }
    int lenOfVDiagonal(vector<vector<int>>& mat) {
        int r1=mat.size();
        int c1=mat[0].size();
        r=r1;
        c=c1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    f(i,j,mat,0,1,0);
                    f(i,j,mat,1,1,0);
                    f(i,j,mat,2,1,0);
                    f(i,j,mat,3,1,0);
                }
            }
        }
        return maxi;
    }
};