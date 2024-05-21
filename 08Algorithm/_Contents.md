### 복잡도를 나타내는 빅오(O) 표기법 에 대하여 
빅오 표기법은 알고리즘의 효율성을 분석하기 위한 표현법   
빅오는 공간복잡도/시간복잡도를 나타낸다.   
일반적으로 나오는 빅오는 O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!) < O(nⁿ) 순서로 작고 빠르다.   

> 1. 선형탐색
> 2. 이진탐색
> 3. 정렬의 종류
> 4. 버블정렬
> 5. 선택정렬
> 6. 삽입정렬
<br/>

- - - 
## 1. 선형탐색

선형탐색은 단순히 배열의 0번부터 배열의 끝까지 모두 탐색하는 방법이다.
```
int linear_search(int array[], int size, int key){
    int i = 0;                  // 인덱스
    
    for(i = 0; i < size; i++){  // 배열의 모든 요소 접근
        if(array[i] == key){    // 키값과 배열의 값이 같으면
            return i;           // 찾은 값이 있는 인덱스 리턴
        }
    }
    return -1;                  // 없는경우 -1 리턴(인덱스는 0<=i 기 때문에 음수가 나오지 않음)
}
```

<br/><br/><br/>

## 2. 이진탐색

이진탐색은 **정렬되어 있는 배열**에서 특정 키를 찾을때 사용하는 방법이다.
```
int binary_search(int array[], int key, int start, int end){  // (찾을 배열, 찾는 값, 시작, 끝)
    // 세개의 위치 인덱스 start, end, mid
    int mid;    // 중앙 인덱스

    while(start <= end){    // start와 end가 같거나 start가 클경우
        mid = (start + end) / 2;    // 중앙 인덱스를 start와 end의 중간으로 둔다.

        if(array[mid] == key){      // 중앙 값이 key 값과 같으면 중앙 인덱스 반환
            return mid;
        }
        else if(array[mid] > key){  // 중앙 값이 key 값보다 크면 mid의 앞을 끝으로 둔다.
            end = mid - 1;
        }
        else{                       // 중앙 값이 key 값보다 작으면 mid의 뒤를 시작으로 둔다.
            start = mid + 1;
        }
    }
    return -1;  // 못찾으면 리턴
}

```

<br/><br/><br/>

## 3. 탐색의 종류


버블 정렬(Bubble Sort)
선택 정렬(Selection Sort)
삽입 정렬(Insertion Sort)
퀵 정렬(Quick Sort)
힙 정렬(Heap Sort) 
병합 정렬(Merge Sort)
기수 정렬(Radix Sort)
계수 정렬(Counting Sort)

등등...

- - - 
## 4. 버블정렬

버블탐색은 인접한 두 개의 원소를 비교하여 조건에 맞게 자리를 교환하면서 올라온다.  
정렬하고자 하는 수가 거품처럼 조금씩 올라오는 모습을 보이기 때문에 버블탐색이라는 이름이 붙여졌다.   

버블정렬의 과정을 보여주는 GIF   
<img src="./_img/bubble_sort.gif" width="40%" height="40%" title="bubblesort" alt="bubblesort"></img>   

예제 코드   
```
void bubbleSort(int array[], int size){
    int i, j;

    for(i = 1; i < size; i++) {                 
        // 1번째 반복문으로 반복 횟수 설정 
        // (인접한 것을 비교하기 때문에 size-1 반복)
        for(j = 0; j < size - i; j++) {         // 2번째 반복문으로 정렬되지 못한 배열의 인접한 요소 탐색
            if(array[j] > array[j + 1]) {       // 앞의 수가 뒤의 수보다 크면 (오름차순으로 정렬하기 위해)
                swap(&array[j], &array[j + 1]); // 두 수를 교환한다.
            }
        }
    }
}
```


<br/><br/><br/>

- - - 
## 5. 선택정렬

선택정렬은 순차적으로 선택한 인덱스에 배열의 요소를 모두 비교하여 가장 작거나 큰 요소를 찾아 두 수를 교환하는 방법이다.   
매 반복에 가장 작거나 큰 요소가 순서대로 놓이게 되고 그 요소는 비교를 하지 않는다.   

선택정렬의 과정을 보여주는 GIF   
<img src="./_img/selection_sort.gif" width="40%" height="40%" title="bubblesort" alt="bubblesort"></img>   

예제코드
```
void selectionSort(int array[], int size){
    int i, j, least;

    for(i = 0; i < size - 1; i++) {             
        // 해당 i에 가장 작은 수가 위치하기 위해 사용할 반복문 
        // (앞의 요소들이 이미 정렬이 끝나서 마지막 수는 가장 큰 수가 되기 때문에 size-1 반복)
        least = i;                              // 가장 작은 수의 인덱스를 저장할 변수, 찾기전 i를 가장 작은 수로 지정

        for(j = i+1; j < size; j++){            // i의 뒤에서 끝까지 가장 작은 수를 찾는 반복
            if(array[least] > array[j]){        // array[j]보다 array[least]가 작으면
                least = j;                      // 가장 작은 수의 인덱스를 least에 저장
            }
        }

        if(least != i){                         // 처음에 고른 i가 가장 작으면 교환하지 않음
            swap(&array[least], &array[i]);     // i 위치와 least를 교환해서 앞에 작은 수가 오게한다.
        }
    }
}
```

<br/><br/><br/>

- - - 
## 6. 삽입정렬

키값이 되는 요소를 앞의 정렬된 요소들과 비교하여 알맞는 위치에 삽입하는 정렬방법   
삽입, 버블정렬과 섞인 느낌이지만 정렬되어 있는 배열의 끝까지 가지 않아도 되기 때문에 평균적으로 효율이 좀 더 좋다.   

삽입정렬의 과정을 보여주는 GIF   
<img src="./_img/insertion_sort.gif" width="40%" height="40%" title="bubblesort" alt="bubblesort"></img>   

예제 코드
```
void insertionSort(int array[], int size){
    int i, j, key;

    for(i = 1; i < size; i++){                              
        // 키 값이 될 요소를 고르고 반복
        // (맨 앞의 키값 0은 처음에 1과 비교하기 때문에 size -1 번반복)

        key = array[i];                                 // 위치를 옮길 키값을 key 변수에 대입

        for(j = i; j > 0 && array[j - 1] > key; j--){   
            // j는 키값의 위치에서 부터 1까지 실행(인접한 요소와 비교하기 때문에 0은 1과 비교),  
            // 비교할 이전의 요소보다 key값이 작으면 앞의 위치는 탐색할 필요 없기 때문에 반복문 종료 (j는 키값이 들어갈 위치) 

            array[j] = array[j - 1];                    // 앞의 요소를 뒤로 이동 
        }

        array[j] = key;                                 // 저장해놓은 키 값을 j에 삽입
    }
}
```
