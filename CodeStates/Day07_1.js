/*
    DAY07 - 1.findShortestOfThreeWords
    
    문제

    차례대로 문자열 3개를 입력받아, 가장 짧은 문자열을 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.
    
    주의 사항

    동일한 길이의 문자열 중에서는 처음 입력받은 문자열을 리턴해야 합니다.
*/

function findShortestOfThreeWords(word1, word2, word3) {
    // TODO: 여기에 코드를 작성합니다.
    let min = word1.length;
    let minWord = word1;
    if(min > word2.length){
      min = word2.length;
      minWord = word2;
    } 
    if(min > word3.length){
      min = word3.length;
      minWord = word3;
    }
  
    return minWord;
  }
  