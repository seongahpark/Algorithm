/*
    DAY10 - 1.sumTo
    
    문제

    수를 입력받아 0부터 해당 수까지의 합을 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    number 타입을 리턴해야 합니다.
    반복문(for)문을 사용해야 합니다.
*/

function sumTo(num) {
    // TODO: 여기에 코드를 작성합니다.
    let res = 0;
    for(let i = 0; i<=num; i++){
      res += i;
    }
    return res;
  }