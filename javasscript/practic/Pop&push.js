//Use push()&pop()and their counterparts ushift()&shift()


let largestCountries =["China","india","Usa","Indonasia","pakishtan"]
//console.log("The 5 largest countries in the world:")

// for(let i=0;i<5;i++){
    
//     console.log("-"+largestCountries[i])
// }
// largestCountries.pop()
// largestCountries.push("afganishtan")
// console.log(largestCountries)
// largestCountries.shift()
// largestCountries.unshift("Norway")
// console.log(largestCountries)
// let dayofMonth =31
// let weeday ="Friday"
// if(dayofMonth===31&&weeday==="Friday"){
//     console.log("😱")
// }
// let hands= ["rock","paper","scissor"]
// //Create a function that return a random items from the array
// function getHand(){
//     let randomIndex =Math.floor(Math.random()*3)
//     return hands[randomIndex]


// }
// console.log(getHand())
let fruit =["🍎", "🍎", "🍎", "🍊", "🍊"];
let appleShelf  = document.getElementById("apple-shelf");
let orangeShelf = document.getElementById("orange-shelf");
function sortFruit(){
    for(let i=0;i<fruit.length;i++){
        if(fruit[i] === "🍎"){
            // let appleEmoji =document.createElement("span");
            appleShelf.textContent+="🍎"
        //   appleEmoji.textContent += "🍎";
        //   appleShelf.appendChild(appleEmoji)
        }
        else if(fruit[i] === "🍊"){
            orangeShelf.textContent+="🍊"
            // let orangeEmoji = document.createElement("span");
            // orangeEmoji.textContent ="🍊"
            // orangeShelf.appendChild(orangeEmoji);
            
        }
    
    }

}
sortFruit()
