/*
    DAY05 - 2.checkAge
    
    문제

    이름과 나이를 입력받아 나이별로 다른 메시지를 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.
    이름이 Adrian이고, 나이가 21살 이상이면, Welcome, Adrian! 을 리턴해야 합니다
    이름이 John이고, 만일 21살보다 적으면, Go home, John!을 리턴해야 합니다.
*/

function checkAge(name, age) {
    // TODO: 여기에 코드를 작성합니다.
    if(age >= 21) return "Welcome, " + name + '!';
    else return "Go home, " + name + '!';
  }
  