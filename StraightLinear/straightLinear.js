function StraightLinear(obj)
{
    var x = parseFloat(obj.x.value);
    var y = parseFloat(obj.y.value);
    var grad = parseInt(obj.grad.value, 10);
    var min = parseInt(obj.min.value, 10);
    var sec = parseInt(obj.sec.value, 10);
    var dlina = parseInt(obj.dlina.value, 10);

    var dir = ToRad(grad, min, sec);
    var dx = dlina * Math.cos(dir);
    var dy = dlina * Math.sin(dir);

    var x2 = x + dx;
    var y2 = y + dy;
    document.getElementById('straightLinear_result').innerHTML = "X2 = " + x2.toFixed(3) + ", Y2 = " + y2.toFixed(3);
}

function ToRad(grad, min, sec)
{
    var val = grad + min / 60.0 + sec / 3600.0;
    return val * Math.PI / 180.0;
}