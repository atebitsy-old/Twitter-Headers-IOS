//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSTimer, UIGestureRecognizer;

@interface TFNSwipeScrollView : UIScrollView
{
    UIGestureRecognizer *_activeRecognizer;
    UIGestureRecognizer *_disabledRecognizer;
    NSTimer *_revalidationTimer;
    UIGestureRecognizer *_revalidationRecognizer;
}

@property(nonatomic) __weak UIGestureRecognizer *revalidationRecognizer; // @synthesize revalidationRecognizer=_revalidationRecognizer;
@property(retain, nonatomic) NSTimer *revalidationTimer; // @synthesize revalidationTimer=_revalidationTimer;
@property(nonatomic) __weak UIGestureRecognizer *disabledRecognizer; // @synthesize disabledRecognizer=_disabledRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *activeRecognizer; // @synthesize activeRecognizer=_activeRecognizer;
- (void).cxx_destruct;
- (void)_revalidateRecognizerTimeout;
- (void)_killRevalidationTimer;
- (void)_startRevalidationTimer;
- (void)_reenableRecognizer;
- (void)activeRecognizerAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservationOfActiveRecognizer;
- (void)_startObservationOfActiveRecognizer;
- (void)_disableRecognizer:(id)arg1 enableRecognizer:(id)arg2;
- (_Bool)_recognizerIsValidForSimultaneousRecognition:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;

@end

