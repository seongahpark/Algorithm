/*
    Day 19 - 4. mergeArrays
    
    문제

    두 개의 배열을 입력받아 순서대로 합쳐진 배열을 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    두 배열이 합쳐진 새로운 배열을 리턴해야 합니다.
    [arr1[0], ..., arr1[n - 1], arr2[0], ..., arr2[m - 1]]
    arr1.length는 n
    arr2.length는 m

    주의

    반복문(for, while) 사용은 금지됩니다.
*/

function mergeArrays(arr1, arr2) {
    // TODO: 여기에 코드를 작성합니다.
    let res = arr1.concat(arr2)
    return res
  }
  