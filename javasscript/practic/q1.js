///Grab the welcome-el paragraph and sstore it in a variable called welcomeEl
let welcomeEl =document.getElementById("welcome-el")
console.log(welcomeEl)
//create two variables(name & greeting )That cointain your name
//and the greeting we want to render on the page
let call = "Ashish Ranjan"
let greeting ="Welocme Back ! "
//render the welcome message using wklcomeEl.innerText
welcomeEl.innerText = greeting + call
// add an emoji to the end!
//write your code below here
welcomeEl.innerText += "🙌"