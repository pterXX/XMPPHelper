//
//  IMXMPPHeader.h
//  XMPPHelper
//
//  Created by admin on 2019/3/25.
//  Copyright © 2019 admin. All rights reserved.
//

#ifndef IMXMPPHeader_h
#define IMXMPPHeader_h

#ifdef __OBJC__

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "DDLog.h"

#endif



#ifdef DEBUG

static const int ddLogLevel = LOG_LEVEL_VERBOSE;

#else

static const int ddLogLevel = LOG_LEVEL_WARN;

#endif



#pragma mark - 消息枚举
typedef NS_OPTIONS(NSInteger, IMConversationCommonNotification) {
    IMConversationCommonNotificationMail,              // 接收到邮件
    IMConversationCommonNotificationUpdateBedgeNumber, // 更新选中行的未读消息数
    IMConversationCommonNotificationReceiveMessage,    // 收到消息
    IMConversationCommonNotificationNetworkConnectionStatus, // 网络连接状态
    IMConversationCommonNotificationNetworkStatus,     // 网络状态
    IMConversationCommonNotificationEnterForeground    // 从后台进入前台
};

/*
 消息类型
 */
typedef NS_OPTIONS(NSInteger, IMMessageType) {
    IMMessageTypeNone = -1,   // 头部 其他
    IMMessageTypeText = 0,    // 文字消息  包含表情
    IMMessageTypeVoice,       // 语音消息
    IMMessageTypeImage,       // 图片消息
    IMMessageTypeMail,        // 邮件消息
    IMMessageTypeVideo,       // 视频消息
    IMMessageTypeFile,        // 文件消息
    IMMessageTypeLocation,    // 位置消息
    IMMessageTypeCard         // 名片消息
};

/*
 消息发送方
 */
typedef NS_OPTIONS(NSUInteger, IMMessageSenderType) {
    IMMessageSenderTypeSender = 0,    // 发送方
    IMMessageSenderTypeReceiver       // 接收方
};

/*
 消息发送状态
 */
typedef NS_OPTIONS(NSUInteger, IMMessageSendStatus) {
    IMMessageSendStatusSendSuccess = 0,        // 发送成功
    IMMessageSendStatusSendFailure,            // 发送失败
    IMMessageSendStatusSending                 // 正在发送
};

/*
 消息接收状态
 */
typedef NS_OPTIONS(NSUInteger, IMMessageReadStatus) {
    IMMessageReadStatusRead = 0,  // 消息已读
    IMMessageReadStatusUnRead     // 消息未读
};

/**
 聊天室
 */
typedef NS_OPTIONS(NSInteger, IMMessageChatType) {
    IMMessageChatTypeSingle = 0,  // 单聊
    IMMessageChatTypeGroup,       // 群聊
    IMMessageChatTypeFTP,         // 文件传输
    IMMessageChatTypeVisitor      // 游客
};

#endif /* IMXMPPHeader_h */
