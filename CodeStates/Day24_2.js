/*
    Day 24 - 2. countAllCharacters
    
    문제

    문자열을 입력받아 문자열을 구성하는 각 문자(letter)를 키로 갖는 객체를 리턴해야 합니다.
    각 키의 값은 해당 문자가 문자열에서 등장하는 횟수를 의미하는 number 타입의 값이어야 합니다.
    
    ----------------------------------------------------------------------
    출력

    각 문자를 키로 갖는 객체를 리턴해야 합니다.

    주의

    빈 문자열을 입력받은 경우, 빈 객체를 리턴해야 합니다.
*/

function countAllCharacters(str) {
    // TODO: 여기에 코드를 작성합니다.
    let obj = new Object();
    for(let i in str){
      if(!obj[str[i]]) obj[str[i]] = 1
      else obj[str[i]]++
    }
    return obj
  }
  