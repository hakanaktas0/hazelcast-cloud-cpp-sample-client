#include "City.h"
hazelcast::client::hazelcast_json_value City::asJson(std::string country, std::string city, int population) {
    return hazelcast::client::hazelcast_json_value("{\"country\":\"" + country + "\",\"city\":\"" + city + "\",\"population\":" +std::to_string(population)  +"}");
}


