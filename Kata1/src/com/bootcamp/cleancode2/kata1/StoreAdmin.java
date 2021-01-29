package com.bootcamp.cleancode2.kata1;

import java.util.HashMap;
import java.util.Map;

public class StoreAdmin {
    //Store all offer Items
    private Map<Item,OfferItem> itemsOnOffer;

    public StoreAdmin(Map<Item, OfferItem> itemsOnOffer) {
        this.itemsOnOffer = itemsOnOffer;
    }

    public Map<Item, OfferItem> getItemsOnOffer() {
        return itemsOnOffer;
    }

    public void setItemsOnOffer(Map<Item, OfferItem> itemsOnOffer) {
        this.itemsOnOffer = itemsOnOffer;
    }

    //add an item under offer
    void insertOfferItem(Item item,OfferItem offerItem){
        itemsOnOffer.put(item,offerItem);
    }

    //remove item from offer
    void removeOfferonItem(Item item){
        itemsOnOffer.remove(item);
    }
}
