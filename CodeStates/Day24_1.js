/*
    Day 24 - 1. getValueOfNthElement
    
    문제

    배열과 수를 입력받아 수가 가리키는 인덱스에 해당하는 객체의 'name' 속성값을 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    해당되는 객체의 'name' 속성값을 리턴해야 합니다.

    주의

    빈 배열을 입력받은 경우, 'no name'을 리턴해야 합니다.
    배열의 범위를 벗어나는 인덱스를 입력받은 경우, 마지막 객체의 'name' 속성값을 리턴해야 합니다.
*/

function getValueOfNthElement(arr, num) {
    // TODO: 여기에 코드를 작성합니다.
    if(arr.length === 0) return 'no name'
    else if(num >= arr.length) return arr[arr.length-1].name
    return arr[num].name    
  }
  