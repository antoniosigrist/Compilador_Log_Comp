Sub main()
Dim i as Integer 
Dim n as Integer 
Dim f as Integer 
Dim h as Integer 
dim b as integer

n=5
i=2
f=1
'iden = false
h=0
call xuxu (true) 'criar nó popula e depois chama o evaluate'
While i < n+1
	while h < 5
		h = h + 1
	wend
	f=f*i
	i=i+1 
Wend
  Print f 
end Sub


sub xuxu(iden as boolean)
dim p as boolean
p = false
iden = false
print iden
end sub



function oi(hhh as boolean) as integer
hhh = false
oi = 2
end function