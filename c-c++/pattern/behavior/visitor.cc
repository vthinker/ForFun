// Visitor, 表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作。
//
// 双分派思想
//
// Visitor: 为该对象结构中ConcreteElement的每一个类声明一个Visit操作
// ConcreteVisitor: 具体访问者，实现每个由Visitor声明的操作。每个操作实现算法的一部分，而该算法片段乃是对应于结构中对象的类。
//
// ObjectStructure: 能枚举它的元素，可以提供一个高层的接口允许访问者访问它的元素
// Element: 定义一个Accept操作，它可一个访问者为参数
// ConcreteElement: 具体元素，实现Accept, 双分派
//  首先在客户程序中将具体状态作为参数传递给男人类完成一次分派，然后男人类调用作为参数的具体状态中的男人反应，同时将自己作为参数传递进入，完成第二次分派。
//

// 适用于数据结构相对稳定的系统，把数据结构和作用于结构上的操作之间的耦合解脱开来，使得操作集合可以相对自由地演化。
// 比较稳定数据结构，易于变化的算法->使用访问者模式比较合适。
// 优点：
//  增加新的操作很容易，因为增加新的操作就意味着新的访问者。访问者模式将有关的行为集中到一个访问者对象中。
// 缺点：
//  增加新的数据结构变的困难
//
// 双分派技术：实现处理和数据结构的分离
