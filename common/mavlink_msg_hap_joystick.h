#pragma once
// MESSAGE HAP_JOYSTICK PACKING

#define MAVLINK_MSG_ID_HAP_JOYSTICK 12916


typedef struct __mavlink_hap_joystick_t {
 uint32_t time_boot_s; /*< [s] Timestamp (time since system boot).*/
 float roll;     /*<  joystick_axis[0]*/
 float pitch;    /*<  joystick_axis[1]*/
 float throttle; /*<  throttle_axis[3]*/
 float rudder;   /*<  rudder_axis[2]*/
} mavlink_hap_joystick_t;

#define MAVLINK_MSG_ID_HAP_JOYSTICK_LEN 20
#define MAVLINK_MSG_ID_HAP_JOYSTICK_MIN_LEN 20
#define MAVLINK_MSG_ID_12916_LEN 20
#define MAVLINK_MSG_ID_12916_MIN_LEN 20

#define MAVLINK_MSG_ID_HAP_JOYSTICK_CRC 246
#define MAVLINK_MSG_ID_12916_CRC 246

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HAP_JOYSTICK { \
    12916, \
    "HAP_JOYSTICK", \
    5, \
    {  { "time_boot_s", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_hap_joystick_t, time_boot_s) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_hap_joystick_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hap_joystick_t, pitch) }, \
         { "throttle", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hap_joystick_t, throttle) }, \
         { "rudder", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hap_joystick_t, rudder) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HAP_JOYSTICK { \
    "HAP_JOYSTICK", \
    5, \
    {  { "time_boot_s", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_hap_joystick_t, time_boot_s) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_hap_joystick_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hap_joystick_t, pitch) }, \
         { "throttle", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hap_joystick_t, throttle) }, \
         { "rudder", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hap_joystick_t, rudder) }, \
         } \
}
#endif

/**
 * @brief Pack a hap_joystick message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_s [s] Timestamp (time since system boot).
 * @param roll  joystick_axis[0]
 * @param pitch  joystick_axis[1]
 * @param throttle  throttle_axis[3]
 * @param rudder  rudder_axis[2]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hap_joystick_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_s, float roll, float pitch, float throttle, float rudder)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HAP_JOYSTICK_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_s);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, throttle);
    _mav_put_float(buf, 16, rudder);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN_LEN);
#else
    mavlink_hap_joystick_t packet;
    packet.time_boot_s = time_boot_s;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.throttle = throttle;
    packet.rudder = rudder;
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HAP_JOYSTICK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HAP_JOYSTICK_MIN_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_CRC);
}

/**
 * @brief Pack a hap_joystick message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_s [s] Timestamp (time since system boot).
 * @param roll
 * @param pitch
 * @param throttle
 * @param rudder
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hap_joystick_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                               uint32_t time_boot_s,float roll,float pitch,float throttle,float rudder)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HAP_JOYSTICK_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_s);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, throttle);
    _mav_put_float(buf, 16, rudder);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN);
#else
    mavlink_hap_joystick_t packet;
    packet.time_boot_s = time_boot_s;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.throttle = throttle;
    packet.rudder = rudder;
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HAP_JOYSTICK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HAP_JOYSTICK_MIN_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_CRC);
}

/**
 * @brief Encode a hap_joystick struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hap_joystick C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hap_joystick_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hap_joystick_t* hap_joystick)
{
    return mavlink_msg_hap_joystick_pack(system_id, component_id, msg, hap_joystick->time_boot_s, hap_joystick->roll, hap_joystick->pitch, hap_joystick->throttle, hap_joystick->rudder);
}

/**
 * @brief Encode a hap_joystick struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hap_joystick C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hap_joystick_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hap_joystick_t* hap_joystick)
{
    return mavlink_msg_hap_joystick_pack_chan(system_id, component_id, chan, msg, hap_joystick->time_boot_s, hap_joystick->roll, hap_joystick->pitch, hap_joystick->throttle, hap_joystick->rudder);
}

/**
 * @brief Send a hap_joystick message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_s [s] Timestamp (time since system boot).
 * @param roll  joystick_axis[0]
 * @param pitch  joystick_axis[1]
 * @param throttle  thottle_axis[3]
 * @param rudder  rudder_axis[2]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hap_joystick_send(mavlink_channel_t chan, uint32_t time_boot_s, float roll, float pitch, float throttle, float rudder)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HAP_JOYSTICK_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_s);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, throttle);
    _mav_put_float(buf, 16, rudder);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HAP_JOYSTICK, buf, MAVLINK_MSG_ID_HAP_JOYSTICK_MIN_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_CRC);
#else
    mavlink_hap_joystick_t packet;
    packet.time_boot_s = time_boot_s;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.throttle = throttle;
    packet.rudder = rudder;
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HAP_JOYSTICK, (const char *)&packet, MAVLINK_MSG_ID_HAP_JOYSTICK_MIN_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_CRC);
#endif
}

/**
 * @brief Send a hap_joystick message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hap_joystick_send_struct(mavlink_channel_t chan, const mavlink_hap_joystick_t* hap_joystick)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hap_joystick_send(chan, hap_joystick->time_boot_s, hap_joystick->roll, hap_joystick->pitch, hap_joystick->throttle, hap_joystick->rudder);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_hap_joystick, (const char *)hap_joystick, MAVLINK_MSG_ID_HAP_JOYSTICK_MIN_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_CRC);
#endif
}

#if MAVLINK_MSG_ID_HAP_JOYSTICK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hap_joystick_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_s, float roll, float pitch, float throttle, float rudder)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_s);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, throttle);
    _mav_put_float(buf, 16, rudder);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HAP_JOYSTICK, buf, MAVLINK_MSG_ID_HAP_JOYSTICK_MIN_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_CRC);
#else
    mavlink_hap_joystick_t *packet = (mavlink_hap_joystick_t *)msgbuf;
    packet->time_boot_s = time_boot_s;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->throttle = throttle;
    packet->rudder = rudder;
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HAP_JOYSTICK, (const char *)packet, MAVLINK_MSG_ID_HAP_JOYSTICK_MIN_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN, MAVLINK_MSG_ID_HAP_JOYSTICK_CRC);
#endif
}
#endif

#endif

// MESSAGE HAP_JOYSTICK UNPACKING


/**
 * @brief Get field time_boot_s from hap_joystick message
 *
 * @return [s] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_hap_joystick_get_time_boot_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field roll from hap_joystick message
 *
 * @return  joystick_axis[0]
 */
static inline float mavlink_msg_hap_joystick_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch from hap_joystick message
 *
 * @return  joystick_axis[1]
 */
static inline float mavlink_msg_hap_joystick_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field throttle from hap_joystick message
 *
 * @return  throttle_axis[3]
 */
static inline float mavlink_msg_hap_joystick_get_throttle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rudder from hap_joystick message
 *
 * @return  rudder_axis[2]
 */
static inline float mavlink_msg_hap_joystick_get_rudder(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a hap_joystick message into a struct
 *
 * @param msg The message to decode
 * @param hap_joystick C-struct to decode the message contents into
 */
static inline void mavlink_msg_hap_joystick_decode(const mavlink_message_t* msg, mavlink_hap_joystick_t* hap_joystick)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hap_joystick->time_boot_s = mavlink_msg_hap_joystick_get_time_boot_s(msg);
    hap_joystick->roll = mavlink_msg_hap_joystick_get_roll(msg);
    hap_joystick->pitch = mavlink_msg_hap_joystick_get_pitch(msg);
    hap_joystick->throttle = mavlink_msg_hap_joystick_get_throttle(msg);
    hap_joystick->rudder = mavlink_msg_hap_joystick_get_rudder(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HAP_JOYSTICK_LEN? msg->len : MAVLINK_MSG_ID_HAP_JOYSTICK_LEN;
        memset(hap_joystick, 0, MAVLINK_MSG_ID_HAP_JOYSTICK_LEN);
    memcpy(hap_joystick, _MAV_PAYLOAD(msg), len);
#endif
}
