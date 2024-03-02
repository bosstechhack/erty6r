function calculate(){
for(let i = 1;i<=6;i++){
   let t=Number(document.getElementById(i+'1').value);
    if(t>70){
        alert("you have entered over limit value");
        break;
      }
      console.log(t);
    let u=Number(document.getElementById(i+'2').value);  
    if(u>30){
        alert("you have entered over limit value");
        break;
      }
    let p;
    p =(document.getElementById(i+'3'));
    p.value=t+u; 
    console.log(p);
}
}
function submit(){
    let total=0
    let avg=0;
    let arr=new Array;
    for(let i=1;i<=6;i++){
        arr[i]=Number(document.getElementById(i+'3').value);
        total+=arr[i];
        
    }
    console.log(total)
     avg=total/6;
    let d=document.getElementById("average");
    d.value=avg;
    let c=document.getElementById("tot");
    c.value=total;
}