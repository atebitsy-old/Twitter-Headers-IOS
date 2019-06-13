//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1MomentPageBackgroundViewController.h>

#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class TAVPlaybackState, TAVPlayer, TAVPlayerView, TAVPlayerViewConfiguration, TAVScribeContext;

@interface T1MomentPageVideoElementViewController : T1MomentPageBackgroundViewController <TAVPlaybackObserver>
{
    _Bool _playbackFailed;
    _Bool _preloading;
    _Bool _tavPlayerDidStart;
    TAVPlayer *_tavPlayer;
    TAVPlaybackState *_playbackState;
    TAVScribeContext *_tavScribeContext;
    TAVPlayerView *_tavPlayerView;
}

+ (id)backgroundViewControllerForMomentPage:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;
@property(nonatomic) _Bool tavPlayerDidStart; // @synthesize tavPlayerDidStart=_tavPlayerDidStart;
@property(retain, nonatomic) TAVPlayerView *tavPlayerView; // @synthesize tavPlayerView=_tavPlayerView;
@property(retain, nonatomic) TAVScribeContext *tavScribeContext; // @synthesize tavScribeContext=_tavScribeContext;
@property(retain, nonatomic) TAVPlaybackState *playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) TAVPlayer *tavPlayer; // @synthesize tavPlayer=_tavPlayer;
@property(nonatomic) _Bool preloading; // @synthesize preloading=_preloading;
@property(nonatomic) _Bool playbackFailed; // @synthesize playbackFailed=_playbackFailed;
- (void).cxx_destruct;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)handleTAVPlayerViewTapped;
- (void)handlePlaybackDidStart;
- (void)handleErrorState;
- (void)setUpPlayerView:(id)arg1;
- (id)errorString;
- (_Bool)hasErrors;
- (_Bool)needsActivityIndicator;
- (void)purgeMedia;
- (void)resumeMedia;
- (void)pauseMedia;
- (_Bool)isPlayingMedia;
- (void)preloadMediaForDisplaySize:(struct CGSize)arg1;
- (void)setVolume:(double)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPage:(id)arg1 account:(id)arg2 referenceMediaDimensions:(struct CGSize)arg3 scribeContext:(id)arg4;
@property(readonly, nonatomic) TAVPlayerViewConfiguration *playerViewConfiguration;

@end

