/*
    DAY13 - 2.makeMultiplesOfDigit2 [Advanced]
    
    문제

    두 개의 수를 입력받아 두 수를 포함해 두 수 사이의 수 중 2의 배수의 개수를 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    number 타입을 리턴해야 합니다.

    주의 사항

    반복문(for)문을 사용해야 합니다.
    num1이 num2보다 작지 않을 수도 있습니다.
    0은 2의 배수가 아니라고 가정합니다.
*/

function makeMultiplesOfDigit2(num1, num2) {
    // TODO: 여기에 코드를 작성합니다.
    let res=0;
    if(num1 > num2){
      [num1, num2] = [num2, num1]; // 구조 분해 할당으로 swap
    }
    
    for(let i=num1; i<=num2; i++){
      if(i % 2 === 0 && i !== 0) res++;
    }
    return res;
  }
  