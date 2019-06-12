//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1TombstoneViewDelegate-Protocol.h>
#import <T1Twitter/TFNPrefetchingViewCacheContainer-Protocol.h>
#import <T1Twitter/TFNPreviewable-Protocol.h>
#import <T1Twitter/TFNReusable-Protocol.h>

@class NSString, T1CardContainerView, T1QuotedStatusView, T1StatusPhotoVideoForwardView, T1URTRichTextStatusEventInteractionHandler, T1UnifiedCardView, T1UnifiedCardViewLayoutDelegate, T1UserRecommendationView, TFNPrefetchingViewCache, TFNTwitterAccount;
@protocol T1StatusViewAttachmentContainerViewDelegate, T1StatusViewModel;

@interface T1StatusViewAttachmentContainerView : UIView <T1TombstoneViewDelegate, TFNPreviewable, TFNReusable, TFNPrefetchingViewCacheContainer>
{
    TFNTwitterAccount *_account;
    TFNPrefetchingViewCache *_prefetchingViewCache;
    unsigned long long _attachmentType;
    id <T1StatusViewAttachmentContainerViewDelegate> _delegate;
    id _layoutState;
    T1URTRichTextStatusEventInteractionHandler *_tombstoneInteractionHandler;
    UIView *_attachmentView;
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    T1UnifiedCardViewLayoutDelegate *_cardViewLayoutDelegate;
}

+ (id)_t1_cardViewPrefetchingViewInitializersForViewModel:(id)arg1 options:(unsigned long long)arg2 prefetchingDelegate:(id)arg3 account:(id)arg4;
+ (id)_t1_quoteTweetPrefetchingViewInitializersForViewModel:(id)arg1 options:(unsigned long long)arg2 prefetchingDelegate:(id)arg3 account:(id)arg4;
+ (unsigned long long)attachmentTypeForMediaType:(unsigned long long)arg1;
+ (id)prefetchingViewInitializersForViewModel:(id)arg1 options:(unsigned long long)arg2 prefetchingDelegate:(id)arg3 account:(id)arg4 attachmentType:(unsigned long long)arg5;
@property(retain, nonatomic) T1UnifiedCardViewLayoutDelegate *cardViewLayoutDelegate; // @synthesize cardViewLayoutDelegate=_cardViewLayoutDelegate;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(readonly, nonatomic) T1URTRichTextStatusEventInteractionHandler *tombstoneInteractionHandler; // @synthesize tombstoneInteractionHandler=_tombstoneInteractionHandler;
@property(retain, nonatomic) id layoutState; // @synthesize layoutState=_layoutState;
@property(nonatomic) __weak id <T1StatusViewAttachmentContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) TFNPrefetchingViewCache *prefetchingViewCache; // @synthesize prefetchingViewCache=_prefetchingViewCache;
- (void).cxx_destruct;
- (id)_t1_viewIdentifierForAttachmentViewClass:(Class)arg1;
- (id)_t1_attachmentTypeString;
- (void)_t1_removeAttachmentView;
- (void)_t1_addAttachmentViewAsSubviewIfNeeded:(id)arg1;
- (id)_t1_getAttachmentViewOfType:(Class)arg1 withInitializer:(CDUnknownBlockType)arg2;
- (void)_t1_setupCardView;
- (void)_t1_setupUnifiedCardView;
- (void)_t1_setupQuotedStatusView;
- (void)_t1_setupPhotoVideoView;
- (void)_t1_setupUserRecommendationView;
- (void)_t1_setupTombstonedQuotedStatusAttachmentView;
- (void)_t1_setupAttachmentView;
- (_Bool)_t1_isSubviewCachingEnabled;
- (_Bool)_t1_isSubviewReuseEnabled;
- (void)didTapOnViewButtonWithTombstoneView:(id)arg1;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(out struct CGRect *)arg2;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (void)cleanup;
- (void)prepareForReuse;
- (void)updateEmbeddedCarouselView:(id)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 attachmentType:(unsigned long long)arg4;
- (id)init;
@property(readonly, nonatomic) UIView *embeddedCarouselView;
@property(readonly, nonatomic) T1UnifiedCardView *unifiedCardView;
@property(readonly, nonatomic) T1CardContainerView *cardContainerView;
@property(readonly, nonatomic) T1QuotedStatusView *quotedStatusView;
@property(readonly, nonatomic) T1StatusPhotoVideoForwardView *photoVideoView;
@property(readonly, nonatomic) T1UserRecommendationView *userRecommendationView;
- (id)tombstoneView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
