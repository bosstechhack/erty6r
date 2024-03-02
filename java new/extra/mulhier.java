class animal{
     String species;
    public animal(String species){
        this.species=species;
    }
    
}
class mammal extends animal{
    String sound;
    public mammal(String species ,String sound){
        super(species);
        this.sound=sound;

    }

}
class Dog extends mammal{
    String breed;
    public Dog(String species,String sound,String breed){
        super(species,sound);
        this.breed=breed;
    }
    public void displayInfo() {
       
        System.out.println( species);
        System.out.println( sound);
        System.out.println( breed);
    }
}
public class mulhier{
public static void main(String arg[]){
    Dog dog=new Dog("Canis lupus familiaris","Woof","Golden Retriver");
}
}