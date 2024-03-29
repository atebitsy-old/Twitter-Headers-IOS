//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class TFNTwitterAccount, TIPImagePipeline;
@protocol T1MomentCapsuleAdapterDelegate, TFNTwitterMomentSportEventsDataManager;

@interface T1MomentCapsuleTableRowAdapter : TFNItemsTableRowAdapter
{
    unsigned long long _theme;
    TFNTwitterAccount *_account;
    id <TFNTwitterMomentSportEventsDataManager> _sportDataManager;
    CDUnknownBlockType _didFirstDisplayInDataViewControllerBlock;
    id <T1MomentCapsuleAdapterDelegate> _delegate;
    TIPImagePipeline *_imagePipeline;
}

@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(nonatomic) __weak id <T1MomentCapsuleAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType didFirstDisplayInDataViewControllerBlock; // @synthesize didFirstDisplayInDataViewControllerBlock=_didFirstDisplayInDataViewControllerBlock;
@property(retain, nonatomic) id <TFNTwitterMomentSportEventsDataManager> sportDataManager; // @synthesize sportDataManager=_sportDataManager;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)presentationSourceViewAtIndexPath:(id)arg1 inController:(id)arg2;
- (id)dataViewController:(id)arg1 previewingViewControllerForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6 outSourceRect:(out struct CGRect *)arg7;
- (double)heightWithMomentViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithAccount:(id)arg1 imagePipeline:(id)arg2;

@end

