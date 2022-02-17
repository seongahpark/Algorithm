/*
    DAY08 - 3.makeLastSeenMsg
    
    문제

    사용자의 이름과 미접속 시간(분)을 입력받아 조건별로 다른 메세지를 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.
    미접속 시간이 1시간 보다 적을 경우, 분 단위로 표기합니다.
    미접속 시간이 1시간 보다 크고 24시간 보다 적을 경우, 시간 단위로 내림처리하여 표기합니다.
    미접속 시간이 24시간 보다 클 경우, 일 단위로 내림처리하여 표기합니다.

    템플릿 스트링 구조 : `${변수}` 임을 조심!
*/

function makeLastSeenMsg(name, period) {
  // TODO: 여기에 코드를 작성합니다.
  let res;
  period = parseInt(period);
  if(period >= 60 && period < 1440){
    Math.floor(period /= 60);
    res = `${name}: ${period}시간 전에 접속함`;
  } 
  else if(period >= 1440){
    Math.floor(period /= 1440);
    res = `${name}: ${period}일 전에 접속함`;
  } else res = `${name}: ${period}분 전에 접속함`; 
  return res;
}