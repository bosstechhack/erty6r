let player = {
    Name:"Ashish",
    Chips:145
  
}
let playerEl =document.getElementById("player-el")
playerEl.textContent = player.Name +" :$"+ player.Chips

function getRandomCard(){
    let randomNumber = Math.floor( Math.random() * 13 )+1
    if (randomNumber ===1){
        return 11;
    }
    else if(randomNumber<=13 && randomNumber>=11){
        return 10;
    }
return randomNumber 
}
 let messageEl=document.getElementById("message-el")
 console.log(messageEl);
 let cardEl=document.getElementById("card-el")
let cards = []
let sum=0

let hasBlackJack = false;
let isAlive = true;
//Declear a variable called message and assign its value to an empty string 
let message = "";
let sumEl=document.getElementById("sum-el")
//let sumEl=document.querySelector("#sum-el")
function newcard(){
    message="Drawing a new card from the deck"
    messageEl.textContent=message
}

function startGame(){
    isAlive =true
    let firstCard = getRandomCard()
    let secondCard = getRandomCard()
    cards =[firstCard,secondCard]
    sum =firstCard + secondCard

    renderGame()
}



function renderGame(){
    if(sum>21){
        message ="you are out of the game 😭";
        isAlive= false;
    }
    else if(sum === 21){
    message = "wohoo! you got Blackjack  🤑🥳";
    hasBlackJack =true;
    
    
    }
    else{
        message = "do you want to draw a new card ?   😇";
        
    }
    cardEl.textContent="Cards:"
    for(let i=0;i<cards.length;i++){
        cardEl.textContent += cards[i] + " "
        // console.log(cards[i])
    }
     //cardEl.textContent="Cards:"+"  "+cards[0]+"  "+cards[1]
    
    // console.log(isAlive)
    // console.log(hasBlackJack)
     sumEl.textContent="Sum:"+sum
     messageEl.textContent = message;
}
//only allow the player to get a new card if she is  alive and does not have blackjack

function newcard(){
   if( isAlive===true && hasBlackJack===false){
    let card=getRandomCard()
    sum += card
    cards.push(card)
    renderGame()
   }
}



    



