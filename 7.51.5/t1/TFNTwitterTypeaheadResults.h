//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TFNTwitterTypeaheadResults : NSObject
{
    NSArray *_people;
    NSArray *_topics;
    NSArray *_hashtags;
    NSArray *_events;
    NSArray *_ordering;
    NSArray *_recentSearches;
    NSArray *_savedSearches;
    NSArray *_peopleThatCanDM;
    NSArray *_peopleThatCanBeMediaTagged;
}

@property(readonly, nonatomic) NSArray *peopleThatCanBeMediaTagged; // @synthesize peopleThatCanBeMediaTagged=_peopleThatCanBeMediaTagged;
@property(readonly, nonatomic) NSArray *peopleThatCanDM; // @synthesize peopleThatCanDM=_peopleThatCanDM;
@property(readonly, nonatomic) NSArray *savedSearches; // @synthesize savedSearches=_savedSearches;
@property(readonly, nonatomic) NSArray *recentSearches; // @synthesize recentSearches=_recentSearches;
@property(readonly, nonatomic) NSArray *ordering; // @synthesize ordering=_ordering;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSArray *hashtags; // @synthesize hashtags=_hashtags;
@property(readonly, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCS2TypeaheadResults:(id)arg1 recentSearches:(id)arg2 savedSearches:(id)arg3;
- (id)initWithCS2TypeaheadResults:(id)arg1;
- (id)initWithPeople:(id)arg1 topics:(id)arg2 hashtags:(id)arg3 events:(id)arg4 ordering:(id)arg5 recentSearches:(id)arg6 savedSearches:(id)arg7 peopleThatCanDM:(id)arg8 peopleThatCanBeMediaTagged:(id)arg9;
- (id)initWithPeople:(id)arg1 topics:(id)arg2 hashtags:(id)arg3 events:(id)arg4 ordering:(id)arg5 recentSearches:(id)arg6 savedSearches:(id)arg7;
- (id)initWithPeople:(id)arg1 topics:(id)arg2 hashtags:(id)arg3 events:(id)arg4 ordering:(id)arg5;

@end

