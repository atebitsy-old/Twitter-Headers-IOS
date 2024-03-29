//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/NSCopying-Protocol.h>

@interface TFNLayoutMetricsOutputs : NSObject <NSCopying>
{
    _Bool _constrainedByCanvasWidth;
    double _lineHeight;
    double _emWidth;
    double _standardContentInset;
    double _leadingContentAreaWidth;
    double _trailingContentAreaWidth;
    double _bodyPadding;
    struct CGSize _avatarSize;
    struct CGSize _smallAvatarSize;
    struct CGSize _mediumAvatarSize;
    struct UIEdgeInsets _displayAreaEdgeInsets;
    struct UIEdgeInsets _horizontalSafeAreaInsets;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _minimumContentEdgeInsets;
    struct UIEdgeInsets _barItemInsets;
    struct UIEdgeInsets _bodyEdgeInsets;
    struct UIEdgeInsets _horizontalInsetsForLineLength;
}

@property(nonatomic) struct UIEdgeInsets horizontalInsetsForLineLength; // @synthesize horizontalInsetsForLineLength=_horizontalInsetsForLineLength;
@property(nonatomic) _Bool constrainedByCanvasWidth; // @synthesize constrainedByCanvasWidth=_constrainedByCanvasWidth;
@property(nonatomic) double bodyPadding; // @synthesize bodyPadding=_bodyPadding;
@property(nonatomic) struct UIEdgeInsets bodyEdgeInsets; // @synthesize bodyEdgeInsets=_bodyEdgeInsets;
@property(nonatomic) struct CGSize mediumAvatarSize; // @synthesize mediumAvatarSize=_mediumAvatarSize;
@property(nonatomic) struct CGSize smallAvatarSize; // @synthesize smallAvatarSize=_smallAvatarSize;
@property(nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) double trailingContentAreaWidth; // @synthesize trailingContentAreaWidth=_trailingContentAreaWidth;
@property(nonatomic) double leadingContentAreaWidth; // @synthesize leadingContentAreaWidth=_leadingContentAreaWidth;
@property(nonatomic) struct UIEdgeInsets barItemInsets; // @synthesize barItemInsets=_barItemInsets;
@property(nonatomic) struct UIEdgeInsets minimumContentEdgeInsets; // @synthesize minimumContentEdgeInsets=_minimumContentEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) struct UIEdgeInsets horizontalSafeAreaInsets; // @synthesize horizontalSafeAreaInsets=_horizontalSafeAreaInsets;
@property(nonatomic) double standardContentInset; // @synthesize standardContentInset=_standardContentInset;
@property(nonatomic) struct UIEdgeInsets displayAreaEdgeInsets; // @synthesize displayAreaEdgeInsets=_displayAreaEdgeInsets;
@property(nonatomic) double emWidth; // @synthesize emWidth=_emWidth;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

