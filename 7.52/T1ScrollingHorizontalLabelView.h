//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/UICollectionViewDataSource-Protocol.h>
#import <T1Twitter/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, T1ScrollingHorizontalLabelCollectionView, TIPImagePipeline, UIColor, UIFont, UIScrollView;
@protocol T1ScrollingHorizontalLabelViewDataSource, T1ScrollingHorizontalLabelViewDelegate;

@interface T1ScrollingHorizontalLabelView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate>
{
    double _itemPadding;
    struct UIEdgeInsets _edgePadding;
    NSMutableDictionary *_cachedWidths;
    _Bool _alwaysCenterSelectedItem;
    _Bool _scrollEnabled;
    _Bool _showsHighlightBar;
    id <T1ScrollingHorizontalLabelViewDelegate> _delegate;
    id <T1ScrollingHorizontalLabelViewDataSource> _dataSource;
    UIScrollView *_scrollView;
    double _minimumItemPadding;
    double _preferredEdgePadding;
    long long _maximumNumberOfVisibleItems;
    long long _minimumNumberOfVisibleItems;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIFont *_font;
    unsigned long long _startingIndex;
    TIPImagePipeline *_imagePipeline;
    T1ScrollingHorizontalLabelCollectionView *_collectionView;
}

@property(retain, nonatomic) T1ScrollingHorizontalLabelCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(nonatomic) unsigned long long startingIndex; // @synthesize startingIndex=_startingIndex;
@property(nonatomic) _Bool showsHighlightBar; // @synthesize showsHighlightBar=_showsHighlightBar;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool alwaysCenterSelectedItem; // @synthesize alwaysCenterSelectedItem=_alwaysCenterSelectedItem;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long minimumNumberOfVisibleItems; // @synthesize minimumNumberOfVisibleItems=_minimumNumberOfVisibleItems;
@property(nonatomic) long long maximumNumberOfVisibleItems; // @synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems;
@property(nonatomic) double preferredEdgePadding; // @synthesize preferredEdgePadding=_preferredEdgePadding;
@property(nonatomic) double minimumItemPadding; // @synthesize minimumItemPadding=_minimumItemPadding;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <T1ScrollingHorizontalLabelViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <T1ScrollingHorizontalLabelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_t1_highlightHeight;
- (double)_t1_minimumSpacingForSectionAtIndex:(unsigned long long)arg1;
- (id)_t1_segmentCellBackgroundColorForItemAtIndex:(unsigned long long)arg1;
- (_Bool)_tfn_areColorsStaticForItemAtIndex:(unsigned long long)arg1;
- (id)_tfn_textColorForItemAtIndex:(unsigned long long)arg1;
- (id)_tfn_highlightedTextColorForItemAtIndex:(unsigned long long)arg1;
- (id)_tfn_textColorForItemAtIndex:(unsigned long long)arg1 scrollHighlightPercent:(double)arg2 userHighlighted:(_Bool)arg3;
- (void)dealloc;
- (void)_updatePageHighlights;
- (id)_color:(id)arg1 interpolatedWithColor:(id)arg2 byPercent:(double)arg3;
- (void)_setHighlightColorOnCell:(id)arg1 forIndexPath:(id)arg2;
- (long long)_leftPage;
- (long long)_rightPage;
- (long long)_currentPage;
- (double)_currentPercent;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)_shouldUsePadding;
- (struct CGSize)_itemSize;
- (void)_defaultTranslationFromScrollView:(id)arg1 toScrollView:(id)arg2;
- (void)scrollToPagedPosition:(double)arg1 animated:(_Bool)arg2;
- (void)_centerBiasedTranslationFromScrollview:(id)arg1 toScrollView:(id)arg2;
- (void)_translateScrollingFromScrollView:(id)arg1 toScrollView:(id)arg2;
- (_Bool)_shouldScroll;
- (struct CGPoint)_maxContentOffsetForScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
- (void)invalidateCachedData;
- (void)reloadData;
- (void)_recalculatePadding;
- (double)_widthForItemAtIndex:(long long)arg1;
- (double)minimumWidth;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

