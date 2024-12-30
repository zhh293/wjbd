/*function add(a, b) {
    return a + b;
}
result = add(10, 20);
alert(result);*/
//array,string,json,bom,dom对象
//array用于定义数组
//var add=new Array(1,2,3,4);
//也可以这样写
//var add = [1, 2, 3, 4];
//访问
//arr[索引]=值;
//alert(add[1]);
//特点，长度可变，类型可变
//var arr = [1, 2, 3, 4];
/*arr[10] = 50;
alert(arr[10]);
alert(arr[9]);
alert(arr[8]);*/
/*arr[9] = 'A';
arr[8] = true;
arr[7] = 50;
/*alert(arr[9]);
alert(arr[8]);
alert(arr[7]);*/
//array属性：lenth，设置或者返回数组中元素的数量
//方法：forEach():遍历数组中每个有值的元素，每次都会调用一次传入函数，push():添加元素到数组末尾
//arr.push(7,8,9)
//splice:删除元素
//arr.splice(起始索引，删除几个);
/*for (let index = 0; index < arr.length; index++) {
    var result = arr[index];
    alert(result);

}*/
/*arr.forEach(function (e) {
    alert(e);
});*/
//箭头函数：(.....)=>{......}
//arr.forEach((e) => { alert(e); });
/*arr.splice(2, 2);
console.log(arr);*/

//string字符串创建方式
//1.var 变量名=new string("...")
//2.var 变量名="..."
//var str = "hello world";
//lenth charat indexof trim substring
//lenth
//alert(str.length);
//charAt()
//alert(str.charAt(3));//获取三位置的字符
//indexOf()
//alert(str.indexOf("lo"));
//alert(str.indexOf("l"));
//trim()
//var s = str.trim();
//alert(s);
//substring
//var s1 = str.substring(1, 4);//含头不含尾
//alert(s1);
//自定义对象
/*var 对象名{
    属性1：属性值1，
    属性2：属性值2，
    属性3：属性值3，
    函数名称：function(形参列表){}
};*/
//调用格式： 对象名.属性名;   对象名.函数名();
/*var user={
  eat:function(){
    alert("用膳");
  }
};
user.eat();*/
//json,本质是一个字符串，是一个文本嘛,作为数字载体，在网络中传递信息
/* var user=  {"name":"tom",
   "age":20,
   "gender":"male"
};*/
/*var userstr = { "name": "jerry", "age": 20, "address": ["北京", "上海"] };
var result = userstr.address;
alert(result);
var result1 = userstr.name;
alert(result1);
var obj = JSON.parse(userstr);
alert(obj.age);
var jsonstr = JSON.stringify(obj);
alert(jsonstr);*/
//bom,允许javascrpt与浏览器对话
//window,navigator,screen,history,location
//window和location很重要
//获取window对象
//直接使用window即可
window.alert("hello world");
//属性，history，location，navigator
//方法，alert(),confirm(),setinterval(),setTimeout()
var flag = confirm("你确认删除该记录吗?");
alert(flag);
//确认：true，取消：false
//定时器-setinterval
/*var i = 0;
setInterval(function () {
    alert(i);
    i++;
}, 2000);*/
//settimeout
/*setTimeout(function () {
    alert("js");
}, 3000);*/
//location,获取其他地址
/*alert(location.href);
location.href = "https://www.itcast.cn";*/
//document::整个文档对象
//element:::元素对象
//attribute:属性对象
//text:文本对象
//comment：注释对象
//通过dom操作对html进行操作