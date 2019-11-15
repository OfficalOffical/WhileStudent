package com.company;

import java.util.Random;

public class People {
    public String Name;
    public int ID;
    public int tempCounter = 0;

    Random rand = new Random();

    int randomNumber = rand.nextInt(3)+1;

    int[] PIKL = new int[20];

    People(String Name,int ID){
        this.Name=Name;
        this.ID= ID;
    }
    public void add(int ID){
        PIKL[tempCounter]= ID;
        tempCounter++;
    }
    public void remove(int ID){
        for(int i = 0;i< tempCounter; i++){
            if(PIKL[i] == ID){
                PIKL[i] = 0;
            }
        }
    }
    public void call(int ID){
        for(int i = 0;i< tempCounter; i++){
            if(PIKL[i] == ID){
                //-------------------------
                if(randomNumber == 1)
                    foe.talk();
                else if(randomNumber == 2)
                    friend.talk();
                else
                    bestFriend.talk();
                //---------------------------
            }
        }
    }

    public static void talk(){
        System.out.println("Congrats you found " +
                "easter egg please contact with " +
                "creator Sefa");
    };
}
