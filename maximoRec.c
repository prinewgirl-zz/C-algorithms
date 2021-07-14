#include <stdio.h>

int maxRec(int *vec, int n ) {

    if (n == 0) {
        return vec[0];
    }
    else {
       int x = maximoRec(vec, n-1);
        if (x > vec[n-1]) {
            return x;
        }
        else {
            return vec[n-1];
        }
    }

}

int main() {

    int v[10] = {93,666,100, 81, 0,131,56,27,41,89};
    int result = maxRec(v,10);
    printf("result: %i \n", result);

    return 0;
}
int main() {

    int v[10] = {93,666,100, 81, 0,131,56,27,41,89};
    int result = insertion(v,10);
    printf("result: %i \n", result);

    return 0;
}