/*
    Day 19 - 2. getLongestWord
    
    문제

    문자열을 입력받아 문자열에서 가장 긴 단어를 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.

    주의

    단어는 공백 한 칸으로 구분합니다.
    가장 긴 단어가 2개 이상이면 첫번째로 등장하는 단어를 리턴해야 합니다.
*/

function getLongestWord(str) {
    // TODO: 여기에 코드를 작성합니다.
    let arr = str.split(' ')
    let max = arr[0].length
    let res = 0
    for(let i=1; i<arr.length; i++){
      if(arr[i].length > max){
        max = arr[i].length
        res = i
      }
    }
  
    return arr[res]
  }
  