<?php
class Greeting {
    public readonly string $hello;

    public function setter() : void {
        $this->hello = 'PHP';
    }
}