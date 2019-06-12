//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1MomentScoreParticipantInfo, UILabel, UIStackView;

@interface T1LiveEventScoreResultView : UIView
{
    T1MomentScoreParticipantInfo *_participantInfo;
    UIStackView *_scoreStackView;
    UILabel *_primaryScoreLabel;
    UILabel *_secondaryScoreLabel;
}

@property(readonly, nonatomic) UILabel *secondaryScoreLabel; // @synthesize secondaryScoreLabel=_secondaryScoreLabel;
@property(readonly, nonatomic) UILabel *primaryScoreLabel; // @synthesize primaryScoreLabel=_primaryScoreLabel;
@property(readonly, nonatomic) UIStackView *scoreStackView; // @synthesize scoreStackView=_scoreStackView;
@property(retain, nonatomic) T1MomentScoreParticipantInfo *participantInfo; // @synthesize participantInfo=_participantInfo;
- (void).cxx_destruct;
- (void)tfn_fontSizeChanged;
- (void)_t1_updateSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
