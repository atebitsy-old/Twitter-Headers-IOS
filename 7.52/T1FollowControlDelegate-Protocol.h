//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, T1FollowControl, UIEvent;

@protocol T1FollowControlDelegate <NSObject>

@optional
- (_Bool)followControlShouldUpdateHomeTimelineOnUnfollow:(T1FollowControl *)arg1;
- (void)followControlNeedsLayout:(T1FollowControl *)arg1;
- (void)followControl:(T1FollowControl *)arg1 didPerformAction:(unsigned long long)arg2 success:(_Bool)arg3 error:(NSError *)arg4;
- (void)followControl:(T1FollowControl *)arg1 willPerformAction:(unsigned long long)arg2 event:(UIEvent *)arg3;
- (_Bool)followControl:(T1FollowControl *)arg1 shouldPerformAction:(unsigned long long)arg2;
@end

