a = gets.chomp.to_i
steps = 0
b = a / 5
c = a / 4
d = a / 3
e = a / 2
f = a / 1
g = a % 5
h = a % 10
array = [b, c, d, e, f]

if a == 5 then
  puts b
elsif a == 4 then
  puts c
elsif a == 3 then
  puts d
elsif a == 2 then
  puts e
elsif a == 1 then
  puts f
elsif g == 0 then
  puts b
elsif h == 0 then
  puts b
else
  puts array.min + 1
end
