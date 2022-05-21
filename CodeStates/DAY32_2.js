function paveBox(boxes) {
    // TODO: 여기에 코드를 작성합니다.
    let res = 0;
    const q = new Queue();
    for(let i=0; i<boxes.length; i++){
      q.push(boxes[i]);
    }
  
    for(let i=0; i<boxes.length; i++){
      let start = i;
      let tmpRes = 0;
      for(let j = start; j<boxes.length; j++){
        let data = q.chkFront();
        console.log('data : ' + data + 'start : ' + boxes[start]);
        if(data > boxes[start]){
          i = j;
          break;
        }
        tmpRes++;
        q.pop();
      }
      console.log('start : ' + start);
      console.log('tmpRes : ' + tmpRes);
      if(res < tmpRes) res = tmpRes;
    }
  
    return res;
  }
  
  class Queue {
    constructor(arr = []){
      this.front = 0;
      this.back = 0;
      this.arr = arr;
    }
  
    push(data){
      this.arr.push(data);
      this.back++;
    }
  
    pop(){
      const data = this.arr.shift();
      this.front++;
      return data;
    }
  
    chkFront(){
      return this.arr[this.front];
    }
  
    chkEmpty(){
      if(this.front > this.back && this.back !== -1)
      return true;
    }
  }