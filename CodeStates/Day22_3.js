/*
    Day 22 - 3. removeNumberValues
    
    문제

    객체를 입력받아 number 타입의 값을 갖는 속성을 모두 제거해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    별도의 리턴문(return statement)을 작성하지 않습니다.
*/

function removeNumberValues(obj) {
    // TODO: 여기에 코드를 작성합니다.
    for(const [ key, value ] of Object.entries(obj)){
      if(typeof value === 'number') delete obj[key]
    }
  }
  
  