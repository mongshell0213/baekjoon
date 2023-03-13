void quicksort(int arr[], int l, int r)
{
	int left = l;
	int right = r;
	int temp;
	int pivot = arr[(l + r) / 2];
	do {
		while (arr[left] < pivot)
			left++;
		while (arr[right] > pivot)
			right--;
		if (left <= right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	} while (left <= right);
	if (l < right)
		quicksort(arr, l, right);
	if (left < r)
		quicksort(arr, left, r);
}

int bsearch(int arr[],int target,int s, int f) {
	int mid = (s + f) / 2;
	if (s > f)
		return -1;
	if (arr[mid] == target)
		return mid;
	else if (arr[mid] > target)
		return bsearch(arr, target, s, mid-1);
	else if (arr[mid]<target)
		return bsearch(arr, target, mid+1, f);
}

int main(void) {
	int n,m;
	int target;
	int idx;
	int* arr;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	quicksort(arr, 0, n-1);
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &target);
		idx = bsearch(arr, target, 0, n - 1);
		if ( idx != -1)
			printf("1\n");
		else
			printf("0\n");
	}
}