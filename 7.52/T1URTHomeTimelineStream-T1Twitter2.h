//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1URTHomeTimelineStream.h>

#import <T1Twitter/TFNTwitterInjectableHomeTimelineStream-Protocol.h>

@interface T1URTHomeTimelineStream (T1Twitter2) <TFNTwitterInjectableHomeTimelineStream>
- (void)attemptToInsertStreamObject:(id)arg1 belowExistingStreamObject:(id)arg2 withRelationship:(long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)canInsertBelowExistingStreamObject:(id)arg1;
- (void)addRetweetedStatusIfNeeded:(id)arg1;
- (void)addStreamObject:(id)arg1;
@end
