fn main(){
    let x:i64 = 45;
    let y:i64 = 56;  //by default variable is immutable..
    let mut z = 99;  //use mut to be able to mutate the variable later..
    z += 1;
    println!("{}" , x+y);
    println!("Very good!");
    println!("{}",z);

    let _s=16;  //using _ before s to not get unused variable warning.. or use #[allow(unused_variables)] before main fn..
}