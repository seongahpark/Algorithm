/*
    Day 25 - 4. compose2
    
    문제

    두 개의 함수를 입력받아 두 함수가 결합된 새로운 함수를 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    함수를 리턴해야 합니다.
    리턴되는 함수는 정수를 입력받아 func2, func1의 순으로 적용합니다.

    주의

    입력받은 함수들이 어떤 일을 하는지는 중요하지 않습니다.
*/

function compose2(func1, func2) {
    // TODO: 여기에 코드를 작성합니다.
    const compose = (func1, func2) => val => func1(func2(val))
    const compute = compose(func1, func2)
    return compute
  }
  