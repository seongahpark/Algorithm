/*
    Day 17 - 3. hasRepeatedCharacter
    
    문제

    문자열을 입력받아 해당 문자열에 중복된 문자(letter)가 존재하는지 여부를 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    boolean 타입을 리턴해야 합니다.

    주의

    이중 반복문(double for loop)을 사용해야 합니다.
    빈 문자열을 입력받은 경우에는 false을 리턴해야 합니다.  
*/

function hasRepeatedCharacter(str) {
    // TODO: 여기에 코드를 작성합니다.
    let arr = []
    for(let i=0; i<str.length; i++){
      for(let j=i+1; j<str.length; j++){
        if(str[i] === str[j]) return true;
      }
    }
    return false;
  }
  
  /*
  function hasRepeatedCharacter(str) {
    // TODO: 여기에 코드를 작성합니다.
    let arr = []
    for(let i=0; i<str.length; i++){
      if(arr[str.charCodeAt(i)] != undefined) return true  
      arr[str.charCodeAt(i)] = 1
    }
    return false;
  }
  */