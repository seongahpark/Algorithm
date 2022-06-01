/*
    Day 23 - 2. select
    
    문제

    배열과 객체를 입력받아 배열의 각 요소들을 객체의 키로 했을 때 그 값을 추출하여 만든 새로운 객체를 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    객체를 리턴해야 합니다.

    주의

    입력받은 객체에 존재하지 않는 키는 무시합니다.
    입력받은 객체를 수정하지 않아야 합니다.
*/

function select(arr, obj) {
    // TODO: 여기에 코드를 작성합니다.
    let res = new Object();
    for(let keys of Object.keys(obj)){
      for(let j = 0; j < arr.length; j++){
        if(keys === arr[j]) res[keys] = obj[keys]
      }
    }
    return res
  }
  