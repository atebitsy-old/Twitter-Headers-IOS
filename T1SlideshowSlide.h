//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ImageDisplayViewDownloadDelegate-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class NSString, T1AnimatedGIFImageView, T1CardActivityIndicatorView, T1ImageDisplayView, T1PlayerSessionProducer, T1SlideshowSeekView, T1SlideshowSlideViewModel, T1StickerCanvas, T1StickerCanvasContentModeAssistView, TAVPlaybackState, TAVPlayerView, TFNButton, UIView;
@protocol T1SlideshowSlideDelegate;

@interface T1SlideshowSlide : NSObject <TAVPlaybackObserver, T1ImageDisplayViewDownloadDelegate>
{
    UIView *_contentView;
    T1ImageDisplayView *_imageDisplayView;
    T1AnimatedGIFImageView *_animatedGIFView;
    TAVPlayerView *_tavPlayerView;
    T1StickerCanvasContentModeAssistView *_stickerCanvasWrapper;
    T1StickerCanvas *_stickerCanvas;
    UIView *_overlayView;
    TFNButton *_watchAgainButton;
    T1SlideshowSeekView *_seekView;
    T1SlideshowSlideViewModel *_viewModel;
    TAVPlaybackState *_previousPlaybackState;
    T1CardActivityIndicatorView *_spinner;
    id <T1SlideshowSlideDelegate> _delegate;
}

@property(nonatomic) __weak id <T1SlideshowSlideDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1CardActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) TAVPlaybackState *previousPlaybackState; // @synthesize previousPlaybackState=_previousPlaybackState;
@property(retain, nonatomic) T1SlideshowSlideViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) T1SlideshowSeekView *seekView; // @synthesize seekView=_seekView;
@property(readonly, nonatomic) TFNButton *watchAgainButton; // @synthesize watchAgainButton=_watchAgainButton;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) T1StickerCanvas *stickerCanvas; // @synthesize stickerCanvas=_stickerCanvas;
@property(readonly, nonatomic) T1StickerCanvasContentModeAssistView *stickerCanvasWrapper; // @synthesize stickerCanvasWrapper=_stickerCanvasWrapper;
@property(readonly, nonatomic) TAVPlayerView *tavPlayerView; // @synthesize tavPlayerView=_tavPlayerView;
@property(readonly, nonatomic) T1AnimatedGIFImageView *animatedGIFView; // @synthesize animatedGIFView=_animatedGIFView;
@property(readonly, nonatomic) T1ImageDisplayView *imageDisplayView; // @synthesize imageDisplayView=_imageDisplayView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)imageDisplayView:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)imageDisplayViewDidSuccessfullyLoadImage:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)_didTapWatchAgainButton;
- (void)_updateVisibility;
- (void)_updateSpinnerVisibility;
- (void)_showSpinner;
- (void)_addSpinnerToView:(id)arg1;
- (void)_hideSpinner;
- (_Bool)_canShowSpinner;
- (void)_updateAccessibility;
- (void)showOverlay:(_Bool)arg1 showPreviewImage:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double zoomScale;
@property(readonly, nonatomic) _Bool isPlayable;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic, getter=isLoadingIndicator) _Bool loadingIndicator;
- (void)resumePlayerIfNeeded;
- (void)pausePlayerIfNeeded;
@property(readonly, nonatomic) T1PlayerSessionProducer *playerSessionProducer;
- (void)setContentFrame:(struct CGRect)arg1 withSafeAreaInsets:(struct UIEdgeInsets)arg2 inScrollView:(id)arg3 includePlayers:(_Bool)arg4;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (id)initWithSlideshow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
