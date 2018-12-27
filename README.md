### Kiwi 的集成和使用
#### Kiwi 的集成
> [Kiwi的集成](https://github.com/kiwi-bdd/Kiwi)

##### Kiwi 集成FAQ 
集成过程中遇到的问题：

* 使用cocoapods 报错`XCTest.framework not found` 
  解决办法：在buildSetting 的`Framework Search Paths`加入`$(PLATFORM_DIR)/Developer/Library/Frameworks`
  
* 报错Kiwi.h not found 的情况
解决办法： 在使用cocoapods 导入的Kiwi时要注意 指定的target 为 demoTests，不同于往常的pod 使用 target 指定为demo 工程名，示例代码如下：
```ObjectiveC
platform :ios, '8.0'
target 'KiwiExampleTests' do
pod 'Kiwi'
end
```
 
#### Kiwi 的使用
Kiwi是一个iOS平台十分好用的行为驱动开发(Behavior Driven Development，以下简称BDD)的测试框架，有着非常漂亮的语法，可以写出结构性强，非常容易读懂的测试。BDD提供了Given..When..Then的三段式语言。

在新建TestSpec.m 文件时，可以使用Kiwi 提供的模板，需要从[Kiwi](https://github.com/kiwi-bdd/Kiwi)中找到`Xcode Templates`中的安装文件，安装模板。
#### Kiwi 的基本语法
`describe`描述需要测试的对象内容，也即我们三段式中的`Given`，`context`描述测试上下文，也就是这个测试在`When`来进行，最后`it`中的是测试的本体，描述了这个测试应该满足的条件，三者共同构成了`Kiwi`测试中的行为描述。它们是可以nest的，也就是一个Spec文件中可以包含多个`describe`（虽然我们很少这么做，一个测试文件应该专注于测试一个类）；一个`describe`可以包含多个`context`，来描述类在不同情景下的行为；一个`context`可以包含多个`it`的测试例。
```ObjectiveC
describe(@"ClassName", ^{
        context(@"a state the component is in", ^{
            let(variable, ^{ // Occurs before each enclosed "it"
                return [MyClass instance];
            });
    
            beforeAll(^{ // Occurs once 所有数据开始前触发执行
            });
    
            afterAll(^{ // Occurs once 所有操作结束后执行
            });
    
            beforeEach(^{ // Occurs before each enclosed "it" 所有it 数据执行前 执行一次
            });

            afterEach(^{ // Occurs after each enclosed "it" 所有it 执行后执行一次
            });
            it(@"should do something", ^{ //预期结果实现
                [[variable should] meetSomeExpectation];
            });

            specify(^{
                [[variable shouldNot] beNil];
            });
    
            context(@"inner context", ^{
                it(@"does another thing", ^{
                });
    
                pending(@"something unimplemented", ^{
                });
            });
        });
    });
    
```
