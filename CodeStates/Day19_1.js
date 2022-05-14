/*
    Day 19 - 1. getLargestElement
    
    문제

    배열을 입력받아 가장 큰 요소를 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    number 타입을 리턴해야 합니다.
*/

function getLargestElement(arr) {
    // TODO: 여기에 코드를 작성합니다.
    arr.sort(function(a, b){
      return b - a
    })
    return arr[0]
  }
  