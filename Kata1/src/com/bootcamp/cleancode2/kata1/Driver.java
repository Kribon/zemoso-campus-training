package com.bootcamp.cleancode2.kata1;

import java.util.HashMap;
import java.util.Map;

public class Driver {

    public static void main(String[] args){
        //Creating items
        Item A = new Item("A",50);
        Item B = new Item("B",30);
        Item C = new Item("C",20);
        Item D = new Item("D",15);

        //Creating Offer items
        OfferItem OA = new OfferItem(A,3,130);
        OfferItem OB = new OfferItem(B,2,45);

        //adding Offer Items under Offers by Store Admin
        Map<Item,OfferItem> itemsOnOffer=new HashMap<>();
        itemsOnOffer.put(A,OA);
        itemsOnOffer.put(B,OB);
        StoreAdmin storeAdmin= new StoreAdmin(itemsOnOffer);

        //customer adding items to cart
        Map<Item,Integer> cartItems = new HashMap<>();
        Customer customer = new Customer(cartItems);
        customer.addItemToCart(A);
        customer.addItemToCart(B);
        customer.addItemToCart(B);
        customer.addItemToCart(C);
        customer.addItemToCart(D);
        customer.addItemToCart(A);
        customer.addItemToCart(A);

        //generate bill for customer
        BillDesk billDesk= new BillDesk(storeAdmin);
        int bill = billDesk.generateBill(customer);
        System.out.println(bill);

        customer.addItemToCart(A);
        int bill1 = billDesk.generateBill(customer);
        System.out.println(bill1);

        customer.removeFromCart(B);
        int bill2 = billDesk.generateBill(customer);
        System.out.println(bill2);
    }
}
