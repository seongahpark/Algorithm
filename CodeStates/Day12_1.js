/*
    DAY12 - 1.factorial
    
    문제

    수를 입력받아 n-factorial(n!) 값을 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    number 타입을 리턴해야 합니다.
    1 * 2 * ... * num

    주의 사항

    반복문(for)문을 사용해야 합니다.
    factorial(0)은 1로 정의됩니다.
    음수 입력은 들어오지 않습니다.
*/

function factorial(num) {
    // TODO: 여기에 코드를 작성합니다.
    let res = 1;
    for(let i= num; i>0; i--){
      res *= i;
    }
    return res;
}
  