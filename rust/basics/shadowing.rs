fn main() {
    let x = 17;

    {
        let x = 99;
        assert_eq!(x, 99); /*mut says:

                           “This variable will change over time.”

                           You are managing state.

                           Shadowing says:

                           “I’m done with the old value. Here’s a new one.” */
    }

    assert_eq!(x, 17);

    let x = 9209;
    println!("{}", x);
}
