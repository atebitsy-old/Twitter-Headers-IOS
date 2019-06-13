//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1AmplifyContentControlBarDelegate-Protocol.h>

@class NSDictionary, NSString, T1AmplifyAdControlBar, T1AmplifyContentControlBar, TAVPlayer, TFNTwitterScribe, TFSTwitterScribeContext, UIViewController;
@protocol T1AmplifyUIEventHandlerDelegate;

@interface T1AmplifyUIEventHandler : NSObject <T1AmplifyContentControlBarDelegate>
{
    _Bool _playingBeforeScrubbing;
    T1AmplifyAdControlBar *_adControlBar;
    T1AmplifyContentControlBar *_contentControlBar;
    id <T1AmplifyUIEventHandlerDelegate> _delegate;
    TAVPlayer *_tavPlayer;
    TFNTwitterScribe *_scribe;
    TFSTwitterScribeContext *_scribeContext;
    NSDictionary *_scribeParameters;
    UIViewController *_ownerViewController;
    double _playbackTimeBeforeScrubbing;
}

@property(nonatomic) _Bool playingBeforeScrubbing; // @synthesize playingBeforeScrubbing=_playingBeforeScrubbing;
@property(nonatomic) double playbackTimeBeforeScrubbing; // @synthesize playbackTimeBeforeScrubbing=_playbackTimeBeforeScrubbing;
@property(readonly, nonatomic) __weak UIViewController *ownerViewController; // @synthesize ownerViewController=_ownerViewController;
@property(readonly, copy, nonatomic) NSDictionary *scribeParameters; // @synthesize scribeParameters=_scribeParameters;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TFNTwitterScribe *scribe; // @synthesize scribe=_scribe;
@property(readonly, nonatomic) __weak TAVPlayer *tavPlayer; // @synthesize tavPlayer=_tavPlayer;
@property(nonatomic) __weak id <T1AmplifyUIEventHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1AmplifyContentControlBar *contentControlBar; // @synthesize contentControlBar=_contentControlBar;
@property(retain, nonatomic) T1AmplifyAdControlBar *adControlBar; // @synthesize adControlBar=_adControlBar;
- (void).cxx_destruct;
- (void)_tfn_openStoreSheetWithAppId:(id)arg1;
- (void)amplifyContentControlBarScrubDidEnd:(id)arg1;
- (void)amplifyContentControlBarScrubDidChange:(id)arg1;
- (void)amplifyContentControlBarScrubDidBegin:(id)arg1;
- (void)ctaWasTappedOnAmplifyControlBar:(id)arg1;
- (id)initWithTAVPlayer:(id)arg1 scribe:(id)arg2 scribeContext:(id)arg3 scribeParameters:(id)arg4 ownerViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
