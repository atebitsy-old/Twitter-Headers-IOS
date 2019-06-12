//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TFNTwitterMomentSportEventUpdateStore : NSObject
{
    NSMutableDictionary *_eventUpdateMap;
    NSObject<OS_dispatch_queue> *_eventUpdateMapAccessQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventUpdateMapAccessQueue; // @synthesize eventUpdateMapAccessQueue=_eventUpdateMapAccessQueue;
@property(retain, nonatomic) NSMutableDictionary *eventUpdateMap; // @synthesize eventUpdateMap=_eventUpdateMap;
- (void).cxx_destruct;
- (id)_entryForEventID:(id)arg1;
- (id)filterEventIDsWithExpiredTTLs:(id)arg1;
- (void)storeEventUpdates:(id)arg1 date:(id)arg2;
- (id)updateForEventID:(id)arg1;
- (id)init;

@end
