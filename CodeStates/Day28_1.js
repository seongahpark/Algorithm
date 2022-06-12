/*
    Day 28 - 1. computeSumOfAllElements
    
    문제

    number 타입을 요소로 갖는 배열을 입력받아 배열의 모든 요소의 합을 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    number 타입을 리턴해야 합니다.

    주의

    반복문(for, while) 사용은 금지됩니다.
    반드시 arr.reduce를 이용해서 풀어야 합니다.
*/

function computeSumOfAllElements(arr) {
    // TODO: 여기에 코드를 작성합니다.
    if(arr.length === 0) return 0
    return arr.reduce((pre, cur) => pre + cur);
  }
  