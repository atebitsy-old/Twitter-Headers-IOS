//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNPickableValue-Protocol.h>

@class NSString, TFNTwitterInterestSuggestion, UIImage, _TtC14TFSTwitterCore24TFSTwitterTypeaheadTopic;

@interface T1Interest : NSObject <TFNPickableValue>
{
    _Bool _canBeExpanded;
    NSString *_string;
    _TtC14TFSTwitterCore24TFSTwitterTypeaheadTopic *_typeaheadTopic;
    TFNTwitterInterestSuggestion *_interestSuggestion;
    TFNTwitterInterestSuggestion *_parentInterestSuggestion;
}

@property(readonly, nonatomic) TFNTwitterInterestSuggestion *parentInterestSuggestion; // @synthesize parentInterestSuggestion=_parentInterestSuggestion;
@property(readonly, nonatomic) TFNTwitterInterestSuggestion *interestSuggestion; // @synthesize interestSuggestion=_interestSuggestion;
@property(readonly, nonatomic) _TtC14TFSTwitterCore24TFSTwitterTypeaheadTopic *typeaheadTopic; // @synthesize typeaheadTopic=_typeaheadTopic;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) _Bool canBeExpanded; // @synthesize canBeExpanded=_canBeExpanded;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *valueName;
- (_Bool)hasSubcategories;
@property(readonly, nonatomic) NSString *name;
- (id)contextToken;
- (id)interest;
- (id)scribeItemAtPosition:(unsigned long long)arg1 selected:(_Bool)arg2;
- (id)keyForDictionary;
- (id)initWithInterestSuggestion:(id)arg1 parentInterestSuggestion:(id)arg2;
- (id)initWithTypeaheadTopic:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *valueDetail;
@property(readonly, nonatomic) UIImage *valueIcon;
@property(readonly, copy, nonatomic) NSString *valueShortName;

@end
