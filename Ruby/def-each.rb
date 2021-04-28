games = ['LOL', '绝地求生', '怪物猎人']

games.each { |game|
  puts game
}

puts "\n"

games.each do |game|
  puts game
end

puts "\n"

games.each_with_index do |game, i|
  puts i.to_s << '.' << game
end

puts "\n"

5.times do |i|
  puts "第 #{i+1} 次 times 循环"
end

puts "\n"

1.step(10, 3) do |i|
  puts i.to_s
end
