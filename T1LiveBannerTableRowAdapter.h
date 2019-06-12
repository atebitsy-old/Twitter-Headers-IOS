//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

#import <T1Twitter/T1MultiEventLiveBannerViewDelegate-Protocol.h>

@class NSMapTable, NSString, T1LiveBannerScribe, T1MultiEventLiveBannerView, TFNMenuSheetViewController, TFNTwitterAccount, TIPImagePipeline;
@protocol T1LiveBannerTableRowAdapterDelegate;

@interface T1LiveBannerTableRowAdapter : TFNItemsTableRowAdapter <T1MultiEventLiveBannerViewDelegate>
{
    id <T1LiveBannerTableRowAdapterDelegate> _delegate;
    TFNTwitterAccount *_account;
    TIPImagePipeline *_imagePipeline;
    T1MultiEventLiveBannerView *_sizingMultiEventBannerView;
    NSMapTable *_multiEventBannerViewToBannerEntryTable;
    NSMapTable *_multiEventBannerViewToViewControllerTable;
    T1LiveBannerScribe *_liveBannerScribe;
    TFNMenuSheetViewController *_currentMenuSheetViewController;
    double _latestCarouselOffset;
    NSString *_latestEntryID;
    NSString *_hasScribedInitialImpressionForEntryID;
}

@property(retain, nonatomic) NSString *hasScribedInitialImpressionForEntryID; // @synthesize hasScribedInitialImpressionForEntryID=_hasScribedInitialImpressionForEntryID;
@property(retain, nonatomic) NSString *latestEntryID; // @synthesize latestEntryID=_latestEntryID;
@property(nonatomic) double latestCarouselOffset; // @synthesize latestCarouselOffset=_latestCarouselOffset;
@property(nonatomic) __weak TFNMenuSheetViewController *currentMenuSheetViewController; // @synthesize currentMenuSheetViewController=_currentMenuSheetViewController;
@property(readonly, nonatomic) T1LiveBannerScribe *liveBannerScribe; // @synthesize liveBannerScribe=_liveBannerScribe;
@property(readonly, nonatomic) NSMapTable *multiEventBannerViewToViewControllerTable; // @synthesize multiEventBannerViewToViewControllerTable=_multiEventBannerViewToViewControllerTable;
@property(readonly, nonatomic) NSMapTable *multiEventBannerViewToBannerEntryTable; // @synthesize multiEventBannerViewToBannerEntryTable=_multiEventBannerViewToBannerEntryTable;
@property(readonly, nonatomic) T1MultiEventLiveBannerView *sizingMultiEventBannerView; // @synthesize sizingMultiEventBannerView=_sizingMultiEventBannerView;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) __weak id <T1LiveBannerTableRowAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_t1_openBannerItem:(id)arg1 account:(id)arg2;
- (id)_t1_actionItemsForLiveBannerItem:(id)arg1 containedByEntry:(id)arg2 atIndex:(unsigned long long)arg3 account:(id)arg4 controller:(id)arg5;
- (void)_t1_showCurationActionSheetForItem:(id)arg1 containedByEntry:(id)arg2 atIndex:(unsigned long long)arg3 fromView:(id)arg4 controller:(id)arg5;
- (void)_t1_populateMultiEventBanner:(id)arg1 forEntry:(id)arg2 withAccount:(id)arg3;
- (void)multiEventLiveBannerView:(id)arg1 didRevealItemAtIndex:(unsigned long long)arg2;
- (void)multiEventLiveBannerView:(id)arg1 didUpdateCarouselOffset:(double)arg2;
- (void)multiEventLiveBannerView:(id)arg1 didTapCaretForItemAtIndex:(unsigned long long)arg2;
- (void)multiEventLiveBannerView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (_Bool)dataViewController:(id)arg1 shouldSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 didEndDisplayingCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithLiveBannerScribe:(id)arg1 delegate:(id)arg2 account:(id)arg3;
- (id)initWithDelegate:(id)arg1 account:(id)arg2;
- (id)init;

@end
