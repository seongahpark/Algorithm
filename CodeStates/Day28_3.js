/*
    Day 28 - 3. computeAverageOfNumbers
    
    문제

    number 타입을 요소로 갖는 배열을 입력받아 배열의 모든 요소의 평균을 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    number 타입을 리턴해야 합니다.

    주의

    반복문(for, while) 사용은 금지됩니다.
    반드시 arr.reduce를 이용해서 풀어야 합니다.
    빈 배열을 입력받은 경우, 0을 리턴해야 합니다.
*/

function computeAverageOfNumbers(arr) {
    // TODO: 여기에 코드를 작성합니다.
    if(arr.length === 0) return 0;
    let res = arr.reduce((pre, cur) => pre + cur);
    return res/arr.length;
  }
  
  