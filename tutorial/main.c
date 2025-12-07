#include <stdio.h>

#define DATA_NUM 10  // データ数
int data[] = {1, 7, 11, 12, 33, 57, 63, 72, 89, 99};

int main(void) {
    int target = 57;
    int left_index = 0;
    int right_index = DATA_NUM - 1;  // 9
    int middle_index = 0;

    while (left_index <= right_index) {
        middle_index = (left_index + right_index) / 2;

        printf("left:%d, middle:%d, right:%d\n", left_index, middle_index,
               right_index);

        if (data[middle_index] == target) {
            printf("値 %d は data[%d] に見つかりました\n", target,
                   middle_index);
            return 0;
        } else if (data[middle_index] < target) {
            left_index = middle_index + 1;
        } else {
            right_index = middle_index - 1;
        }
    }
    printf("値 %d は見つかりませんでした\n", target);
}