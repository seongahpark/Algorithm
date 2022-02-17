/*
    DAY08 - 1.areValidCredentials
    
    문제

    이름과 비밀번호를 입력받아 이름이 3글자보다 크고 
    비밀번호가 8글자 이상이면 true를 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    boolean 타입을 리턴해야 합니다.
*/

function areValidCredentials(name, password) {
    // TODO: 여기에 코드를 작성합니다.
    if(name.length > 3 && password.length >= 8) return true;
    else return false;
  }
  