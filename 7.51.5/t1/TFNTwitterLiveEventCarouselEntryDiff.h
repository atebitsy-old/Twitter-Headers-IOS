//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TFNTwitterLiveEventCarouselEntryDiff : NSObject
{
    NSArray *_insertedEntries;
    NSArray *_deletedEntries;
    NSArray *_updatedEntries;
}

+ (id)diffComparingEntries:(id)arg1 withEntries:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *updatedEntries; // @synthesize updatedEntries=_updatedEntries;
@property(readonly, copy, nonatomic) NSArray *deletedEntries; // @synthesize deletedEntries=_deletedEntries;
@property(readonly, copy, nonatomic) NSArray *insertedEntries; // @synthesize insertedEntries=_insertedEntries;
- (void).cxx_destruct;
- (id)initWithInsertedEntries:(id)arg1 deletedEntries:(id)arg2 updatedEntries:(id)arg3;

@end

