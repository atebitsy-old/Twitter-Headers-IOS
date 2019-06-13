//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFNDirectMessageUser-Protocol.h>

@class NSNumber, NSString, TFNDirectMessageUser, TFSModelContext, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterUserReference;

@interface TFNDirectMessageCachedUser : NSObject <TFNDirectMessageUser, NSCoding>
{
    TFNDirectMessageUser *_directMessageUser;
    long long _userID;
    NSNumber *_userIDNumber;
    TFSModelContext *_modelContext;
    id _userObserver;
}

@property(retain, nonatomic) id userObserver; // @synthesize userObserver=_userObserver;
@property(retain, nonatomic) TFSModelContext *modelContext; // @synthesize modelContext=_modelContext;
@property(readonly, nonatomic) NSNumber *userIDNumber; // @synthesize userIDNumber=_userIDNumber;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(readonly, nonatomic) _Bool blocking;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, nonatomic) _Bool protectedUser;
@property(readonly, nonatomic) _Bool followRequestSent;
@property(readonly, nonatomic) _Bool following;
@property(readonly, copy, nonatomic) TFSTwitterEntitySet *bioEntities;
@property(readonly, copy, nonatomic) NSString *bio;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) TFNDirectMessageUser *directMessageUser; // @synthesize directMessageUser=_directMessageUser;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUserID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
