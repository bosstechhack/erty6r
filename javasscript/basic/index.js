// let bonuspoint =10


// while(bonuspoint<50){
//     console.log(bonuspoint)
//     bonuspoint--
//   } 
//camelCase
let saveEl =document.getElementById("save-el")
let countEl =document.getElementById("count-el")
let count = 0


function increment(){
  count += 1
  countEl.textContent = count
  
}
// create a function save(),which logs out the count when it,s called
function save(){
  let countStr = count + " -  "
  saveEl.textContent += countStr
  countEl.textContent = 0
  count = 0

}

