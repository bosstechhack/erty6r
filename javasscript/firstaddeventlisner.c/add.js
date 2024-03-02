let box= document.getElementById("box")
let display="I want to open the box!"
box.addEventListener("click",function(){
    console.log("I want to open the box!")
    box.textContent=display
    
})