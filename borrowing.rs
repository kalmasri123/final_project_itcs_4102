fn hello(name:&String){
    println!("Hello {}", name);
}
fn main() {
    let name = String::from("Kareem");
    hello(&name);
    
    println!("Are you still there {}",name);
    //This code will compile since the remains in the main function since it is being borrowed
}