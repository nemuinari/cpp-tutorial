#include <stdio.h>

#define DATA_NUM 10  // データ数
int data[] = {1, 7, 11, 12, 33, 57, 63, 72, 89, 99};

int main(void) {
    int target = 57;
    for (int i = 0; i < DATA_NUM; i++) {
        if (data[i] == target) {
            if (data[i] == target) {
                printf("data[%d] に見つかりました\n", i);
                return 0;
            }
        }
    }
    printf("見つかりませんでした\n");
}