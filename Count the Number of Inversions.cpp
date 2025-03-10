long long mergeAndCount(vector<int>& arr, int l, int m, int r) {
    int leftSize = m - l + 1, rightSize = r - m;
    vector<int> left(leftSize), right(rightSize);

    for (int i = 0; i < leftSize; i++) left[i] = arr[l + i];
    for (int i = 0; i < rightSize; i++) right[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    long long inversions = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
            inversions += (leftSize - i); // Count inversions
        }
    }
    
    while (i < leftSize) arr[k++] = left[i++];
    while (j < rightSize) arr[k++] = right[j++];

    return inversions;
}

// Merge Sort function to count inversions
long long mergeSortAndCount(vector<int>& arr, int l, int r) {
    if (l >= r) return 0;
    
    int m = l + (r - l) / 2;
    long long leftInv = mergeSortAndCount(arr, l, m);
    long long rightInv = mergeSortAndCount(arr, m + 1, r);
    long long mergeInv = mergeAndCount(arr, l, m, r);
    
    return (leftInv + rightInv + mergeInv) % MOD;
}
