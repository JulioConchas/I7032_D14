#include "protocol.h"

/*
* Author: Julio Conchas
* Email:  conchasjimenez@gmail.com
* Path:   libs/
* File:   protocol.cpp
*/

Protocol::Protocol(){
    ethType[0] = "08:00";
    ethType[1] = "08:06";
    ethType[2] = "08:42";
    ethType[3] = "22:F3";
    ethType[4] = "60:03";
    ethType[5] = "80:35";
    ethType[6] = "80:9B";
    ethType[7] = "80:F3";
    ethType[8] = "81:00";
    ethType[9] = "81:37";
    ethType[10] = "82:04";
    ethType[11] = "86:DD";
    ethType[12] = "88:08";
    ethType[13] = "88:19";
    ethType[14] = "88:47";
    ethType[15] = "88:48";
    ethType[16] = "88:63";
    ethType[17] = "88:64";
    ethType[18] = "88:70";
    ethType[19] = "88:7B";
    ethType[20] = "88:8E";
    ethType[21] = "88:92";
    ethType[22] = "88:9A";
    ethType[23] = "88:A2";
    ethType[24] = "88:A4";
    ethType[25] = "88:A8";
    ethType[26] = "88:AB";
    ethType[27] = "88:CC";
    ethType[28] = "88:CD";
    ethType[29] = "88:E1";
    ethType[30] = "88:E3";
    ethType[31] = "88:E5";
    ethType[32] = "88:E7";
    ethType[33] = "88:F7";
    ethType[34] = "89:02";
    ethType[35] = "89:06";
    ethType[36] = "89:14";
    ethType[37] = "89:15";
    ethType[38] = "89:1D";
    ethType[39] = "89:2F";
    ethType[40] = "90:00";

    str_protocol[0] = "Internet Protocol version 4 (IPv4)"; // Internet Protocol Version 4 (IPv4)
    str_protocol[1] = "Address Resolution Protocol (ARP)";
    str_protocol[2] = "Wake-on-LAN";
    str_protocol[3] = "IETF TRILL Protocol";
    str_protocol[4] = "DECnet Phase IV";
    str_protocol[5] = "Reverse Address Resolution Protocol";
    str_protocol[6] = "AppleTalk (Ethernetlk)";
    str_protocol[7] = "AppleTalk Address Resolution Protocol (AARP)";
    str_protocol[8] = "VLAN-tagged frame (IEEE 802.1Q) and Shortest Path Bridging IEEE 802.1aq";
    str_protocol[9] = "IPX";
    str_protocol[10] = "QNX Qnet";
    str_protocol[11] = "Internet Protocol version 6 (IPv6)";
    str_protocol[12] = "Ethernet flow control";
    str_protocol[13] = "CobraNet";
    str_protocol[14] = "MPLS unicast";
    str_protocol[15] = "MPLS multicast";
    str_protocol[16] = "PPPoE Discovery Stage";
    str_protocol[17] = "PPPoE Session Stage";
    str_protocol[18] = "Jumbo Frames (proposed)";
    str_protocol[19] = "HomePlug 1.0 MME";
    str_protocol[20] = "EAP over LAN (IEEE 802.1X)";
    str_protocol[21] = "PROFINET Protocol";
    str_protocol[22] = "HyperSCSI (SCSI over Ethernet)";
    str_protocol[23] = "ATA over Ethernet";
    str_protocol[24] = "EtherCAT Protocol";
    str_protocol[25] = "Provider Bridging (IEEE 802.1ad) & Shortest Path Bridging IEEE 802.1aq";
    str_protocol[26] = "Ethernet Powerlink";
    str_protocol[27] = "Link Layer Discovery Protocol (LLDP)";
    str_protocol[28] = "SERCOS III";
    str_protocol[29] = "HomePlug AV MME";
    str_protocol[30] = "Media Redundancy Protocol (IEC62439-2)";
    str_protocol[31] = "MAC security (IEEE 802.1AE)";
    str_protocol[32] = "Provider Backbone Bridges (PBB) (IEEE802.1ah)";
    str_protocol[33] = "Precision Time Protocol (PTP) over Ethernet(IEEE 1588)";
    str_protocol[34] = "IEEE 802.1ag Connectivity Fault Management (CFM) Protocol / ITU-T Recommendation Y.1731 (OAM)";
    str_protocol[35] = "Fibre Channel over Ethernet (FCoE)";
    str_protocol[36] = "FCoE Initialization Protocol";
    str_protocol[37] = "RDMA over Converged Ethernet (RoCE)";
    str_protocol[38] = "TTEthernet Protocol Control Frame (TTE)";
    str_protocol[39] = "High-availability Seamless Redundancy (HSR)";
    str_protocol[40] = "Ethernet Configuration Testing Protocol";
}

string Protocol::getProtocol(string p){
    string prot = "Protocolo no encontrado";
    for (int i = 0; i <= 40; i++) {
        if (p == ethType[i]) {
            return str_protocol[i];
        }
    }
    return prot;
}
