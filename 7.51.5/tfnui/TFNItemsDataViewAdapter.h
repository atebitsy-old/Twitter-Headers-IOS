//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TFNItemsDataViewAdapter : NSObject
{
    NSNumber *_accessoryType;
    NSNumber *_separatorType;
    NSNumber *_borderType;
}

- (void).cxx_destruct;
- (id)dataViewController:(id)arg1 dragItemForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 calculatedLayoutMetricsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 dismissItem:(id)arg2 withInfo:(id)arg3 options:(id)arg4 atIndexPath:(id)arg5;
- (unsigned long long)dataViewController:(id)arg1 sectionBreaksForIndexPath:(id)arg2;
- (void)applyOptions:(id)arg1 toCell:(id)arg2 withDefaultAccessoryType:(long long)arg3;
- (struct UIEdgeInsets)totalContentEdgeInsetsForOptions:(id)arg1 withDefaultAccessoryType:(long long)arg2 layoutMetrics:(id)arg3;
- (long long)highlightStyleForOptions:(id)arg1;
- (id)borderTypeForOptions:(id)arg1;
@property(nonatomic) long long borderType;
- (id)separatorTypeForOptions:(id)arg1;
@property(nonatomic) long long separatorType;
- (id)accessoryTypeForOptions:(id)arg1;
@property(nonatomic) long long accessoryType;
- (_Bool)tfn_isDataViewAdapter;
- (void)dataViewController:(id)arg1 commitPreviewingViewController:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 previewingViewControllerForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6 outSourceRect:(out struct CGRect *)arg7;
- (void)dataViewController:(id)arg1 didScrollScrollView:(id)arg2;
- (void)dataViewController:(id)arg1 willBeginEditingItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 editActionsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (long long)dataViewController:(id)arg1 editingStyleForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 canEditItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 didDeselectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldDeselectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 didUnhighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 didHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 didEndDisplayingCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 cellLayoutObjectIdentifierForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutForItem:(id)arg2 withObjectIdentifier:(id)arg3 options:(id)arg4 previousLayout:(id)arg5 atIndexPath:(id)arg6;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 cancelPrefetchingForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 prefetchOperationsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 addDirectlyOwnedViewControllersToMutableArray:(id)arg2 forItems:(id)arg3;

@end
