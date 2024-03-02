// array -ordered list of items -coposite/complex data type
// Create an array that describe yourself.use the Three primitive data types you learned
 let Name ="Ashish Ranjan";
 let age = 20;
 let youlikepizza = true;

let introduction = [Name,age,youlikepizza];

console.log(introduction)
let messages =[
    "Hey, how's it going?",
    "I'm great , thank you! How about you?",
    "All good.Been working on my portfolio laterly"
]
let newMessage ="same here!"
messages.push(newMessage)
console.log(messages)//pop is genrally opposite of push and not commanly used
messages.pop()
console.log(messages)
