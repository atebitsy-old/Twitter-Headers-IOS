//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString, TFNDirectMessageEncryptMessageWorkflowOperation;

@protocol TFNDirectMessageEncryptMessageWorkflowOperationDelegate
- (void)encryptMessageWorkflow:(TFNDirectMessageEncryptMessageWorkflowOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)encryptMessageWorkflow:(TFNDirectMessageEncryptMessageWorkflowOperation *)arg1 didSucceedWithEncryptedMessage:(NSString *)arg2;
- (void)encryptMessageWorkflow:(TFNDirectMessageEncryptMessageWorkflowOperation *)arg1 didLoadRecipientDeviceID:(NSString *)arg2 recipientIdentityKey:(NSString *)arg3;
@end

