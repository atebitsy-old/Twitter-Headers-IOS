//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNComposableViewAdapter.h>

@interface T1StandardStatusMediaTagsViewAdapter : TFNComposableViewAdapter
{
    CDUnknownBlockType _attachmentTypeOverride;
}

@property(copy, nonatomic) CDUnknownBlockType attachmentTypeOverride; // @synthesize attachmentTypeOverride=_attachmentTypeOverride;
- (void).cxx_destruct;
- (_Bool)isLayoutState:(id)arg1 validForViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (id)layoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (id)_t1_infoTextColorForOptions:(unsigned long long)arg1;
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateWithInfo:(id)arg2 forView:(id)arg3;
- (void)unsetViewModelForView:(id)arg1;
- (void)setViewModel:(id)arg1 forView:(id)arg2;

@end

