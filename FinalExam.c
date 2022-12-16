/**
 * @file FinalExam.c
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-12-07
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief Task 1
 Because arrays are created by consecutive memory cells in memory. So, knowing the address of the first cell 
 of the array, we will know the address of the next cells in that array. Also, for the C programming language, arrays
 when declared will carry the address of the first memory cell of that array. So we have the formula for the address 
 of the i-th element of the array is: array_name + i
 */ 

/**
 * @brief Task 2
 Khi thêm 1 phần tử vào vị trí thứ i của mảng có n phần tử, chúng ta cần:
    +) Dịch chuyển n - i + 1 phần tử. Mất n - i + 1 bước. 
    +) Chèn phần tử mới vào vị trí i. Mất 1 bước.
 Vậy cần n - i + 2 bước để chèn 1 phần từ vào vị trí i trong mảng có n phần từ.
 Vị trí chèn tốn số bước ít nhất: vị trí i = n. Khi đó, số bước là n - n + 2 = 2 bước. 
 */

/**
 * @brief Task 3 
 Ví dụ:
 Mảng:    1 5 3 4 7 2
 Tập hợp: 1 2 4 7 8 9
 Phần tử chèn: 6
 Thực thi:
    +) Đối với mảng: Chèn vào cuối mảng, mất 1 bước.
    +) Đối với tập hợp: 
        1) Thực hiện so sánh và dời những phần tử có giá trị lớn hơn 6 qua bên phải 1 vị trí. 
            Cụ thể: Số bước so sánh: 3 bước
                    Số bước dịch chuyển: 3 bước
        2) Chèn vào vị trí vừa đươc dời cuối cùng: 1 bước
        Tổng: Mất 7 bước
Kết luận: Ví dụ thể hiện việc chèn phần tử vào mảng tốn ít bước hơn chèn vào tập hợp (cài đặt bằng mảng) 
 */

/**
 * @brief Task 4
 Array: 0 1 2 3 4 5 6 7 8 9
 Target: 6
 Binary search:
    Step 1: left = 0, right = 9, mid = (left + right) / 2 = 4
        Array[mid] 4 < target, => left = mid + 1 = 5
    Step 2: left = 5, right = 9, mid = (left + right) / 2 = 7
        Array[mid] = 7 > target, => right = mid - 1 = 6
    Step 3: left = 5, right = 6, mid = (left + right) / 2 = 5
        Array[mid] = 5 < target, => left = mid + 1 = 6 
    Step 4: left = 6, right = 6, mid = (left + right) / 2 = 6
        Array[mid] = 6 = target => End;
    Result: Index of target in array is 6.
 */

/**
 * @brief 
 
*/

/**
 * @brief Task 7
 */

/*
Array number: 4 2 5 1 3
Assuming expectation is an ascending array.
+) Selection sort
    4 2 5 1 3 

    Find min number of array in range [0,4], replace it to position 0. 
    compare: 4
    swap: 1
    => 1 2 5 4 3 

    Find min number of array in range [1,4], replace it to position 1.
    compare: 3 
    swap: 0
    => 1 2 5 4 3 
    
    Find min number of array in range [2,4], replace it to position 2.
    compare: 2
    swap: 1
    => 1 2 3 4 5 
    
    Find min number of array in range [3,4], replace it to position 3.
    compare: 1
    swap: 0
    => Done

    Total compare: 10
    Total swap: 2

+) Insertion sort
    4 2 5 1 3



*/



/**
 * @brief Task 8
 */

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct Queue
{
    Node *head;
    Node *tail;
} Queue;

Node *makeNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Queue *makeQueue()
{
    Queue *newQueue = (Queue *)malloc(sizeof(Queue));
    newQueue->head = newQueue->tail = NULL;
    return newQueue;
}

void put(Queue *q, int value)
{
    Node *newNode = makeNode(value);
    if (q->head == NULL && q->tail == NULL)
    {
        q->head = q->tail = newNode;
    }
    else
    {
        q->tail->next = newNode;
        q->tail = q->tail->next;
    }
}

int get(Queue *q)
{
    if (q->head == NULL)
        return -1;
    int data;
    Node *temp = q->head;
    data = temp->data;
    q->head = q->head->next;
    if (q->head == NULL)
        q->tail = NULL;
    free(temp);
    return data;
}

int main()
{
    Queue *q = makeQueue();
    put(q, 18);
    put(q, 29);
    printf("Get: %d\n", get(q));
    return 0;
}
*/
