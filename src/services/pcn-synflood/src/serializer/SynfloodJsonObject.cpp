/**
* synflood API generated from synflood.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "SynfloodJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

SynfloodJsonObject::SynfloodJsonObject() {
  m_nameIsSet = false;
  m_statsIsSet = false;
}

SynfloodJsonObject::SynfloodJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_statsIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("stats")) {
    if (!val["stats"].is_null()) {
      StatsJsonObject newItem { val["stats"] };
      setStats(newItem);
    }
  }
}

nlohmann::json SynfloodJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  if (m_statsIsSet) {
    val["stats"] = JsonObjectBase::toJson(m_stats);
  }

  return val;
}

std::string SynfloodJsonObject::getName() const {
  return m_name;
}

void SynfloodJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool SynfloodJsonObject::nameIsSet() const {
  return m_nameIsSet;
}



StatsJsonObject SynfloodJsonObject::getStats() const {
  return m_stats;
}

void SynfloodJsonObject::setStats(StatsJsonObject value) {
  m_stats = value;
  m_statsIsSet = true;
}

bool SynfloodJsonObject::statsIsSet() const {
  return m_statsIsSet;
}

void SynfloodJsonObject::unsetStats() {
  m_statsIsSet = false;
}


}
}
}
