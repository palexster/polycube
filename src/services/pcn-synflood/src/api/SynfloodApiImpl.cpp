/**
* synflood API generated from synflood.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */


#include "SynfloodApiImpl.h"

namespace polycube {
namespace service {
namespace api {

using namespace polycube::service::model;

namespace SynfloodApiImpl {
namespace {
std::unordered_map<std::string, std::shared_ptr<Synflood>> cubes;
std::mutex cubes_mutex;

std::shared_ptr<Synflood> get_cube(const std::string &name) {
  std::lock_guard<std::mutex> guard(cubes_mutex);
  auto iter = cubes.find(name);
  if (iter == cubes.end()) {
    throw std::runtime_error("Cube " + name + " does not exist");
  }

  return iter->second;
}

}

void create_synflood_by_id(const std::string &name, const SynfloodJsonObject &jsonObject) {
  {
    // check if name is valid before creating it
    std::lock_guard<std::mutex> guard(cubes_mutex);
    if (cubes.count(name) != 0) {
      throw std::runtime_error("There is already a cube with name " + name);
    }
  }
  auto ptr = std::make_shared<Synflood>(name, jsonObject);
  std::unordered_map<std::string, std::shared_ptr<Synflood>>::iterator iter;
  bool inserted;

  std::lock_guard<std::mutex> guard(cubes_mutex);
  std::tie(iter, inserted) = cubes.emplace(name, std::move(ptr));

  if (!inserted) {
    throw std::runtime_error("There is already a cube with name " + name);
  }
}

void replace_synflood_by_id(const std::string &name, const SynfloodJsonObject &bridge){
  throw std::runtime_error("Method not supported!");
}

void delete_synflood_by_id(const std::string &name) {
  std::lock_guard<std::mutex> guard(cubes_mutex);
  if (cubes.count(name) == 0) {
    throw std::runtime_error("Cube " + name + " does not exist");
  }
  cubes.erase(name);
}

std::vector<SynfloodJsonObject> read_synflood_list_by_id() {
  std::vector<SynfloodJsonObject> jsonObject_vect;
  for(auto &i : cubes) {
    auto m = get_cube(i.first);
    jsonObject_vect.push_back(m->toJsonObject());
  }
  return jsonObject_vect;
}

std::vector<nlohmann::fifo_map<std::string, std::string>> read_synflood_list_by_id_get_list() {
  std::vector<nlohmann::fifo_map<std::string, std::string>> r;
  for (auto &x : cubes) {
    nlohmann::fifo_map<std::string, std::string> m;
    m["name"] = x.first;
    r.push_back(std::move(m));
  }
  return r;
}

/**
* @brief   Read synflood by ID
*
* Read operation of resource: synflood*
*
* @param[in] name ID of name
*
* Responses:
* SynfloodJsonObject
*/
SynfloodJsonObject
read_synflood_by_id(const std::string &name) {
  return get_cube(name)->toJsonObject();

}

/**
* @brief   Read stats by ID
*
* Read operation of resource: stats*
*
* @param[in] name ID of name
*
* Responses:
* StatsJsonObject
*/
StatsJsonObject
read_synflood_stats_by_id(const std::string &name) {
  auto synflood = get_cube(name);
  return synflood->getStats()->toJsonObject();

}

/**
* @brief   Read deliverratio by ID
*
* Read operation of resource: deliverratio*
*
* @param[in] name ID of name
*
* Responses:
* std::string
*/
std::string
read_synflood_stats_deliverratio_by_id(const std::string &name) {
  auto synflood = get_cube(name);
  auto stats = synflood->getStats();
  return stats->getDeliverratio();

}

/**
* @brief   Read lastupdate by ID
*
* Read operation of resource: lastupdate*
*
* @param[in] name ID of name
*
* Responses:
* uint64_t
*/
uint64_t
read_synflood_stats_lastupdate_by_id(const std::string &name) {
  auto synflood = get_cube(name);
  auto stats = synflood->getStats();
  return stats->getLastupdate();

}

/**
* @brief   Read responseratio by ID
*
* Read operation of resource: responseratio*
*
* @param[in] name ID of name
*
* Responses:
* std::string
*/
std::string
read_synflood_stats_responseratio_by_id(const std::string &name) {
  auto synflood = get_cube(name);
  auto stats = synflood->getStats();
  return stats->getResponseratio();

}

/**
* @brief   Read tcpattemptfails by ID
*
* Read operation of resource: tcpattemptfails*
*
* @param[in] name ID of name
*
* Responses:
* std::string
*/
std::string
read_synflood_stats_tcpattemptfails_by_id(const std::string &name) {
  auto synflood = get_cube(name);
  auto stats = synflood->getStats();
  return stats->getTcpattemptfails();

}

/**
* @brief   Read tcpoutrsts by ID
*
* Read operation of resource: tcpoutrsts*
*
* @param[in] name ID of name
*
* Responses:
* std::string
*/
std::string
read_synflood_stats_tcpoutrsts_by_id(const std::string &name) {
  auto synflood = get_cube(name);
  auto stats = synflood->getStats();
  return stats->getTcpoutrsts();

}

/**
* @brief   Update synflood by ID
*
* Update operation of resource: synflood*
*
* @param[in] name ID of name
* @param[in] value synfloodbody object
*
* Responses:
*
*/
void
update_synflood_by_id(const std::string &name, const SynfloodJsonObject &value) {
  auto synflood = get_cube(name);

  return synflood->update(value);
}

/**
* @brief   Update synflood by ID
*
* Update operation of resource: synflood*
*
* @param[in] value synfloodbody object
*
* Responses:
*
*/
void
update_synflood_list_by_id(const std::vector<SynfloodJsonObject> &value) {
  throw std::runtime_error("Method not supported");
}



/*
 * help related
 */


}

}
}
}
