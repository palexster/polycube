/**
* synflood API generated from synflood.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* StatsJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace polycube {
namespace service {
namespace model {


/// <summary>
///
/// </summary>
class  StatsJsonObject : public JsonObjectBase {
public:
  StatsJsonObject();
  StatsJsonObject(const nlohmann::json &json);
  ~StatsJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Number of failed TCP connections
  /// </summary>
  std::string getTcpattemptfails() const;
  void setTcpattemptfails(std::string value);
  bool tcpattemptfailsIsSet() const;
  void unsetTcpattemptfails();

  /// <summary>
  /// Number of TCP segments sent, containing the RST flag
  /// </summary>
  std::string getTcpoutrsts() const;
  void setTcpoutrsts(std::string value);
  bool tcpoutrstsIsSet() const;
  void unsetTcpoutrsts();

  /// <summary>
  /// Ratio between the number of IP pkts delivered to application protocols and the total number of received pkts
  /// </summary>
  std::string getDeliverratio() const;
  void setDeliverratio(std::string value);
  bool deliverratioIsSet() const;
  void unsetDeliverratio();

  /// <summary>
  /// Ratio between the number of IP pkts requests to send by application protocols and the total number of received pkts
  /// </summary>
  std::string getResponseratio() const;
  void setResponseratio(std::string value);
  bool responseratioIsSet() const;
  void unsetResponseratio();

  /// <summary>
  /// last update (time from epoch in milliseconds)
  /// </summary>
  uint64_t getLastupdate() const;
  void setLastupdate(uint64_t value);
  bool lastupdateIsSet() const;
  void unsetLastupdate();

private:
  std::string m_tcpattemptfails;
  bool m_tcpattemptfailsIsSet;
  std::string m_tcpoutrsts;
  bool m_tcpoutrstsIsSet;
  std::string m_deliverratio;
  bool m_deliverratioIsSet;
  std::string m_responseratio;
  bool m_responseratioIsSet;
  uint64_t m_lastupdate;
  bool m_lastupdateIsSet;
};

}
}
}
