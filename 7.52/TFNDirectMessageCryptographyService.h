//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNDirectMessageLoadRegistrationOperationDelegate-Protocol.h>
#import <T1Twitter/TFNDirectMessageSynchronizeKeyRegistryStateOperationDelegate-Protocol.h>

@class NSDate, NSHashTable, NSNumber, NSOperationQueue, NSString, TFNDirectMessageCreateAndRegisterEncryptionKeysOperation, TFNDirectMessageDeactivateEncryptionOperation, TFNDirectMessageLoadRegistrationDataOperation, TFNDirectMessageReplenishPreKeysOperation, TFNDirectMessageRotateSignedPreKeyOperation, TFNDirectMessageSynchronizeKeyRegistryStateOperation, TSPIdentityKey, TSPSession;

@interface TFNDirectMessageCryptographyService : NSObject <TFNDirectMessageLoadRegistrationOperationDelegate, TFNDirectMessageSynchronizeKeyRegistryStateOperationDelegate>
{
    TFNDirectMessageLoadRegistrationDataOperation *_setupOperation;
    NSString *_accountID;
    long long _userID;
    NSOperationQueue *_queue;
    TSPSession *_session;
    NSNumber *_registrationID;
    TSPIdentityKey *_identityKey;
    NSDate *_signedPreKeyLastUpdated;
    TFNDirectMessageCreateAndRegisterEncryptionKeysOperation *_currentRegisterOperation;
    TFNDirectMessageReplenishPreKeysOperation *_currentReplenishPreKeysOperation;
    TFNDirectMessageRotateSignedPreKeyOperation *_currentRotateSignedPreKeyOperation;
    TFNDirectMessageDeactivateEncryptionOperation *_currentDeactivateOperation;
    TFNDirectMessageSynchronizeKeyRegistryStateOperation *_currentSynchronizeStateOperation;
    NSHashTable *_observers;
}

+ (id)testCryptographyService;
+ (void)invalidateServiceWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak TFNDirectMessageSynchronizeKeyRegistryStateOperation *currentSynchronizeStateOperation; // @synthesize currentSynchronizeStateOperation=_currentSynchronizeStateOperation;
@property(nonatomic) __weak TFNDirectMessageDeactivateEncryptionOperation *currentDeactivateOperation; // @synthesize currentDeactivateOperation=_currentDeactivateOperation;
@property(nonatomic) __weak TFNDirectMessageRotateSignedPreKeyOperation *currentRotateSignedPreKeyOperation; // @synthesize currentRotateSignedPreKeyOperation=_currentRotateSignedPreKeyOperation;
@property(nonatomic) __weak TFNDirectMessageReplenishPreKeysOperation *currentReplenishPreKeysOperation; // @synthesize currentReplenishPreKeysOperation=_currentReplenishPreKeysOperation;
@property(nonatomic) __weak TFNDirectMessageCreateAndRegisterEncryptionKeysOperation *currentRegisterOperation; // @synthesize currentRegisterOperation=_currentRegisterOperation;
@property(retain) NSDate *signedPreKeyLastUpdated; // @synthesize signedPreKeyLastUpdated=_signedPreKeyLastUpdated;
@property(retain) TSPIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
@property(retain) NSNumber *registrationID; // @synthesize registrationID=_registrationID;
@property(readonly, nonatomic) TSPSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)private_notifyObserversOfActiveKeyRegistryState;
- (void)private_didCompleteDeactivationAttemptWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)private_didCompleteRegistrationAttemptWithResult:(id)arg1;
- (void)private_didCompleteRotateSignedPreKeyAttemptWithResult:(id)arg1;
- (void)private_didCompleteReplenishPreKeyAttemptWithResult:(id)arg1;
- (void)private_scheduleSyncOperationWithRemoteKeyState:(id)arg1;
- (void)attemptDeactivationForSynchronizeKeyRegistryStateOperation:(id)arg1;
- (void)attemptSignedPreKeyRotationForSynchronizeKeyRegistryStateOperation:(id)arg1;
- (void)attemptPreKeyReplenishmentForSynchronizeKeyRegistryStateOperation:(id)arg1;
- (void)attemptRegistrationForSynchronizeKeyRegistryStateOperation:(id)arg1 unlessAlreadyPrompted:(_Bool)arg2;
- (void)loadRegistrationDataOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)loadRegistrationDataOperation:(id)arg1 didSucceedWithRegistrationID:(id)arg2 identityKey:(id)arg3 signedPreKeyLastUpdated:(id)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)synchronizeWithRemoteKeyRegistryState:(id)arg1;
- (void)saveDeviceID:(id)arg1 identityKey:(id)arg2 forConversationID:(id)arg3 asTrustedIdentity:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)lookupTrustedIdentityForConversationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lookupFingerprintForConversationID:(id)arg1 recipientUserID:(long long)arg2 recipientDeviceID:(id)arg3 recipientIdentityKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)decryptText:(id)arg1 messageID:(long long)arg2 conversationID:(id)arg3 senderDeviceID:(id)arg4 outgoingPlaintextByEncryptedText:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)makeEncryptOperationForMessageText:(id)arg1 conversationID:(id)arg2 recipientUserID:(long long)arg3 recipientDeviceID:(id)arg4;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteMessagesWithConversationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteMessageWithMessageID:(long long)arg1 conversationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rotateSignedPreKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)replenishPreKeysWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) TFNDirectMessageLoadRegistrationDataOperation *setupOperation; // @synthesize setupOperation=_setupOperation;
@property unsigned long long keyRegistryStatus;
@property(readonly, nonatomic) _Bool registrationInProgress;
- (id)initWithAccountID:(id)arg1 userID:(long long)arg2;

@end

