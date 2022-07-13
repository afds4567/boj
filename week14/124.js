function solution(n) {
    const arr = [1,2,4];
    var answer = "";
    while(1){
        n-=1;
        let rest = n%3
        answer = arr[rest] + answer
        n=Math.floor(n/3)
        if(n===0) break
    }
    return answer;
}