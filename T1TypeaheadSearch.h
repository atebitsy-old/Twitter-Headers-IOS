//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSTwitterSavedSearch, _TtC14TFSTwitterCore24TFSTwitterTypeaheadTopic;

@interface T1TypeaheadSearch : NSObject
{
    // Error parsing type: , name: content
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *searchTerm;
@property(nonatomic, readonly) _TtC14TFSTwitterCore24TFSTwitterTypeaheadTopic *topic;
@property(nonatomic, readonly) TFSTwitterSavedSearch *savedSearch;
@property(nonatomic, readonly) NSString *recentSearch;
- (id)initWithTopic:(id)arg1;
- (id)initWithSavedSearch:(id)arg1;
- (id)initWithRecentSearch:(id)arg1;

@end
