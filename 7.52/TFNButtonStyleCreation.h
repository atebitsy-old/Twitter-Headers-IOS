//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNButtonStyle.h>

@class TFNButtonStyleCreationRootNode;

@interface TFNButtonStyleCreation : TFNButtonStyle
{
    unsigned long long _nodeKey;
    unsigned long long _subnodeKey;
    TFNButtonStyleCreationRootNode *_rootNode;
    TFNButtonStyleCreation *_defaultPresentation;
    TFNButtonStyleCreation *_borderNone;
    TFNButtonStyleCreation *_presentedOverDarkBackground;
    TFNButtonStyleCreation *_presentedOverUnknownBackground;
    TFNButtonStyleCreation *_presentedOverChrome;
    TFNButtonStyleCreation *_paddingTight;
    TFNButtonStyleCreation *_paddingCollapseWidth;
    TFNButtonStyleCreation *_titleWeightLighter;
    TFNButtonStyleCreation *_emphasisStrongerForTitle;
    TFNButtonStyleCreation *_renderModeKnockout;
    TFNButtonStyleCreation *_xLarge;
    TFNButtonStyleCreation *_large;
    TFNButtonStyleCreation *_medium;
    TFNButtonStyleCreation *_mediumCondensed;
    TFNButtonStyleCreation *_small;
    TFNButtonStyleCreation *_smallCondensed;
    TFNButtonStyleCreation *_caretIcon;
    TFNButtonStyleCreation *_crossIcon;
    TFNButtonStyleCreation *_stronger;
    TFNButtonStyleCreation *_strong;
    TFNButtonStyleCreation *_regular;
    TFNButtonStyleCreation *_weak;
    TFNButtonStyleCreation *_normal;
    TFNButtonStyleCreation *_highlighted;
    TFNButtonStyleCreation *_selected;
    TFNButtonStyleCreation *_disabled;
}

+ (id)styleForAppearanceKey:(id)arg1;
+ (void)setDefaultStyleCreationBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) TFNButtonStyleCreation *disabled; // @synthesize disabled=_disabled;
@property(nonatomic) TFNButtonStyleCreation *selected; // @synthesize selected=_selected;
@property(nonatomic) TFNButtonStyleCreation *highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) TFNButtonStyleCreation *normal; // @synthesize normal=_normal;
@property(nonatomic) TFNButtonStyleCreation *weak; // @synthesize weak=_weak;
@property(nonatomic) TFNButtonStyleCreation *regular; // @synthesize regular=_regular;
@property(nonatomic) TFNButtonStyleCreation *strong; // @synthesize strong=_strong;
@property(nonatomic) TFNButtonStyleCreation *stronger; // @synthesize stronger=_stronger;
@property(nonatomic) TFNButtonStyleCreation *crossIcon; // @synthesize crossIcon=_crossIcon;
@property(nonatomic) TFNButtonStyleCreation *caretIcon; // @synthesize caretIcon=_caretIcon;
@property(nonatomic) TFNButtonStyleCreation *smallCondensed; // @synthesize smallCondensed=_smallCondensed;
@property(nonatomic) TFNButtonStyleCreation *small; // @synthesize small=_small;
@property(nonatomic) TFNButtonStyleCreation *mediumCondensed; // @synthesize mediumCondensed=_mediumCondensed;
@property(nonatomic) TFNButtonStyleCreation *medium; // @synthesize medium=_medium;
@property(nonatomic) TFNButtonStyleCreation *large; // @synthesize large=_large;
@property(nonatomic) TFNButtonStyleCreation *xLarge; // @synthesize xLarge=_xLarge;
@property(nonatomic) TFNButtonStyleCreation *renderModeKnockout; // @synthesize renderModeKnockout=_renderModeKnockout;
@property(nonatomic) TFNButtonStyleCreation *emphasisStrongerForTitle; // @synthesize emphasisStrongerForTitle=_emphasisStrongerForTitle;
@property(nonatomic) TFNButtonStyleCreation *titleWeightLighter; // @synthesize titleWeightLighter=_titleWeightLighter;
@property(nonatomic) TFNButtonStyleCreation *paddingCollapseWidth; // @synthesize paddingCollapseWidth=_paddingCollapseWidth;
@property(nonatomic) TFNButtonStyleCreation *paddingTight; // @synthesize paddingTight=_paddingTight;
@property(nonatomic) TFNButtonStyleCreation *presentedOverChrome; // @synthesize presentedOverChrome=_presentedOverChrome;
@property(nonatomic) TFNButtonStyleCreation *presentedOverUnknownBackground; // @synthesize presentedOverUnknownBackground=_presentedOverUnknownBackground;
@property(nonatomic) TFNButtonStyleCreation *presentedOverDarkBackground; // @synthesize presentedOverDarkBackground=_presentedOverDarkBackground;
@property(nonatomic) TFNButtonStyleCreation *borderNone; // @synthesize borderNone=_borderNone;
@property(nonatomic) TFNButtonStyleCreation *defaultPresentation; // @synthesize defaultPresentation=_defaultPresentation;
@property(nonatomic) TFNButtonStyleCreationRootNode *rootNode; // @synthesize rootNode=_rootNode;
@property(readonly, nonatomic) unsigned long long subnodeKey; // @synthesize subnodeKey=_subnodeKey;
@property(readonly, nonatomic) unsigned long long nodeKey; // @synthesize nodeKey=_nodeKey;
- (void)setUndefined;
- (void)setDefaultAppearanceKey:(id)arg1 whenApplyingStateMask:(unsigned long long)arg2;
- (void)setScalingMode:(unsigned long long)arg1 forPropertyName:(unsigned long long)arg2;
- (id)initWithNodeKey:(unsigned long long)arg1 subnodeKey:(unsigned long long)arg2 rootNode:(id)arg3;

@end

