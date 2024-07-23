#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int p,int q,int r,int s){
    if(p>q){
        if(p>r){
            if(p>s)
            return p;
            else {
            return s;
            }
        }
    }
    else{if(q>r){
        if(q>s)
        return q;
        else return s;
    }
       else if(r>s)
      { return r;}
       else  
       return s;
     }}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

/* error
Solution.c: In function ‘max_of_four’:
Solution.c:24:6: error: control reaches end of non-void function [-Werror=return-type]
      }}
      ^
cc1: some warnings being treated as errors*/


/*better approach */
#include <stdio.h>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.

int max_of_four(int p, int q, int r, int s) {
    int max = p; // Assume p is the max

    if (q > max) {
        max = q; // Update max if q is greater
    }
    if (r > max) {
        max = r; // Update max if r is greater
    }
    if (s > max) {
        max = s; // Update max if s is greater
    }

    return max; // Return the maximum value
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}*/