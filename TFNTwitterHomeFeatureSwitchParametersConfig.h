//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterHomeFeatureSwitchParameters-Protocol.h>

@class NSArray, NSString;

@interface TFNTwitterHomeFeatureSwitchParametersConfig : NSObject <TFNTwitterHomeFeatureSwitchParameters>
{
    _Bool _progressiveAPIEnabled;
    _Bool _dedupingStatusIDsEnabled;
    _Bool _isClientDedupingUsingImpressionCacheEnabled;
    _Bool _latestHomeTimelineOptionAvailable;
    unsigned long long _homeRequestMaxSeenIDs;
    long long _progressiveAPISegmentSize;
    unsigned long long _clientDedupingMaxRecentCacheEntries;
    unsigned long long _clientDedupingMinimumModuleSize;
    NSArray *_clientDedupingSuggestTypesToRemove;
    NSArray *_clientDedupingSuggestTypesToKeep;
    double _homeTimelineBackgroundFetchUILaunchDelay;
}

@property(nonatomic, getter=isLatestHomeTimelineOptionAvailable) _Bool latestHomeTimelineOptionAvailable; // @synthesize latestHomeTimelineOptionAvailable=_latestHomeTimelineOptionAvailable;
@property(nonatomic) double homeTimelineBackgroundFetchUILaunchDelay; // @synthesize homeTimelineBackgroundFetchUILaunchDelay=_homeTimelineBackgroundFetchUILaunchDelay;
@property(retain, nonatomic) NSArray *clientDedupingSuggestTypesToKeep; // @synthesize clientDedupingSuggestTypesToKeep=_clientDedupingSuggestTypesToKeep;
@property(retain, nonatomic) NSArray *clientDedupingSuggestTypesToRemove; // @synthesize clientDedupingSuggestTypesToRemove=_clientDedupingSuggestTypesToRemove;
@property(nonatomic) unsigned long long clientDedupingMinimumModuleSize; // @synthesize clientDedupingMinimumModuleSize=_clientDedupingMinimumModuleSize;
@property(nonatomic) unsigned long long clientDedupingMaxRecentCacheEntries; // @synthesize clientDedupingMaxRecentCacheEntries=_clientDedupingMaxRecentCacheEntries;
@property(nonatomic) _Bool isClientDedupingUsingImpressionCacheEnabled; // @synthesize isClientDedupingUsingImpressionCacheEnabled=_isClientDedupingUsingImpressionCacheEnabled;
@property(nonatomic, getter=isDedupingStatusIDsEnabled) _Bool dedupingStatusIDsEnabled; // @synthesize dedupingStatusIDsEnabled=_dedupingStatusIDsEnabled;
@property(nonatomic) long long progressiveAPISegmentSize; // @synthesize progressiveAPISegmentSize=_progressiveAPISegmentSize;
@property(nonatomic, getter=isProgressiveAPIEnabled) _Bool progressiveAPIEnabled; // @synthesize progressiveAPIEnabled=_progressiveAPIEnabled;
@property(nonatomic) unsigned long long homeRequestMaxSeenIDs; // @synthesize homeRequestMaxSeenIDs=_homeRequestMaxSeenIDs;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
