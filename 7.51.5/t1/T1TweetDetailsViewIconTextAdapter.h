//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class UIImage;

@interface T1TweetDetailsViewIconTextAdapter : TFNItemsTableRowAdapter
{
    CDUnknownBlockType _tapActionBlock;
    UIImage *_icon;
}

@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
- (void).cxx_destruct;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithIconName:(id)arg1;

@end
