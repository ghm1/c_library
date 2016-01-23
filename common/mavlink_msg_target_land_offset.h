// MESSAGE TARGET_LAND_OFFSET PACKING

#define MAVLINK_MSG_ID_TARGET_LAND_OFFSET 162

typedef struct __mavlink_target_land_offset_t
{
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float x; /*< x offset to target in vehicle NED frame in m*/
 float y; /*< y offset to target in vehicle NED frame in m*/
 float z; /*< z offset to target in vehicle NED frame in m*/
 float yaw; /*< yaw offset to target in vehicle NED frame in radians*/
} mavlink_target_land_offset_t;

#define MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN 24
#define MAVLINK_MSG_ID_162_LEN 24

#define MAVLINK_MSG_ID_TARGET_LAND_OFFSET_CRC 233
#define MAVLINK_MSG_ID_162_CRC 233



#define MAVLINK_MESSAGE_INFO_TARGET_LAND_OFFSET { \
	"TARGET_LAND_OFFSET", \
	5, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_target_land_offset_t, time_usec) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_target_land_offset_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_target_land_offset_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_target_land_offset_t, z) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_target_land_offset_t, yaw) }, \
         } \
}


/**
 * @brief Pack a target_land_offset message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x x offset to target in vehicle NED frame in m
 * @param y y offset to target in vehicle NED frame in m
 * @param z z offset to target in vehicle NED frame in m
 * @param yaw yaw offset to target in vehicle NED frame in radians
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_target_land_offset_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, float x, float y, float z, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#else
	mavlink_target_land_offset_t packet;
	packet.time_usec = time_usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TARGET_LAND_OFFSET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif
}

/**
 * @brief Pack a target_land_offset message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x x offset to target in vehicle NED frame in m
 * @param y y offset to target in vehicle NED frame in m
 * @param z z offset to target in vehicle NED frame in m
 * @param yaw yaw offset to target in vehicle NED frame in radians
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_target_land_offset_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,float x,float y,float z,float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#else
	mavlink_target_land_offset_t packet;
	packet.time_usec = time_usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TARGET_LAND_OFFSET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif
}

/**
 * @brief Encode a target_land_offset struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param target_land_offset C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_target_land_offset_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_target_land_offset_t* target_land_offset)
{
	return mavlink_msg_target_land_offset_pack(system_id, component_id, msg, target_land_offset->time_usec, target_land_offset->x, target_land_offset->y, target_land_offset->z, target_land_offset->yaw);
}

/**
 * @brief Encode a target_land_offset struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_land_offset C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_target_land_offset_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_target_land_offset_t* target_land_offset)
{
	return mavlink_msg_target_land_offset_pack_chan(system_id, component_id, chan, msg, target_land_offset->time_usec, target_land_offset->x, target_land_offset->y, target_land_offset->z, target_land_offset->yaw);
}

/**
 * @brief Send a target_land_offset message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x x offset to target in vehicle NED frame in m
 * @param y y offset to target in vehicle NED frame in m
 * @param z z offset to target in vehicle NED frame in m
 * @param yaw yaw offset to target in vehicle NED frame in radians
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_target_land_offset_send(mavlink_channel_t chan, uint64_t time_usec, float x, float y, float z, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET, buf, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET, buf, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif
#else
	mavlink_target_land_offset_t packet;
	packet.time_usec = time_usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET, (const char *)&packet, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET, (const char *)&packet, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_target_land_offset_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float x, float y, float z, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET, buf, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET, buf, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif
#else
	mavlink_target_land_offset_t *packet = (mavlink_target_land_offset_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->yaw = yaw;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET, (const char *)packet, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_LAND_OFFSET, (const char *)packet, MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TARGET_LAND_OFFSET UNPACKING


/**
 * @brief Get field time_usec from target_land_offset message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_target_land_offset_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from target_land_offset message
 *
 * @return x offset to target in vehicle NED frame in m
 */
static inline float mavlink_msg_target_land_offset_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from target_land_offset message
 *
 * @return y offset to target in vehicle NED frame in m
 */
static inline float mavlink_msg_target_land_offset_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from target_land_offset message
 *
 * @return z offset to target in vehicle NED frame in m
 */
static inline float mavlink_msg_target_land_offset_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw from target_land_offset message
 *
 * @return yaw offset to target in vehicle NED frame in radians
 */
static inline float mavlink_msg_target_land_offset_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a target_land_offset message into a struct
 *
 * @param msg The message to decode
 * @param target_land_offset C-struct to decode the message contents into
 */
static inline void mavlink_msg_target_land_offset_decode(const mavlink_message_t* msg, mavlink_target_land_offset_t* target_land_offset)
{
#if MAVLINK_NEED_BYTE_SWAP
	target_land_offset->time_usec = mavlink_msg_target_land_offset_get_time_usec(msg);
	target_land_offset->x = mavlink_msg_target_land_offset_get_x(msg);
	target_land_offset->y = mavlink_msg_target_land_offset_get_y(msg);
	target_land_offset->z = mavlink_msg_target_land_offset_get_z(msg);
	target_land_offset->yaw = mavlink_msg_target_land_offset_get_yaw(msg);
#else
	memcpy(target_land_offset, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TARGET_LAND_OFFSET_LEN);
#endif
}
