//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol T1URTNotificationTimelineRefresherDelegate;

@interface T1URTNotificationTimelineRefresher : NSObject
{
    // Error parsing type: , name: account
    // Error parsing type: , name: updateTimelineBlock
    // Error parsing type: , name: updateTimelineFromPushBlock
    // Error parsing type: , name: updateTimelineFromAppDidBecomeActiveBlock
    // Error parsing type: , name: updateTimelineFromViewWillAppearBlock
    // Error parsing type: , name: dumpCache
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;
- (void)accountUserBlocksOrMutesDidUpdate:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)accountSettingsDidUpdate:(id)arg1;
- (void)advancedFiltersChanged:(id)arg1;
- (void)didReceivePush:(id)arg1;
- (void)viewWillAppear;
- (id)initWithAccount:(id)arg1 loadTop:(CDUnknownBlockType)arg2 dumpCache:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <T1URTNotificationTimelineRefresherDelegate> delegate; // @synthesize delegate;

@end
