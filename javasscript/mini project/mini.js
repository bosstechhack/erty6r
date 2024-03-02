


function changeimage(){
  var image=["c1.png","c2.png","c3.png","c4.png","c5.png","c6.png","c6.png","c7.png","c8.png","c9.png"];
  var a =document.getElementById("capcha");
  a.setAttribute('src',image[Math.floor(Math.random()*10)])
 
  

}
function refresh(){
  window.location.reload();
}
function password(){
  let a=document.getElementById("pass")
  if(a.length!=6){
    alert="wrong input";
  }

}