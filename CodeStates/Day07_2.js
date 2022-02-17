/*
    DAY07 - 2.isOddLength
    
    문제

    차례대로 문자열 3개를 입력받아, 가장 짧은 문자열을 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    boolean 타입을 리턴해야 합니다.
    * 0은 짝수로 간주합니다.
*/

function isOddLength(word) {
    // TODO: 여기에 코드를 작성합니다.
    if(word.length % 2 === 0) return false;
    else return true;
  }
  