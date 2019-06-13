//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

@class UIColor, UIFont;
@protocol TFNMenuActionAdapterDelegate;

@interface TFNMenuActionItemAdapter : TFNItemsDataViewAdapter
{
    id <TFNMenuActionAdapterDelegate> _delegate;
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    UIColor *_iconColor;
    UIColor *_destructiveColor;
    UIColor *_cancelButtonBackgroundColor;
    UIColor *_cancelButtonHighlightColor;
}

+ (id)defaultCancelButtonHighlightColor;
+ (void)setDefaultCancelButtonHighlightColor:(id)arg1;
+ (id)defaultCancelButtonBackgroundColor;
+ (void)setDefaultCancelButtonBackgroundColor:(id)arg1;
+ (CDUnknownBlockType)defaultSubtitleFontBlock;
+ (void)setDefaultSubtitleFontBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)defaultTitleFontBlock;
+ (void)setDefaultTitleFontBlock:(CDUnknownBlockType)arg1;
+ (id)defaultDestructiveColor;
+ (void)setDefaultDestructiveColor:(id)arg1;
+ (id)defaultIconColor;
+ (void)setDefaultIconColor:(id)arg1;
+ (id)defaultSubtitleTextColor;
+ (void)setDefaultSubtitleTextColor:(id)arg1;
+ (id)defaultTitleTextColor;
+ (void)setDefaultTitleTextColor:(id)arg1;
@property(readonly, nonatomic) UIColor *cancelButtonHighlightColor; // @synthesize cancelButtonHighlightColor=_cancelButtonHighlightColor;
@property(readonly, nonatomic) UIColor *cancelButtonBackgroundColor; // @synthesize cancelButtonBackgroundColor=_cancelButtonBackgroundColor;
@property(readonly, nonatomic) UIColor *destructiveColor; // @synthesize destructiveColor=_destructiveColor;
@property(readonly, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(readonly, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(readonly, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(nonatomic) __weak id <TFNMenuActionAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *subtitleFont;
@property(readonly, nonatomic) UIFont *titleFont;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithDelegate:(id)arg1;

@end

