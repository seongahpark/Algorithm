/*
    DAY08 - 2.findMinLengthOfThreeWords
    
    문제

    세 개의 단어를 입력받아 그 중 가장 짧은 단어의 길이를 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    number 타입을 리턴해야 합니다.
    단어들의 길이가 모두 같은 경우, 그 길이를 리턴해야 합니다.
*/

function findMinLengthOfThreeWords(word1, word2, word3) {
    // TODO: 여기에 코드를 작성합니다.
    let min = word1.length;
    if(word2.length < min) min = word2.length;
    if(word3.length < min) min = word3.length;
    return min;
  }
  