#include <stdio.h>

int binsearch(int, int[], int);

int main(void){
    int values[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    printf("%i\n", binsearch(11, values, 16));
}


int binsearch(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n-1; // last index

    while(low <= high){ 

        mid = (low+high) / 2;

        if(v[mid] == x){
            return mid;
        }
        else if(x > v[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

    }

    return -1;

}