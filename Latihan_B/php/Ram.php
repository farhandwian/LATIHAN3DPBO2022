<?php
class Ram {
    private $capacity;
    private $price;

    // constructor
    function __construct($capacity, $price) {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // method set dan get untuk capacity dan price
    function setCapacity($capacity) {
        $this->capacity = $capacity;
    }
    function setPrice($price) {
        $this->price = $price;
    }

    function getCapacity() {
        return $this->capacity;
    }
    function getPrice() {
        return $this->price;
    }

    // method print
    function printRam() {
        echo "  Ram". "<br/>";
        echo "Capacity    : ". $this->getCapacity(). "<br/>";
        echo "Price       : ". "Rp. ". $this->getPrice(). "<br/>";
        echo "************************************". "<br/>";
    }

    // destructor
    function __destruct() {}
}
?>