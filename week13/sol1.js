function solution(N, road, K) {
    var answer = 0;
    const dist = Array(N+1).fill(Infinity)
    const map = Array.from({length:N+1},()=>[])
    road.forEach(([a,b,c])=>{
        map[a].push({dest:b,cost:c})
        map[b].push({dest:a,cost:c})
    })
    const q = [{dest:1,cost:0}]
    dist[1]=0
    
    while(q.length) {
        let {dest} = q.pop();
        map[dest].forEach(n=>{
            if(dist[n.dest]>dist[dest]+n.cost) {
                dist[n.dest] = dist[dest]+n.cost
                q.push(n)
            }
        })
    }

    return dist.filter(i=>i<=K).length;
}