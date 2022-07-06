function solution(n) {
    var answer = 0;
    const arr = new Array(n+1).fill(0)
    arr[1]=1, arr[2]=2, arr[3]=3
    for(let i=4;i<=n;i++){
        //const next = (arr[i-2]+arr[i-1])%1000000007
        //arr=[...arr,next]
        arr[i] = (arr[i-2]+arr[i-1])%1000000007
    }
    console.log(arr[5])
    answer=arr[n];
    return answer;
}