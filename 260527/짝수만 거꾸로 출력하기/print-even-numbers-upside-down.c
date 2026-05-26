#include <stdio.h>

int main() {
    int n;
    
    // 정수의 개수 N 입력
    scanf("%d", &n);
    
    // N개의 정수를 저장할 배열 선언
    int arr[n];
    
    // 정수 입력받아 배열에 저장
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 배열의 끝(n-1)부터 시작(0)까지 역순으로 탐색
    for (int i = n - 1; i >= 0; i--) {
        // 2로 나눈 나머지가 0이면 짝수
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}