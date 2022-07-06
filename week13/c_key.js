function solution(relation) {
    var answer = 0;
    const v = [];
    for(let i=1;i<1<<relation[0].length;i++){
        if(!check1(i,relation))continue
        if(!check2(i,v)) continue
        v.push(i)
        //console.log(i)
    }
    return v.length;
}
const check1 = (key, relation) =>{
    const set = new Set();
    for(let i=0; i<relation.length;i++){
        let tmp=""
        for(let j=0;j<relation[0].length;j++){
            if(key & 1<<j) tmp+=relation[i][j]
        }
        if(set.has(tmp)) return false
        else set.add(tmp)
    }
    return true
}
const check2 = (key,v) =>{
    for(x of v){
        //console.log(x)
        if((key & x)===x) return false
    }
    return true
}