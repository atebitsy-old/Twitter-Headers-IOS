//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSString, TFSTwitterTypeaheadUser, _TtC14TFSTwitterCore24TFSTwitterTypeaheadTopic;

@protocol T1AutocompleteResultItem <NSObject>
@property(readonly, nonatomic) NSDictionary *scribeItem;
@property(copy, nonatomic) NSString *notSelectableText;
@property(nonatomic) _Bool isNotSelectable;
@property(retain, nonatomic) _TtC14TFSTwitterCore24TFSTwitterTypeaheadTopic *typeaheadTopic;
@property(retain, nonatomic) TFSTwitterTypeaheadUser *typeaheadUser;
@property(nonatomic) _Bool isPrefetchUser;
@property(nonatomic) long long priority;
@property(nonatomic) long long autocompleteType;
@property(copy, nonatomic) NSString *itemID;
@property(retain, nonatomic) id userInfo;
@property(nonatomic) struct CGSize autocompleteMediaDimensions;
@property(copy, nonatomic) NSString *autocompleteMediaURL;
@property(copy, nonatomic) NSString *autocompleteReplacementText;
@property(copy, nonatomic) NSString *autocompleteDisplaySubtext;
@property(copy, nonatomic) NSString *autocompleteDisplayText;
- (NSString *)searchableSortableText;
- (_Bool)verified;
@end

