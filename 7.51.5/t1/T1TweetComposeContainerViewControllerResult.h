//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1TweetComposeContainerViewControllerResult : NSObject
{
    _Bool _sendingTweetsAttempted;
    _Bool _liveBroadcasted;
}

@property(readonly, nonatomic, getter=isLiveBroadcasted) _Bool liveBroadcasted; // @synthesize liveBroadcasted=_liveBroadcasted;
@property(readonly, nonatomic, getter=isSendingTweetsAttempted) _Bool sendingTweetsAttempted; // @synthesize sendingTweetsAttempted=_sendingTweetsAttempted;
- (id)initWithSendingTweetsAttempted:(_Bool)arg1 liveBroadcasted:(_Bool)arg2;
- (id)init;

@end
