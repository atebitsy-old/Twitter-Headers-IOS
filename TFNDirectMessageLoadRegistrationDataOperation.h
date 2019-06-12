//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class TFNDirectMessageLoadRegistrationDataResult, TSPSession;
@protocol TFNDirectMessageLoadRegistrationOperationDelegate;

@interface TFNDirectMessageLoadRegistrationDataOperation : TFSConcurrentOperation
{
    TSPSession *_session;
    id <TFNDirectMessageLoadRegistrationOperationDelegate> _delegate;
    TFNDirectMessageLoadRegistrationDataResult *_result;
}

@property(retain) TFNDirectMessageLoadRegistrationDataResult *result; // @synthesize result=_result;
@property __weak id <TFNDirectMessageLoadRegistrationOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TSPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)private_didLoadRegistrationDataWithSuccess:(_Bool)arg1 registrationID:(id)arg2 identityKey:(id)arg3 signedPreKeyLastUpdated:(id)arg4 error:(id)arg5;
- (void)run;
- (id)initWithSignalProtocolSession:(id)arg1;

@end
