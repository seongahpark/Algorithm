/*
    DAY11 - 1.isOdd
    
    문제

    수를 입력받아 홀수인지 여부를 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    boolean 타입을 리턴해야 합니다.

    주의 사항

    반복문(while)문을 사용해야 합니다.
    for문 사용은 금지됩니다.
    나눗셈(/), 나머지(%) 연산자 사용은 금지됩니다.
    0은 짝수로 간주합니다.
*/

function isOdd(num) {
    // TODO: 여기에 코드를 작성합니다.
    let n = 1, chk = 0;
    let res = false;
    if(num < 0) num *= -1;
  
    while(1){
      chk = 2*n - 1;
      if(num === chk){
        res = true;
        break;
      }
      if(num < chk) break;
      n++;
    }
  
    return res;
  }
  