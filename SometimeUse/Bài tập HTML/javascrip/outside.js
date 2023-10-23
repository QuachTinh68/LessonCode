var a=function(m,n){
    return m+n;
} (4,5);
document.writeln("4+5="+a+"<br>");
document.writeln("4-5="+function(m,n){
    return m-n;
}(4,5)+"<br>");