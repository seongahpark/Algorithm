/*
    DAY07 - 3.computeDifference [Advanced]
    
    문제

    두 수를 입력받아 두 수의 차이를 나타내는 메세지를 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.
    
    주의 사항

    문자열 간 덧셈 연산은 금지됩니다.
    Template string(template literal)을 사용해 풀어야 합니다.
    점수 간 차이는 절대값(absolute)을 사용합니다.
*/

function computeDifference(num1, num2) {
    // TODO: 여기에 코드를 작성합니다.
    let res = Math.abs(num1 - num2); //abs로 절대값 사용
    let output = `${num1}, ${num2}의 차이는 ${res}입니다.`; //템플릿 스트링 사용
    return output;
  }
  