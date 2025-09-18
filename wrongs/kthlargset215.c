int findKthLargest(int* nums, int numsSize, int k) {
 int low=0,high=numsSize-1;
while(low<=high){          

        int pivot = nums[low];
        int p = low;

    for (int i = low+1; i <= high; i++) {
        if (nums[i] <= pivot) {
            p++;
            int temp = nums[p];
            nums[p] = nums[i];
            nums[i] = temp;
        }
    }
   int temp = nums[p];
    nums[p] = nums[low];
    nums[low] = temp;

        if (p ==numsSize-k || (low == high && nums[low] == pivot)) {
            return nums[p];
        }
    if(p>numsSize-k){high=p-1;} //deep
    if(p<numsSize-k){low=p+1;}
 }return 0;
}

