package com.bootcamp.cleancode2.kata1;

import java.util.Map;

public class BillDesk {
    private StoreAdmin storeAdmin;

    public BillDesk(StoreAdmin storeAdmin) {
        this.storeAdmin = storeAdmin;
    }

    //calculate Item cost under discount per customer
    int costOfItem(int actualQuantity,int comboQuantity,int actualPrice,int comboPrice){
        int itemCost;
        itemCost= (actualQuantity/comboQuantity) * comboPrice;
        itemCost += (actualQuantity%comboQuantity) * actualPrice;
        return itemCost;
    }

    //Generate total Bill
    int generateBill(Customer customer){
        int totalBill = 0;
        Map<Item,OfferItem> itemsOnOffer = storeAdmin.getItemsOnOffer();
        Map<Item,Integer> cartItems = customer.getCartItems();

        for(Item item: cartItems.keySet()){
            int itemBill;
            if(itemsOnOffer.containsKey(item)){
                itemBill = costOfItem(cartItems.get(item),
                        itemsOnOffer.get(item).getComboQuantity(),
                        item.getPrice(),
                        itemsOnOffer.get(item).getComboPrice());
            }
            else {
                itemBill = item.getPrice() * cartItems.get(item);
            }
            totalBill += itemBill;
        }
        return totalBill;
    }

}
