/*
    Day 20 - 3. createPhoneNumber
    
    문제

    0-9 사이의 정수를 요소로 갖는 배열을 입력받아 전화번호 형식의 문자열을 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.

    주의

    반복문(for, while) 사용은 금지됩니다.
    배열의 길이가 8인 경우, 앞에 [0, 1, 0]이 있다고 가정합니다.
*/

function createPhoneNumber(arr) {
    // TODO: 여기에 코드를 작성합니다.
    let res = ''
    if(arr.length === 8){
      res += '(010)'
      res += arr.slice(0,4).join('')
      res += '-'
      res += arr.slice(4, ).join('')
    }else{
      res += '('
      res += arr.slice(0,3).join('')
      res += ')'
      res += arr.slice(3,7).join('')
      res += '-'
      res += arr.slice(7, ).join('')
    }
    return res
  }
  