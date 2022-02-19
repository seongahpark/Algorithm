/*
    DAY09 - 1.findTheBug
    
    문제

    문자열을 입력받아 버그('#')의 인덱스를 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    반복문(for)문을 사용해야 합니다.
    '#' 기호가 없는 경우 undefined를 리턴해야 합니다.
*/

function findTheBug(word) {
    // TODO: 여기에 코드를 작성합니다.
    let res = -1;
    for(let i=0; i<word.length; i++){
      if(word[i] === '#'){
        res = i;
        break;
      }
    }
    if(res === -1) return undefined;
    else return res;
  }
  