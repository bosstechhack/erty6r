let errorParagraph =document.getElementById("error")
console.log(errorParagraph)



function purchase(){
    console.log("button clicked")
    errorParagraph.textContent ="Somthing went wrong , Please try again"
}