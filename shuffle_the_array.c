#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int nums[2*n];
    for (int i = 0; i < 2*n; i++) {
        scanf("%d", &nums[i]);
    }

    int j = 0;
    int shuffle[2*n];

    for (int i = 0; i < n; i++) {
        shuffle[j++] = nums[i];    
        shuffle[j++] = nums[i + n];
    }
    for (int i = 0; i < 2*n; i++) {
        printf("%d, ", shuffle[i]); 
    }
    return 0;
}