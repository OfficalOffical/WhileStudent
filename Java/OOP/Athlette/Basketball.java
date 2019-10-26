package com.company;

public class Basketball extends Athlette{

    public void train(){
        muscles++;
        staminaRate++;
        Accuracy+=5;
    }
    public void jump(){
        jumpHeight+=3;
    }

    public void showStats(){
        System.out.println("////////////////////");
        System.out.println("Muscles rate : "+muscles+"\nStamina rate : "+staminaRate+"\nJump height rate : "+jumpHeight+"Your accuraty is : "+Accuracy);

    }


}
