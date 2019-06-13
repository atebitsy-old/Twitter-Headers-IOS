//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString, TSPIdentityKey;

@interface TFNDirectMessageReplenishPreKeysResult : NSObject
{
    _Bool _success;
    NSString *_accountID;
    TSPIdentityKey *_identityKey;
    NSArray *_preKeys;
    NSError *_loadRegistrationDataError;
    NSError *_generatePreKeysError;
    NSError *_publishKeysError;
    NSError *_commitPreKeysError;
}

@property(readonly, nonatomic) NSError *commitPreKeysError; // @synthesize commitPreKeysError=_commitPreKeysError;
@property(readonly, nonatomic) NSError *publishKeysError; // @synthesize publishKeysError=_publishKeysError;
@property(readonly, nonatomic) NSError *generatePreKeysError; // @synthesize generatePreKeysError=_generatePreKeysError;
@property(readonly, nonatomic) NSError *loadRegistrationDataError; // @synthesize loadRegistrationDataError=_loadRegistrationDataError;
@property(readonly, copy, nonatomic) NSArray *preKeys; // @synthesize preKeys=_preKeys;
@property(readonly, nonatomic) TSPIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSuccess:(_Bool)arg1 accountID:(id)arg2 identityKey:(id)arg3 preKeys:(id)arg4 loadRegistrationDataError:(id)arg5 generatePreKeysError:(id)arg6 publishKeysError:(id)arg7 commitPreKeysError:(id)arg8;

@end
