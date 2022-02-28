/*
    DAY15 - 2.replaceAll [Advanced]
    
    문제

    문자열과 두 개의 문자(from, to)를 입력받아, 문자열에 등장하는 특정 문자(from)가 다른 문자(to)로 바뀐 문자열을 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.

    주의 사항

    반복문(for)문을 사용해야 함

*/
function replaceAll(str, from, to) {
    // TODO: 여기에 코드를 작성합니다.
    let res='';
    for(let i=0; i<str.length; i++){
      if(str[i] === from) res += to;
      else res += str[i];
    }
    return res;
  }
  