//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFSTwitterPushNotificationPayload;

@protocol T1PushNotificationRoute <NSObject>
- (void)ambientNotificationForPayload:(TFSTwitterPushNotificationPayload *)arg1 completionBlock:(void (^)(T1AmbientNotification *))arg2;
- (void)handlePushPayload:(TFSTwitterPushNotificationPayload *)arg1 context:(long long)arg2;
- (void)willRoutePushPayload:(TFSTwitterPushNotificationPayload *)arg1 context:(long long)arg2;
@end

