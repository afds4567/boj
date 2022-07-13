function solution(s) {
    var answer = 0;
    const arr = [];
    for(let i=1; i<=s.length;i++) arr.push(check(s,i).length);
    answer = Math.min(...arr);
    return answer;
}
const check = (s,n) => {
    let cnt = 1
    let r = ['']
    for(let i=0;i<= s.length/n;i++){
        const part = s.slice(i*n,i*n+n);
        if(r[r.length-1]===part) cnt++;
        else{
            if(cnt>1) r[r.length-1] = cnt + r[r.length-1]
            r.push(part)
            cnt=1
        }
    }
    return r.join('')
}