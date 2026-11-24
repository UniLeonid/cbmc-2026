#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sort(int *a, size_t n) {
	for (size_t i = 0; i < n; i++) {
		for (size_t j = i+1; j < n; j++) {
			if (a[i] > a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

bool is_sorted(int *a, size_t n) {
	for (size_t i = 0; i + 1 < n; i++) {
		if (a[i] > a[i + 1]) {
			return false;
		}
	}
	return true;
}

void check() {
	int a[LEN];
	sort(a, LEN);
	assert(is_sorted(a, LEN));
}
