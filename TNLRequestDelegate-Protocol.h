//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TNLRequestAuthenticationChallengeHandler-Protocol.h>
#import <T1Twitter/TNLRequestAuthorizer-Protocol.h>
#import <T1Twitter/TNLRequestEventHandler-Protocol.h>
#import <T1Twitter/TNLRequestHydrater-Protocol.h>
#import <T1Twitter/TNLRequestRedirecter-Protocol.h>

@class NSObject, TNLRequestOperation;
@protocol OS_dispatch_queue;

@protocol TNLRequestDelegate <TNLRequestAuthorizer, TNLRequestEventHandler, TNLRequestHydrater, TNLRequestRedirecter, TNLRequestAuthenticationChallengeHandler>

@optional
- (NSObject<OS_dispatch_queue> *)tnl_completionQueueForRequestOperation:(TNLRequestOperation *)arg1;
- (NSObject<OS_dispatch_queue> *)tnl_delegateQueueForRequestOperation:(TNLRequestOperation *)arg1;
@end
