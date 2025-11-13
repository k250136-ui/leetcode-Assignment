#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int nums[n];

    int evenCount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if(nums[i]%2 == 0){
            evenCount++;
        }
    }

    for (int i = 0; i < evenCount; i++) {
        nums[i] = 0;
        printf("%d, ", nums[i]);    
    }
    for (int i = evenCount; i < n; i++) {
        nums[i] = 1;
        printf("%d, ", nums[i]);     
    }
    return 0;
}