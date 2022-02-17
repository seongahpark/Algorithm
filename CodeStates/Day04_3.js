/*
    DAY04 - 3.convertScoreToGradeWithPlusAndMinus [Advanced]
    
    문제

    점수를 입력받아 점수에 해당하는 등급을 리턴해야 합니다.

    ----------------------------------------------------------------------
    출력

    string 타입을 리턴해야 합니다.
    각 등급의 최저 점수는 아래와 같습니다. ('F'의 경우 최대 점수를 표기)
    90 이상 --> 'A'
    80 이상 --> 'B'
    70 이상 --> 'C'
    60 이상 --> 'D'
    60 미만 --> 'F'

    주의 사항

    만약 주어진 점수가 100을 초과하거나 0 미만인 경우, 문자열 'INVALID SCORE'를 리턴해야 합니다.
    각 등급의 최고 점수보다 7점 이하인 경우, 등급과 함께 '-'를 리턴해야 합니다. (단, 93점의 경우에는 A를 리턴해야 합니다.)
    각 등급의 최저 점수보다 8점 이상인 경우, 등급과 함께 '+'를 리턴해야 합니다.
    F+ 와 F- 는 존재하지 않습니다.
*/

function convertScoreToGradeWithPlusAndMinus(score) {
    // TODO: 여기에 코드를 작성합니다.
    let grade = score / 10;
    let gradePlus = score % 10;
    let gradeString;
    if(grade > 10 || grade < 0) return "INVALID SCORE";
    else if(grade >= 9){
      gradeString = 'A';
    }else if(grade >= 8){
      gradeString = 'B';
    }else if(grade >= 7){
      gradeString = 'C';
    }else if(grade >= 6){
      gradeString = 'D';
    }else{
      gradeString = 'F';
    }
  
    if(score === 100) return "A+";
    else if(gradeString !== 'F') return gradeString + getPlusAndMinus(gradePlus);
    else return gradeString;
  }
  
  function getPlusAndMinus(gradePlus){
        if(gradePlus > 7) return '+';
        else if(gradePlus > 2) return '';
        else return '-';
  }
  