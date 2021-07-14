#include <stdio.h>

void  insertion(int *vec, int n) {
    int key; 
    int i, j, x;
    for (j= 0; j++;j < n){
        key = vec[j];
        i = j - 1;
        while (i >=0 && vec[i] > key ) {
            vec[i+1] = vec[i];
            i = i-1;
        }
    vec[i+1] = key;
    }
}

int main() {
    int j,n;
    n = 10;
    int v[10] = {93,666,100, 81, 0,131,56,27,41,89};
    insertion(v,n);
    for(j=0; j++; j<n){
    printf("result: %i \n", v[j]);
    }

    return 0;
}