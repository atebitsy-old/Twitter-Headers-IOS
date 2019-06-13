//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TFNUI/TFNHapticFeedback-Protocol.h>
#import <TFNUI/TFNLayoutMetricsEnvironment-Protocol.h>

@class CAShapeLayer, NSString, UIColor, UIFont, UIImpactFeedbackGenerator, UILabel, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;
@protocol TFNCircularCountProgressDataSource;

@interface TFNCircularCountProgressView : UIView <TFNLayoutMetricsEnvironment, TFNHapticFeedback>
{
    _Bool _dataSourceChanged;
    UINotificationFeedbackGenerator *_notificationFeedbackGenerator;
    id <TFNCircularCountProgressDataSource> _dataSource;
    unsigned long long _progressViewType;
    UIFont *_countLabelDefaultFont;
    UIColor *_countLabelDefaultColor;
    UIColor *_countLabelWarningColor;
    UIColor *_countLabelErrorColor;
    UIColor *_progressArcDefaultColor;
    UIColor *_progressArcWarningColor;
    UIColor *_progressArcErrorColor;
    UIColor *_backgroundArcDefaultColor;
    UILabel *_countLabel;
    CAShapeLayer *_progressArc;
    CAShapeLayer *_backgroundArc;
    long long _count;
    long long _remainingCount;
    long long _warningCount;
    long long _errorCount;
    long long _overflowCount;
    double _oldProgressPercent;
    unsigned long long _oldDisplayMode;
}

@property(nonatomic) unsigned long long oldDisplayMode; // @synthesize oldDisplayMode=_oldDisplayMode;
@property(nonatomic) double oldProgressPercent; // @synthesize oldProgressPercent=_oldProgressPercent;
@property(nonatomic) long long overflowCount; // @synthesize overflowCount=_overflowCount;
@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
@property(nonatomic) long long warningCount; // @synthesize warningCount=_warningCount;
@property(nonatomic) long long remainingCount; // @synthesize remainingCount=_remainingCount;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) CAShapeLayer *backgroundArc; // @synthesize backgroundArc=_backgroundArc;
@property(retain, nonatomic) CAShapeLayer *progressArc; // @synthesize progressArc=_progressArc;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic, getter=isDataSourceChanged) _Bool dataSourceChanged; // @synthesize dataSourceChanged=_dataSourceChanged;
@property(retain, nonatomic) UIColor *backgroundArcDefaultColor; // @synthesize backgroundArcDefaultColor=_backgroundArcDefaultColor;
@property(retain, nonatomic) UIColor *progressArcErrorColor; // @synthesize progressArcErrorColor=_progressArcErrorColor;
@property(retain, nonatomic) UIColor *progressArcWarningColor; // @synthesize progressArcWarningColor=_progressArcWarningColor;
@property(retain, nonatomic) UIColor *progressArcDefaultColor; // @synthesize progressArcDefaultColor=_progressArcDefaultColor;
@property(retain, nonatomic) UIColor *countLabelErrorColor; // @synthesize countLabelErrorColor=_countLabelErrorColor;
@property(retain, nonatomic) UIColor *countLabelWarningColor; // @synthesize countLabelWarningColor=_countLabelWarningColor;
@property(retain, nonatomic) UIColor *countLabelDefaultColor; // @synthesize countLabelDefaultColor=_countLabelDefaultColor;
@property(retain, nonatomic) UIFont *countLabelDefaultFont; // @synthesize countLabelDefaultFont=_countLabelDefaultFont;
@property(nonatomic) unsigned long long progressViewType; // @synthesize progressViewType=_progressViewType;
@property(nonatomic) __weak id <TFNCircularCountProgressDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)feedbackType;
- (void)performHapticFeedback:(unsigned long long)arg1;
- (void)prepareHapticFeedback:(unsigned long long)arg1;
@property(readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator; // @synthesize notificationFeedbackGenerator=_notificationFeedbackGenerator;
- (void)layoutMetricsDidChange:(id)arg1;
- (id)calculatedLayoutMetrics;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)animationDuration;
- (unsigned long long)animationCurve;
- (void)pulseAndBounce;
- (void)updateCountLabel;
- (void)updateProgressArcFill;
- (void)updateArcPathStrokeWidths;
- (void)updateArcPathStrokeColors;
- (void)updateArcPathsWithRadius:(double)arg1;
- (void)updateArcPaths;
- (void)updateEntireArc;
- (void)animateToNewDisplayModeIfNeeded;
- (struct CGPoint)arcCenterPoint;
- (long long)lowestDisplayCountForLimit:(long long)arg1;
- (id)displayText;
- (id)colorForArc:(id)arg1;
- (id)textColor;
- (double)arcDiameter;
- (double)displayRadius;
- (long long)maxCount;
- (unsigned long long)displayMode;
- (_Bool)isDecreasingLevel;
- (_Bool)isIncreasingLevel;
- (_Bool)isTransitioningModes;
- (double)progressPercent;
- (void)reloadData;
@property(readonly, nonatomic, getter=isCharacterCountValid) _Bool characterCountValid;
- (void)setUpCountLabel;
- (void)setUpArcPaths;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property(readonly) Class superclass;

@end
