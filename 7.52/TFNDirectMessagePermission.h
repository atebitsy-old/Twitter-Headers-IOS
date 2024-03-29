//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TFNDirectMessageUser;

@interface TFNDirectMessagePermission : NSObject
{
    _Bool _canDM;
    id <TFNDirectMessageUser> _user;
    long long _canDMFailure;
}

+ (long long)_permissionFailureFromErrorCode:(unsigned long long)arg1;
@property(readonly, nonatomic) long long canDMFailure; // @synthesize canDMFailure=_canDMFailure;
@property(readonly, nonatomic) _Bool canDM; // @synthesize canDM=_canDM;
@property(readonly, nonatomic) id <TFNDirectMessageUser> user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)initWithUserID:(long long)arg1 jsonDictionary:(id)arg2 userCache:(id)arg3;
- (id)init;

@end

