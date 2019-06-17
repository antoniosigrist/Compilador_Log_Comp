Function fibonacci(n as integer) as integer
    ' codigo do raphael costa
    dim flag as boolean

    dim nn as integer
    dim nnn as integer

    flag = false
    if n = 0 then
        fibonacci = 1
        flag = true
    end if

    if n = 1 then 
        fibonacci = 1
        flag = true
    end if

    if flag = false then
        nn = n-2
        nnn = n-1
        fibonacci = fibonacci(nn) + fibonacci(nnn)
    end if

End Function
Sub Main()
    print fibonacci(5)
End Sub