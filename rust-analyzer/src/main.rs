struct User {
    name: String,
    age: u32,
}

impl User {
    fn new(name: String, age: u32) -> Self {
        Self { name, age }
    }

    fn is_adult(&self) -> bool {
        self.age >= 18
    }
}

fn main() {
    let user = User::new(String::from("Test User"), 22);
    println!("Name: {}", user.name);
    println!("Adult: {}", user.is_adult());
}
