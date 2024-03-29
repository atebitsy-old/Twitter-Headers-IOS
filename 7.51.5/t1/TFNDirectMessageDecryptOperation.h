//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class NSDictionary, NSError, NSString, TSPSession;

@interface TFNDirectMessageDecryptOperation : TFSConcurrentOperation
{
    long long _messageID;
    NSString *_conversationID;
    NSString *_deviceID;
    NSString *_ciphertext;
    NSDictionary *_outgoingPlaintextByEncryptedText;
    TSPSession *_session;
    CDUnknownBlockType _completion;
    NSString *_plaintext;
    NSError *_error;
}

@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSString *plaintext; // @synthesize plaintext=_plaintext;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) TSPSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSDictionary *outgoingPlaintextByEncryptedText; // @synthesize outgoingPlaintextByEncryptedText=_outgoingPlaintextByEncryptedText;
@property(readonly, copy, nonatomic) NSString *ciphertext; // @synthesize ciphertext=_ciphertext;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, nonatomic) long long messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (void)private_completeWithError:(id)arg1;
- (void)private_completeWithPlaintext:(id)arg1;
- (void)completeOperation;
- (void)run;
- (id)initWithSignalProtocolSession:(id)arg1 messageID:(long long)arg2 conversationID:(id)arg3 deviceID:(id)arg4 ciphertext:(id)arg5 outgoingPlaintextByEncryptedText:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

