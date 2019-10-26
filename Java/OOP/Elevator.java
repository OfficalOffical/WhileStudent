package com.company;
import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        Elevator elevator = new Elevator();
        Scanner input = new Scanner(System.in);
        int choice= 11 ;

        do{
            System.out.println("What do you want(Enter the number at the first)\n1 - Elevator go up\n" +
                    "2 - Elevator go down\n" + "3 - Get people in the elevator\n" +
                    "4 - Get down people from elevator\n" + "5 - Open the door\n" +
                    "6 - Close the door\n7 - Learn door status\n" +
                    "8 - Learn current floor of elevator\n9 - Check everything\n0 - Exit");
                    choice = input.nextInt();
           switch (choice){
               case 1:
                   elevator.elevatorUp();
                   break;
               case 2:
                   elevator.elevatorDown();
                   break;
               case 3:
                   elevator.pushPeople();
                   break;
               case 4:
                   elevator.popPeople();
                   break;
               case 5:
                   elevator.doorOpen();
                   break;
               case 6:
                   elevator.doorOpen();
                   break;
               case 7:
                   System.out.println("The door status is : "  + elevator.doorStatus() + "(False = close / True = open)");
                   break;
               case 8:
                   System.out.println("The current level of elevator is : "+elevator.currentFloor());
                   break;
               case 9:
                   elevator.detailOfAll();
                   break;
            }
    }while(choice !=0);


    }






}
class Elevator{
    //Definitions
    //-----------------------------
    private int elevatorLevel = 0;
    private boolean liftDoor=false;
    private int maxKG=0;
    private int randomNumber = (int) ((Math.random()*((120-60)+1))+60);
    //-----------------------------

    //Elevator move
    //------------------------------------------
    void elevatorUp(){
        if (check()==true){
            doorOpen();
            elevatorLevel++;
            doorClose();
        }
        else
            System.out.println("BEEEEEEEEEEEP");
    }
    void elevatorDown(){
        if (check()==true) {
            doorOpen();
            elevatorLevel--;
            doorClose();
        }
        else
            System.out.println("BEEEEEEEEEEEP");
    }
    //------------------------------------------
    void pushPeople(){
        maxKG = maxKG + randomNumber;
    }
    void popPeople(){
        if(maxKG<120){
            maxKG = 0;
        }
        else
            maxKG = maxKG - randomNumber;

    }
    //Door Check
    //-------------------------
    void doorOpen(){
        liftDoor = true; // 1
    }
    void doorClose(){
        liftDoor = false; // 0
    }
    boolean doorStatus(){
        return liftDoor;
    }
    //--------------------------

    boolean check(){
        if((elevatorLevel > -2 && elevatorLevel<5) && maxKG< 800 && liftDoor == false)
            return true; // 1
        else
            return false; // 0
    }
    int currentFloor(){
        return  elevatorLevel;
    }
    void detailOfAll(){
        System.out.println("The Kg of peoples inside the elevator is : "+ maxKG);
        System.out.println("The door status is : "  + doorStatus() + "(False = close / True = open)");
        System.out.println("The current level of elevator is : "+elevatorLevel);
    }
}