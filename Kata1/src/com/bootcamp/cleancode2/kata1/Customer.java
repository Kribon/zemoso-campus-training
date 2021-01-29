package com.bootcamp.cleancode2.kata1;

import java.util.HashMap;
import java.util.Map;

public class Customer {
    //Store all items
    private Map<Item,Integer> cartItems= new HashMap<>();

    public Customer(Map<Item, Integer> cartItems) {
        this.cartItems = cartItems;
    }

    public Map<Item, Integer> getCartItems() {
        return cartItems;
    }

    public void setCartItems(Map<Item, Integer> cartItems) {
        this.cartItems = cartItems;
    }

    //add items to cart, if item already exists increment the quantity
    void addItemToCart(Item item){
        if(cartItems.containsKey(item)){
            cartItems.put(item,cartItems.get(item)+1);
        }
        else{
            cartItems.put(item,1);
        }
    }

    //remove item from Cart, if quantity less than 1 then remove item
    void removeFromCart(Item item){
        if(cartItems.get(item)>1){
            cartItems.put(item,cartItems.get(item) - 1);
        }
        else{
            cartItems.remove(item);
        }
    }


}
