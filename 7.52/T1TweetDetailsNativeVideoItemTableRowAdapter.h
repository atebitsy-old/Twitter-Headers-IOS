//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

#import <T1Twitter/TFNCellVisibilityBroadcasterDelegate-Protocol.h>

@class NSString, T1StatusMediaHandler;

@interface T1TweetDetailsNativeVideoItemTableRowAdapter : TFNItemsTableRowAdapter <TFNCellVisibilityBroadcasterDelegate>
{
    T1StatusMediaHandler *_mediaHandler;
}

@property(readonly, nonatomic) __weak T1StatusMediaHandler *mediaHandler; // @synthesize mediaHandler=_mediaHandler;
- (void).cxx_destruct;
- (id)dataViewController:(id)arg1 previewingViewControllerForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6 outSourceRect:(out struct CGRect *)arg7;
- (id)broadcaster:(id)arg1 focalViewForCell:(id)arg2;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithStatusMediaHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

