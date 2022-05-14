/*
    Day 17 - 1. listPrimes
    
    문제

    2 이상의 자연수를 입력받아 2부터 해당 수까지의 소수(prime number)들을 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.
    2-3-5-7의 형식으로 리턴해야 합니다.

    주의

    이중 반복문(double for loop)을 사용해야 합니다.
*/

function listPrimes(num) {
    // TODO: 여기에 코드를 작성합니다.
    let arr = []
    let res = ''
    for(let i=2; i<=num; i++){
      let chk = true;
      for(let j=2; j<=i/2; j++){
        if(i % j === 0){
          chk = false;
          break;
        }
      }
      if(chk) {
        arr.push(i)
      }
    }
  
    for(let i=0; i<arr.length; i++){
      if(i === arr.length-1) res += arr[i]
      else res += arr[i] + '-'
    }
    return res
  }
  