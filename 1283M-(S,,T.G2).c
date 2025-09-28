int isthe(int *a, int b, int thres, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (a[i] + b - 1) / b;  // for cealing logic
    }
    return sum <= thres;
}

int smallestDivisor(int* nums, int numsSize, int threshold) {
    int high = 0, low = 1; 
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > high) {
            high = nums[i];
        }
    }

    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isthe(nums, mid, threshold, numsSize)) {
            result = mid;        
            high = mid - 1;      
        } else {
            low = mid + 1;      
        }
    }

    return result;
}
