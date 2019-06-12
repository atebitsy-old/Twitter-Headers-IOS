//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterMomentSubscriber-Protocol.h>

@class NSString, TFNTwitterAccount;

@interface TFNTwitterAPIMomentSubscriber : NSObject <TFNTwitterMomentSubscriber>
{
    TFNTwitterAccount *_account;
}

+ (void)initialize;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)unsubscribeToMomentID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)subscribeToMomentID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
