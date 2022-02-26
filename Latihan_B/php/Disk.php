<?php
class Disk {
    private $type;
    private $capacity;
    private $price;

    // constructor
    function __construct($type, $capacity, $price) {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // method set dan get untuk type, capacity, dan price
    function setType($type) {
        $this->type = $type;
    }
    function setCapacity($capacity) {
        $this->capacity = $capacity;
    }
    function setPrice($price) {
        $this->price = $price;
    }

    function getType() {
        return $this->type;
    }
    function getCapacity() {
        return $this->capacity;
    }
    function getPrice() {
        return $this->price;
    }

    // method print
    function printDisk() {
        echo "  Disk". "<br/>";
        echo "Type        : ".  $this->getType(). "<br/>";
        echo "Capacity    : ". $this->getCapacity(). "<br/>";
        echo "Price       : ". "Rp. ". $this->getPrice(). "<br/>";
        echo "************************************". "<br/>";
    }

    // destructor
    function __destruct() {}
}
?>