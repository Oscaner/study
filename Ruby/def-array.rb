games = ['LOL', '绝地求生', '怪物猎人']

puts games

games.each do |game|
  puts "I love #{game}"
end

games.each_with_index do |game, index|
  puts "#{index} is #{game}"
end

puts games.join(',')
