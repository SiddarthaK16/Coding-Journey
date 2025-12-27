fn main() {
    let x = 990;
    {
        let y = 10;
        println!("The value of x is {} and y is {}", x, y); //what happens in block stays in block
    }
    println!("The value of x is {} ", x,);
}

fn main() {
    define_x();
}

fn define_x() {
    let x = "Hello";
    println!("{} , World!!", x); //program starts from main fn ,  so we have to call define_x
}
