**1. How many ways can singleton can be breaked?**

`5 ways:-`
[see here](https://medium.com/exploring-code/how-to-make-the-perfect-singleton-de6b951dfdb0)

**2.  Can inner static class access outer private members?**

`yes`
[more clarification](https://stackoverflow.com/questions/27181290/static-nested-class-has-full-access-to-private-outer-class-members)

**3.  Can inner static class access outer instance members?**

`Yes`
[more clarification](https://stackoverflow.com/questions/27181290/static-nested-class-has-full-access-to-private-outer-class-members)

**4.  What is default type of members in interface?**

`public`

**5.  Interface members can be made protected?**

`No`

**6.  Can you override a method by making its access scope reduced?
For eg. a public method A can be made overridden by protected method A?**
    
`No. You cannot reduce scope of method while overiding.`
    
**7.  What are default methods of Object class?**

`toString(), clone(), finalize(), hashCode(), equals(), getClass().`
    
**8.  Internal default implementation of hashCode() method?**

`It depends on JVM implementation.

Usually it generates hashcode from the memory address of the object.`

**9.  Internal default implementation of equals() method?**

`It checks reference of 2 objects with "==" operator.`

**10. Output of Object.toString()?**

`toString() provides String representation of an Object and used to convert an object to String.
The default toString() method for class Object returns a string consisting of the name of the class of which the object is an instance, 
the at-sign character @ and the unsigned hexadecimal representation of the hash code of the object.`

**11. What is DRY?**

`Don't Repeat Yourself`

**12. What is KISS?**

`Keep It Simple! Stupid!`

**13. What is SOLID?**

`It is Software Design Principles intended to make software designs more understandable, flexible and maintainable.`

> **Single responsibility principle**

`a class should have only a single responsibility (i.e. changes to only one part of the software's specification should be able to affect the specification of the class).`

> **Open/closed principle**

`software entities … should be open for extension, but closed for modification.`

> **Liskov substitution principle**

`objects in a program should be replaceable with instances of their subtypes without altering the correctness of that program." See also design by contract.`

> **Interface segregation principle**

`many client-specific interfaces are better than one general-purpose interface.`

> **Dependency inversion principle**

`one should depend upon abstractions, not concretions.`

**14. Can outer class be private or protected?**

`No`

**15. Can Outer Class be static?**

`No

Since a top-level class does not have an outer class, it can't be anything but static.
Because all top-level classes are static, having the static keyword in a top-level class definition is pointless.`

**16. Can final class be inherited?**

`No`

**17. Can final method be overridden?**

`No`

**18. Can static method be overridden?**

`No

Because they are not at instance level. Overriding does'nt make sense because overriding happens on instance level.`

**19. Can a Constructor be overridden?**

`No

If you trying to write Super class Constructor in Sub class, then Sub class will treat that as a method not constructor because name should not match with Sub class name. And it will give an compilation error that methods does not have return value. So we should declare as void, then only it will compile.`

**20. 
