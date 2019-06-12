//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterScribeImpressionCache-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface T1ScribeImpressionCache : NSObject <TFNTwitterScribeImpressionCache, TFSPlistSerialization>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableOrderedSet *_cacheEntries;
    NSMutableDictionary *_duplicateCountByContentID;
    NSString *_lastSentEntryID;
}

@property(retain, nonatomic) NSString *lastSentEntryID; // @synthesize lastSentEntryID=_lastSentEntryID;
@property(retain, nonatomic) NSMutableDictionary *duplicateCountByContentID; // @synthesize duplicateCountByContentID=_duplicateCountByContentID;
@property(retain, nonatomic) NSMutableOrderedSet *cacheEntries; // @synthesize cacheEntries=_cacheEntries;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
- (long long)_tfn_accessQueue_incrementCountForContentID:(id)arg1 byAmount:(long long)arg2;
- (void)_tfn_accessQueue_checkCacheSizeAndResetDuplicateCounts;
- (id)_tfn_entriesFromPlistDictionary:(id)arg1;
- (id)entryWithEntryID:(id)arg1 contentID:(id)arg2 impressionDuration:(unsigned long long)arg3;
- (void)removeAllEntries;
- (id)seenIDsForContentIDPrefix:(id)arg1 sinceLastInvocation:(_Bool)arg2 maxCount:(unsigned long long)arg3;
- (id)lastNContentIDs:(unsigned long long)arg1 sinceLastEntryID:(id)arg2 newLastEntryIDPointer:(id *)arg3;
- (long long)countForContentID:(id)arg1;
- (_Bool)containsEntry:(id)arg1 withMinImpressionDuration:(unsigned long long)arg2;
- (long long)countForContentIDAfterAddingOrUpdatingEntry:(id)arg1;
- (id)plistDictionaryValue;
- (id)initWithCacheEntries:(id)arg1 lastSentEntryID:(id)arg2;
- (id)init;
- (id)initWithPlistDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
