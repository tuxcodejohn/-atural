# Natural
Small helper to use natual number template library

## What is it?
nat.H is a simple template header-only library, that helps you to use natural numbers in your C++ code.

You can simply use
```
	ℕ<17> 
```
to refer to  the 17th natural number.

Finally no more error prone hand application of Peano's axioms!!

## Array function!

Now you can also get an std::array of several natural numbers even without the need to count them!!
You need an array with the first, the second and the third natural number? A simple 

```
	auto fub = ℕArray< 1,2, 3>;
```
will give you exactly this, without the need to count the three numbers!!


## test it
An usage example testprogramm is included.
Just type make.

