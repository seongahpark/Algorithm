/*
    Day 20 - 4. fibonacci
    
    문제

    수(num)를 입력받아 num번째까지 총 num + 1개의 피보나치 수열을 리턴해야 합니다.

    0번째 피보나치 수는 0이고, 1번째 피보나치 수는 1입니다. 그 다음 2번째 피보나치 수부터는 바로 직전의 두 피보나치 수의 합으로 정의합니다.
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
    
    ----------------------------------------------------------------------
    출력

    배열을 리턴해야 합니다.

    주의

    반복문(for)문을 사용해야 합니다.
    피보나치 수열은 0번부터 시작합니다.
*/

function fibonacci(num) {
    // TODO: 여기에 코드를 작성합니다.
    if(num === 0) return [0]
    let res = [0, 1]
  
    for(let i=2; i<=num; i++){
      res.push(res[i-2] + res[i-1])
    }
    return res
  }
  