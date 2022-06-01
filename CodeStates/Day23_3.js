/*
    Day 23 - 3. getLastElementOfProperty
    
    문제

    객체와 키를 입력받아 키에 해당하는 값이 배열인 경우, 마지막 요소를 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    배열의 요소를 리턴해야 합니다.

    주의

    주어진 키에 해당하는 값이 배열이고, 빈 배열이 아닌 경우에만 배열의 요소를 리턴해야 합니다.
    그 외의 경우, undefined를 리턴해야 합니다.
*/

function getLastElementOfProperty(obj, property) {
    // TODO: 여기에 코드를 작성합니다.
    if(Array.isArray(obj[property])) return obj[property][obj[property].length - 1]
    return undefined
  }
  