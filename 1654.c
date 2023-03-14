#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void quicksort(long long arr[], long long left, long long right) {
	long long pivot = arr[(left + right) / 2];
	long long l = left;
	long long r = right;
	long long temp;
	do {
		while (arr[l] < pivot)
			l++;
		while (arr[r] > pivot)
			r--;
		if (l <= r) {
			temp = arr[l];
			arr[l] = arr[r];
			arr[r] = temp;
			l++;
			r--;
		}
	} while (l <= r);
	if (left < r)
		quicksort(arr, left, r);
	if (right > l)
		quicksort(arr, l, right);
}
void number(long long arr[], long long left, long long right, long long result) {
	long long l = left;
	long long r = arr[right];
	long long mid;
	long long sum;
	long long ans = 0;
	while (l <= r) {
		sum = 0;
		mid = (l + r) / 2;
		for (long long i = 0; i < right + 1; i++) {
			sum += arr[i] / mid;
		}
		if (sum < result)
			r = mid - 1;
		else if (sum >= result) {
			l = mid + 1;
			if (ans < mid)
				ans = mid;
		}
	}
	printf("%d", ans);
}
int main(void) {
	long long k, sum, result;
	long long* arr;
	scanf("%lld %lld", &k, &result);

	arr = (long long*)malloc(sizeof(long long) * k);
	for (long long i = 0; i < k; i++) {
		scanf("%lld", &arr[i]);
	}
	quicksort(arr, 0, k - 1);
	number(arr, 1, k - 1, result);
	return 0;
}