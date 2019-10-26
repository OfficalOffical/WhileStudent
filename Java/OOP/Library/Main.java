package com.company;


public class Main {

        public static void main(String[] args) {

            Book book1 = new Book();
            Book book2 = new Book();
            Book book3 = new Book();
            ENoval enoval1 = new ENoval();
            AudioRec audioRec1 = new AudioRec();

            enoval1.AddBook("How to not get rich", "Sefa KALKAN", 61);

            book2.AddBook("Yazılımcılar ve kahveleri", "Turgenyev", 571);

            book3.AddBook("Araba fantazisi", "Recaizade Mahmut Ekrem", 61);


            enoval1.ShowBook();
            enoval1.listen();
            book2.ShowBook();
            enoval1.listen();
            book3.ShowBook();

            System.out.println("ı");


        }

    }
