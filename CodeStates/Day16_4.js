/*
    DAY16 - 4.isPrime [Advanced]
    
    문제

    1 이상의 자연수를 입력받아 소수(prime number)인지 여부를 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    boolean 타입을 리턴해야 합니다.
*/

function isPrime(num) {
    // TODO: 여기에 코드를 작성합니다.
    if(num === 1) return false;
    for(let i=2; i*i<=num; i++){ //num의 제곱근까지 도달하면 그 이후부턴 계산할 필요가 없다
      if(num % i === 0) return false;
    }
    return true;
  }
  
