void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0,j=0,k=0;int arr[m+n];
    while(i<m && j<n){
        if(nums1[i]>nums2[j]){arr[k]=nums2[j];j++;k++;}
        else{arr[k]=nums1[i];k++;i++;}
    }
        if(i<m){for(int a=i;a<m;a++){arr[k]=nums1[a];k++;}}
        if(j<n){for(int a=j;a<n;a++){arr[k]=nums2[a];k++;}}
    for(int j=0;j<m+n;j++){nums1[j]=arr[j];}
}
