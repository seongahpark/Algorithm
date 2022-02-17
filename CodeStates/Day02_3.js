/*
    DAY02 - 3.callFunction

    문제

    문자열을 인자로 받아서 느낌표를 붙여서 리턴해주는 함수
    returnWordWithJoy가 있습니다.
    함수 returnWordWithJoy의 첫 번째 인자로 문자열
    "I love DevOps"를 넣어서 호출하고, 그 결과값을 변수 word에 할당하세요.
*/

// 문자열을 인자로 받아서 느낌표를 붙여서 리턴 해주는 함수 returnWordWithJoy가 있습니다.
// 함수 returnWordWithJoy의 첫 번째 인자로 문자열 "I love DevOps"를 넣어서 호출하고, 그 결과값을 변수 word에 할당하세요.
let word; // TODO
word = returnWordWithJoy("I love DevOps");

// 아래 코드는 변경하지 마세요
function returnWordWithJoy(word) {
  if (typeof word !== 'string') {
    return 'wrong type';
  } else {
    return word + '!';
  }
}
