//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class T1FullPromptView, T1NewsCameraCaptureContext;
@protocol T1NewsCameraWelcomeViewControllerDelegate;

@interface T1NewsCameraWelcomeViewController : UIViewController
{
    id <T1NewsCameraWelcomeViewControllerDelegate> _delegate;
    T1NewsCameraCaptureContext *_context;
    T1FullPromptView *_promptView;
}

+ (_Bool)needsToPresent;
+ (void)setNeedsToPresent:(_Bool)arg1;
@property(retain, nonatomic) T1FullPromptView *promptView; // @synthesize promptView=_promptView;
@property(readonly, nonatomic) T1NewsCameraCaptureContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <T1NewsCameraWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)calculatedLayoutMetrics;
- (void)_t1_main_loadBorderViewsWithConstriants:(id)arg1;
- (void)_t1_main_didTapButton:(id)arg1;
- (void)_t1_main_didTapDismiss:(id)arg1;
- (void)_t1_main_loadPromptViewWithConstriants:(id)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
