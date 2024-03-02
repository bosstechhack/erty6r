let pass=0;
function calculate(){
    
    for(let i=1;i<=5;i++){
        let a=parseInt(document.getElementById(i+'1').value);
        if(a>100){
            alert("given input is invalid");
            break;
        }
        if(a>33){
            pass++;
        }
        let b=parseInt(document.getElementById(i+'2').value);
        if(b>100){
            alert("given input is invalid");
            break;
        }
        if(b>33){
            pass++;
        }
        let c=parseInt(document.getElementById(i+'3').value);
        if(c>100){
            alert("given input is invalid");
            break;
        }
        if(c>33){
            pass++;
        }
        let d=parseInt(document.getElementById(i+'4').value);
        if(d>30){
            alert("given input is invalid");
            break;
        }
        if(d>10){
            pass++;
        }
        let e=document.getElementById(i+'5');
        e.value= a+b+c+d;
        }   
}
//write a function such that it if marks lower than fixed number then it count fail

function submit(){
    let sum=0;
    let avg=0;
    for(let i=1;i<6;i++){
    let a=parseInt(document.getElementById(i+'5').value)
    sum+=a;
    }
    let c=document.getElementById("62");
    c.value=sum;
    avg=sum/6;
    let b=document.getElementById("61");
    b.value=avg;
    let f=document.getElementById("pass");
    f.value=pass;

    
}