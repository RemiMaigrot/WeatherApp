# frozen_string_literal: true

require 'net/http'

class HomeController < ApplicationController
    def index
        url = "https://api.openweathermap.org/data/2.5/weather?lat=51.507351&lon=-0.127758&appid=1b73a5e9d27e393670e8bdb7c35e76bf"
        uri = URI(url)
        res = Net::HTTP.get_response(uri)
        @data = JSON.parse(res.body)
    end
end