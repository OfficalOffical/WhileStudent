package com.company;

public class Book {
    public String bookTitle;
    public String author;
    public int shelfNumber;

    public void AddBook(String BookTitle,String Author,int ShelfNumber ){

        this.bookTitle = BookTitle;
        this.author = Author;
        this.shelfNumber = ShelfNumber;

    }

    public void ShowBook() {

        System.out.println("Book Title: "+this.bookTitle+" Author of this book: "+this.author+" Book Number: "+ this.shelfNumber);

    }

}
