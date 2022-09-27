// function showDialog()
// {
//     alert('Alert nè!!!');
// }
// showDialog();

// function writeLog(){
//     console.log('This is log!')
// }

// function writeLog(messsage){
//     console.log(messsage)
// }

// function writeLog()
// {
//     var myStr = '';
//     for (var p of arguments)
//     {
//         myStr += `${p} - `
//     }
//     console.log(myStr);
// }

// writeLog('Siêu nhân gao', 'Con gà', 'Con heo');

//---------------------------------------//

// var isConfirm = confirm('Message?');

// console.log(isConfirm);

//---------------------------------------//

// function showMessage1()
// {
//     function showMessage2()
//     {
//         console.log('Message 2!');
//     }
//     showMessage2();
// }

// showMessage1();

//---------------------------------------//

/**
 * 1. Declaration func
 * 2. Expression func
 * 3. Arrow func
 */

//1.

function showMessage()
{
    console.log('Declaration Func');
}

//2.

var showMessage2 = function()
{
    console.log('Express Func');
}

setTimeout(function()
{

});
var myObj = {
    myFuntion: function()
    {

    }
}

//3.
