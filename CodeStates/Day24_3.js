/*
    Day 24 - 3. mostFrequentCharacter
    
    문제

    문자열을 입력받아 가장 많이 반복되는 문자(letter)를 리턴해야 합니다.
    
    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.

    주의

    띄어쓰기는 제외합니다.
    가장 많이 반복되는 문자가 다수일 경우, 가장 먼저 해당 횟수에 도달한 문자를 리턴해야 합니다.
    빈 문자열을 입력받은 경우, 빈 문자열을 리턴해야 합니다.
*/

function mostFrequentCharacter(str) {
    // TODO: 여기에 코드를 작성합니다.
    str = str.replace(/\s/gi, "")
    if(!str) return str
    let max = 0, res = 0  
    let obj = new Object()
    for(let i in str){
      if(!obj[str[i]]) obj[str[i]] = 1
      else obj[str[i]]++
  
      if(max < obj[str[i]]){
        max = obj[str[i]]
        res = str[i]
      }
    }
    return res
  }
  