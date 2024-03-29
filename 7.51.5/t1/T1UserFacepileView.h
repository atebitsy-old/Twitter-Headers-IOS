//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSArray, NSMutableArray, NSString, TIPImagePipeline, UIColor;

@interface T1UserFacepileView : UIView <TFNLayoutMetricsEnvironment>
{
    _Bool _isRTL;
    _Bool _cascading;
    TIPImagePipeline *_imagePipeline;
    UIColor *_borderColor;
    double _borderWidth;
    NSArray *_users;
    CDUnknownBlockType _avatarTappedBlock;
    NSMutableArray *_avatarImageViews;
}

@property(readonly, nonatomic) NSMutableArray *avatarImageViews; // @synthesize avatarImageViews=_avatarImageViews;
@property(copy, nonatomic) CDUnknownBlockType avatarTappedBlock; // @synthesize avatarTappedBlock=_avatarTappedBlock;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic, getter=isCascading) _Bool cascading; // @synthesize cascading=_cascading;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (void).cxx_destruct;
- (id)userAtPoint:(struct CGPoint)arg1;
- (id)avatarImageViewAtPoint:(struct CGPoint)arg1;
- (id)_userForAvatarImageView:(id)arg1;
- (void)_avatarImageViewTapped:(id)arg1;
- (void)layoutSubviews;
- (void)private_commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

