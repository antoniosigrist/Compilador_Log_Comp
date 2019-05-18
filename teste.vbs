sub xuxu(iden as boolean)
'dim p as boolean
'p = false
print 2
iden = true
print iden
end sub



Sub main(x as integer)
Dim i as Integer 
Dim n as Integer 
Dim f as Integer 
Dim h as Integer 
x = 2
n=5
i=2
f=1
h=0
print h
call xuxu (false)
While i < n+1
	while h < 5
		h = h + 1
	wend
	f=f*i
	i=i+1 
Wend
  Print f
end Sub
