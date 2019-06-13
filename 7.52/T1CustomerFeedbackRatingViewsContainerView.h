//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1CustomerFeedbackRatingViewDelegate-Protocol.h>

@class NSString, T1CustomerFeedbackCSATRatingView, T1CustomerFeedbackNPSRatingView;
@protocol T1CustomerFeedbackRatingViewDelegate;

@interface T1CustomerFeedbackRatingViewsContainerView : UIView <T1CustomerFeedbackRatingViewDelegate>
{
    id <T1CustomerFeedbackRatingViewDelegate> _delegate;
    unsigned long long _feedbackType;
    T1CustomerFeedbackNPSRatingView *_npsRatingView;
    T1CustomerFeedbackCSATRatingView *_csatRatingView;
}

@property(retain, nonatomic) T1CustomerFeedbackCSATRatingView *csatRatingView; // @synthesize csatRatingView=_csatRatingView;
@property(retain, nonatomic) T1CustomerFeedbackNPSRatingView *npsRatingView; // @synthesize npsRatingView=_npsRatingView;
@property(nonatomic) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) __weak id <T1CustomerFeedbackRatingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)feedbackRatingView:(id)arg1 didUpdateToValue:(unsigned long long)arg2;
- (void)prepareForReuse;
- (void)resetSelection;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

