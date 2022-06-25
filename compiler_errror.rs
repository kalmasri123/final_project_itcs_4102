fn hello(name:String){
    println!("Hello {}", name);
}
fn main() {
    let name = String::from("Kareem");
    hello(name);
    
    println!("Are you still there {}",name);
    //This code will not compile since the ownership is transferred to the hello function
}