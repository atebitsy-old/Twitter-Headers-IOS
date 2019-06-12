//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/T1TagSetViewDelegate-Protocol.h>

@class NSString, T1TagSetView, TFSTwitterTagSet, TFSTwitterUserReference;

@interface T1TaggingCell : TFNTableViewCell <T1TagSetViewDelegate>
{
    T1TagSetView *_taggingView;
    CDUnknownBlockType _tagTapBlock;
    CDUnknownBlockType _tagLongPressBlock;
}

+ (id)_taggingViewIcon;
+ (double)heightForTagSet:(id)arg1 prioritizedUserReference:(id)arg2 layoutMetrics:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType tagLongPressBlock; // @synthesize tagLongPressBlock=_tagLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType tagTapBlock; // @synthesize tagTapBlock=_tagTapBlock;
- (void).cxx_destruct;
- (id)_possibleTappedTag;
- (void)tagSetViewDidLongPress:(id)arg1;
- (void)tagSetViewDidTap:(id)arg1;
- (void)cleanup;
@property(retain, nonatomic) TFSTwitterUserReference *prioritizedUserReference;
@property(retain, nonatomic) TFSTwitterTagSet *tagSet;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
