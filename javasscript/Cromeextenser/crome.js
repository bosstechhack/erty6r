//log out "button clicked!"when the user clicked the "Save input"button
let mylead =["www.welcome.com"]
const inputEl = document.getElementById("input-el")
const ulEl =document.getElementById("ul-el")
const inputBtn =document.getElementById("input-btn")
 inputBtn.addEventListener("click",function(){
    inputBtn.innerText="button clicked"
    let listitems =""
    for(let i=0; i<mylead.length;i++){


        listitems +="<li>" +mylead[i] +"</li>"

    }
    ulEl.innerHTML = listitems
    // for(let i=mylead.length-1;i<mylead.length; i++){
    //     ulEl.innerHTML +="<li>"  + mylead[i] + "</li>"
        
    //     //  const li=document.createElement("li")
    //     //  li.textContent =mylead[i]
    //     //  ulEl.append(li)
    //     }
        
})
console.log(ulEl)
inputBtn.addEventListener("click",function(){
    mylead.push(inputEl.value)
    console.log(mylead)
    
})
const container = document.getElementById("container")
container.innerHTML ="<button onclick='buy()'>Buy!</button>"
function buy(){
    container.innerHTML ="<p>Thank you for buying!</p>"

}







