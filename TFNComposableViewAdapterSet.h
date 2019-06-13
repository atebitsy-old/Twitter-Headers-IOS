//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TFNComposableViewAdapterSet : NSObject
{
    NSMutableArray *_viewAdapters;
}

- (void).cxx_destruct;
- (id)viewIdentifiersWithValidLayoutStateInSet:(id)arg1 forViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (void)populateLayoutStateSet:(id)arg1 withValidViewIdentifiers:(id)arg2 inPreviousLayoutState:(id)arg3;
- (id)prefetchingViewInitializersForViewModel:(id)arg1;
- (void)enumerateViewAdaptersUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithViewAdapters:(id)arg1;

@end
