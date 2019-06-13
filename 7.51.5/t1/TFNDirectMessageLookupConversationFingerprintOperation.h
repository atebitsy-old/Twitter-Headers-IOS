//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class NSString, TSPSession;

@interface TFNDirectMessageLookupConversationFingerprintOperation : TFSConcurrentOperation
{
    NSString *_conversationID;
    long long _localUserID;
    long long _recipientUserID;
    NSString *_recipientDeviceID;
    NSString *_recipientIdentityKey;
    TSPSession *_session;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) TSPSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *recipientIdentityKey; // @synthesize recipientIdentityKey=_recipientIdentityKey;
@property(readonly, copy, nonatomic) NSString *recipientDeviceID; // @synthesize recipientDeviceID=_recipientDeviceID;
@property(readonly, nonatomic) long long recipientUserID; // @synthesize recipientUserID=_recipientUserID;
@property(readonly, nonatomic) long long localUserID; // @synthesize localUserID=_localUserID;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (void)private_didLoadFingerprintWithSuccess:(_Bool)arg1 fingerprint:(id)arg2 error:(id)arg3;
- (void)run;
- (id)initWithConversationID:(id)arg1 localUserID:(long long)arg2 recipientUserID:(long long)arg3 recipientDeviceID:(id)arg4 recipientIdentityKey:(id)arg5 signalProtocolSession:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end
