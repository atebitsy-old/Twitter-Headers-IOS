//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, TFNTwitterAccount;

@interface T1DirectMessageParticipantValidator : NSObject
{
    _Bool _encryptedDM;
    _Bool _skipValidationForHydratedUserReferences;
    NSSet *_existingUserReferences;
    TFNTwitterAccount *_account;
    NSMutableDictionary *_permissionCacheByUserID;
    NSMutableDictionary *_permissionCacheByUsername;
}

@property(readonly, nonatomic) NSMutableDictionary *permissionCacheByUsername; // @synthesize permissionCacheByUsername=_permissionCacheByUsername;
@property(readonly, nonatomic) NSMutableDictionary *permissionCacheByUserID; // @synthesize permissionCacheByUserID=_permissionCacheByUserID;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) _Bool skipValidationForHydratedUserReferences; // @synthesize skipValidationForHydratedUserReferences=_skipValidationForHydratedUserReferences;
@property(readonly, nonatomic) _Bool encryptedDM; // @synthesize encryptedDM=_encryptedDM;
@property(readonly, copy, nonatomic) NSSet *existingUserReferences; // @synthesize existingUserReferences=_existingUserReferences;
- (void).cxx_destruct;
- (long long)countOfExistingUserReferencesAndSelectedUserReferences:(id)arg1;
- (void)_didReceivePermission:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)_permissionsRequestWithUserReference:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)_processPermission:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)validateUserReference:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)initWithExistingUserReferences:(id)arg1 encryptedDM:(_Bool)arg2 skipValidationForHydratedUserReferences:(_Bool)arg3 account:(id)arg4;
- (id)initWithExistingUserReferences:(id)arg1 account:(id)arg2;
- (id)init;

@end

