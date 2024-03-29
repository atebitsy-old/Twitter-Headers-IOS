//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

#import <T1Twitter/T1UnifiedCardComponentView-Protocol.h>
#import <T1Twitter/TFNPreviewable-Protocol.h>

@class NSString, TFNAttributedTextView, TFNTappableHighlightView, TFNTwitterUnifiedCard, TIPImagePipeline, UIView;
@protocol T1UnifiedCardComponentViewEventDelegate, TFNTwitterUnifiedCardComponentModel;

@interface T1UnifiedCardDetailsComponentView : TFNLayoutableView <TFNPreviewable, T1UnifiedCardComponentView>
{
    TFNTwitterUnifiedCard *_unifiedCard;
    id <TFNTwitterUnifiedCardComponentModel> _component;
    TIPImagePipeline *_imagePipeline;
    id <T1UnifiedCardComponentViewEventDelegate> _eventDelegate;
    TFNTappableHighlightView *_fallbackHighlightView;
    TFNAttributedTextView *_titleLabel;
    TFNTappableHighlightView *_titleHighlightView;
    TFNAttributedTextView *_subtitleLabel;
    TFNTappableHighlightView *_subtitleHighlightView;
}

+ (id)sharedLayoutDelegate;
@property(retain, nonatomic) TFNTappableHighlightView *subtitleHighlightView; // @synthesize subtitleHighlightView=_subtitleHighlightView;
@property(retain, nonatomic) TFNAttributedTextView *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) TFNTappableHighlightView *titleHighlightView; // @synthesize titleHighlightView=_titleHighlightView;
@property(retain, nonatomic) TFNAttributedTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TFNTappableHighlightView *fallbackHighlightView; // @synthesize fallbackHighlightView=_fallbackHighlightView;
@property(nonatomic) __weak id <T1UnifiedCardComponentViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) id <TFNTwitterUnifiedCardComponentModel> component; // @synthesize component=_component;
@property(retain, nonatomic) TFNTwitterUnifiedCard *unifiedCard; // @synthesize unifiedCard=_unifiedCard;
- (void).cxx_destruct;
- (void)_t1_setupHighlightView:(id)arg1 withAccessibilityIdentifier:(id)arg2;
- (void)_t1_didTapDetail:(id)arg1;
- (void)_t1_didLongPressDetail:(id)arg1;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(out struct CGRect *)arg2;
- (void)prepareForReuse;
- (void)setupActions;
- (id)t1_accessibilityCustomActions;
@property(readonly, nonatomic) UIView *autoplayableContainerView;
@property(readonly, nonatomic) _Bool shouldDelayContainerTouchDownHighlighting;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

