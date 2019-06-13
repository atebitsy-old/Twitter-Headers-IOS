//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSArray, NSString, TFNTwitterFeedbackDisplayContext;

@interface TFNTwitterFeedbackInfo : NSObject <TFSTwitterTimelinePlistSerialization>
{
    NSArray *_actions;
    TFNTwitterFeedbackDisplayContext *_displayContext;
    NSString *_metadata;
}

@property(readonly, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) TFNTwitterFeedbackDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)description;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithActions:(id)arg1 displayContext:(id)arg2 metadata:(id)arg3;
- (id)initWithActions:(id)arg1;
- (id)init;

@end
