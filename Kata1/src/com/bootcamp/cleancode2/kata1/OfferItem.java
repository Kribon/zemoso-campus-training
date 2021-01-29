package com.bootcamp.cleancode2.kata1;

public class OfferItem {
    private Item item;
    private int comboQuantity;
    private int comboPrice;

    public OfferItem(Item item, int comboQuantity, int comboPrice) {
        this.item = item;
        this.comboQuantity = comboQuantity;
        this.comboPrice = comboPrice;
    }

    public Item getItem() {
        return item;
    }

    public void setItem(Item item) {
        this.item = item;
    }

    public int getComboQuantity() {
        return comboQuantity;
    }

    public void setComboQuantity(int comboQuantity) {
        this.comboQuantity = comboQuantity;
    }

    public int getComboPrice() {
        return comboPrice;
    }

    public void setComboPrice(int comboPrice) {
        this.comboPrice = comboPrice;
    }
}
