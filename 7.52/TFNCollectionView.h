//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <TFNUI/TFNDataView-Protocol.h>
#import <TFNUI/TFNDataViewHelperDelegate-Protocol.h>

@class NSString, TFNDataViewController, TFNDataViewHelper, TFNPrefetchingViewCache;

@interface TFNCollectionView : UICollectionView <TFNDataViewHelperDelegate, TFNDataView>
{
    TFNDataViewController *_controller;
    TFNDataViewHelper *_helper;
    _Bool _reloadCellLayouts;
    TFNPrefetchingViewCache *_prefetchingViewCache;
}

@property(readonly, nonatomic) TFNPrefetchingViewCache *prefetchingViewCache; // @synthesize prefetchingViewCache=_prefetchingViewCache;
- (void).cxx_destruct;
- (id)calculatedLayoutMetricsForItemAtIndexPath:(id)arg1;
- (unsigned long long)dataViewHelper:(id)arg1 sectionBreaksForIndexPath:(id)arg2;
- (void)dataViewDidUpdateForHelper:(id)arg1 animated:(_Bool)arg2;
- (_Bool)dataViewWillUpdateForHelper:(id)arg1;
- (void)dataViewHelper:(id)arg1 performBatchUpdates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)invalidateCellLayoutsPassingTest:(CDUnknownBlockType)arg1;
- (void)setCellLayout:(id)arg1 forObjectIdentifier:(id)arg2;
- (id)cellLayoutForObjectIdentifier:(id)arg1;
- (void)setCellLayout:(id)arg1 forIndexPath:(id)arg2;
- (id)cellLayoutForIndexPath:(id)arg1;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadData:(_Bool)arg1;
- (id)accessibilityIdentifier;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (Class)registeredClassForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;
- (Class)registeredClassForCellWithReuseIdentifier:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSections:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)insertSections:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)reloadData;
- (id)initWithDataViewController:(id)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool allowsMultipleSelection;
@property(nonatomic) _Bool allowsSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

