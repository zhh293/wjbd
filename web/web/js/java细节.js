//输入输出语法
/*document.write("要写出的内容");
document.write('<h1>我</h1>');
alert("nm");
console.log("cuowu");
prompt('请输入你的姓名');//弹出对话框,输入*/
//字面量是计算机中描述的事物
//变量，使用和本质，命名规则和规范
//变量是存储数据的盒子，用存放数据
//1.使用
/*let username = 20;
console.log(username);
//2.变量的更新与赋值
username = 18;
console.log(username);
//3.声明多个变量
let name = 18, jean = 20;
console.log(name, jean);
//案例
let name1 = prompt("请输入姓名");
document.write(name1);
//交换变量的值
let num1 = 10;
let num2 = 20;
let t;
t = num1;
num1 = num2;
num2 = t;
document.write(num1, num2);*/
//变量的本质，是程序在内存中申请的小空间
//命名规则与规范
//不用关键字，只用下划线，字母，数字，$组成，且数字不能开头
//字母严格区分大小写
//let message = prompt("请输入你的姓名，年龄和性别");
//document.write(message);
//var可以先使用再声明，变量可以重复声明
//可以用来变量提升，全局变量，没有块级作用域
/*num=10;
console.log(num);
var num;*/
/*let arr = ["zhangsan", "lisi", "wangwu", "niubi666"];
console.log(arr);
console.log(arr[0]);*/
//常量
//使用const声明的变量，这个变量不可以改变
/*const name2 = "张柳";
console.log(name2);
name2 = "lisi";
console.log(name2);*///这样写是不对的
//常量声明时必须赋值
/*for (let index = 0; index < 2; index++) {
    alert("*");
}*/
//字符串拼接，跟java一模一样，java是什么样子，这个就是什么样子
//模板字符串：拼接字符串和变量的，可以包含多个行和表达式
/*let name = "Kimi";
let greeting = `Hello, ${name}!`;
console.log(greeting); // 输出：Hello, Kimi!*/
//多行字符串
//模板字符串可以跨越多行，不需要使用\n来换行：
let message = `This is the first line
and this is the second line`;
console.log(message);
// 输出：
// This is the first line
// and this is the second line
//嵌入表达式
//你可以在模板字符串中嵌入任何表达式，包括函数调用：so easy
let age3 = 25;
let info = `I am ${age3} years old.`;
console.log(info); // 输出：I am 25 years old.



//语法：
let age = 18;
document.write(`我今年${age}岁了`);
let name = prompt('请输入你的姓名');
let age1 = prompt("请输入你的年龄");
document.write("dajiaasifjskg");
//简易ATM取款机
let sum = 50000;
while (true) {
    let number = +prompt("请选择你要进行的操作" + `<br>` + "1.存钱" + `<br>` + "2.取钱" + `<br>` + "3.查看余额" + `<br>` + "4.退出");
    if (number == 1) {
        let cun = +prompt("请输入你想存多少钱");
        sum = sum + cun;
        document.write(`<span>你的存款还有${sum}元</span>`);
    }
    else if (number == 2) {
        let qu = +prompt("请输入你想要去多少钱");
        sum = sum - qu;
        document.write(`<span>你现在还剩下${sum}</span>`);
    }
    else if (number == 3) {
        document.write(`你现在还有${sum}元`);
    }
    else {
        document.write(`<span>欢迎下次光临</span>`);
        break;
    }
}
//prompt,alert这些输出内容由浏览器控制的无法对其使用html和css样式
//简单来说，就是不在正文区的文字内容等无法被修饰，比如弹窗等等；简单易懂
//另外，模板字符串是真牛逼
//直接跳到数组进行学习
//let arr=[];声明方法，草，这跟java除了字母一样，好大的区别md
//或者let arr=new Array(1,2,3,4,5);
/*let arr=[1,2,3,4,5];
console.log(arr.length);
console.log(arr[0]);*/
//操作数组，增删改查
//改，数组【下标】=新值
//增，arr.push(新增的内容),将一个或者多个元素添加到数组末尾并返回数组长度,arr.unshift()，在开头增加元素并返回长度;
/*let arr = [12, 10, 34, 78, 56, 2, 3];
let brr = [];
for (let index = 0; index < arr.length; index++) {
    if (arr[index] > 10) {
        brr.push(arr[index]);
    }
}
for (let index = 0; index < brr.length; index++) {
    console.log(brr[index]);

}*/
//删，arr.pop(),删除最后一个元素，并且返回元素的值,arr.shift()，删除第一个元素,并返回元素的值，arr.splice(起始位置，删除几个元素);第二个参数不写，默认删到最后