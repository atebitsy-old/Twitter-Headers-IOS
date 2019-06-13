//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionViewCell.h>

#import <TFNUI/TFNTextDataViewCell-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface TFNTextCollectionViewCell : TFNCollectionViewCell <TFNTextDataViewCell>
{
    _Bool _multipleTextLines;
    _Bool _multipleDetailTextLines;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    double _detailTextPadding;
    long long _verticalAlignment;
    long long _style;
    struct UIEdgeInsets _horizontalIconPadding;
}

+ (void)setDefaultDetailTextColor:(id)arg1;
+ (void)setDefaultTextColor:(id)arg1;
+ (id)detailFontForStyle:(long long)arg1;
+ (struct CGSize)sizeForStyle:(long long)arg1 text:(id)arg2 font:(id)arg3 multipleLines:(_Bool)arg4 detailText:(id)arg5 font:(id)arg6 multipleLines:(_Bool)arg7 padding:(double)arg8 icon:(id)arg9 horizontalIconPadding:(struct UIEdgeInsets)arg10 constrainedToSize:(struct CGSize)arg11 contentPadding:(struct UIEdgeInsets)arg12;
+ (struct CGSize)sizeForStyle:(long long)arg1 text:(id)arg2 font:(id)arg3 multipleLines:(_Bool)arg4 detailText:(id)arg5 font:(id)arg6 multipleLines:(_Bool)arg7 padding:(double)arg8 icon:(id)arg9 constrainedToSize:(struct CGSize)arg10 contentPadding:(struct UIEdgeInsets)arg11;
+ (struct CGSize)sizeForStyle:(long long)arg1 text:(id)arg2 font:(id)arg3 multipleLines:(_Bool)arg4 detailText:(id)arg5 font:(id)arg6 multipleLines:(_Bool)arg7 padding:(double)arg8 constrainedToSize:(struct CGSize)arg9 contentPadding:(struct UIEdgeInsets)arg10;
+ (struct CGSize)sizeForStyle:(long long)arg1 text:(id)arg2 multipleLines:(_Bool)arg3 detailText:(id)arg4 multipleLines:(_Bool)arg5 constrainedToSize:(struct CGSize)arg6 contentPadding:(struct UIEdgeInsets)arg7;
+ (id)_cellForCollectionView:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 withText:(id)arg5 detailText:(id)arg6;
+ (id)iconCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 icon:(id)arg5 horizontalIconPadding:(struct UIEdgeInsets)arg6;
+ (id)iconCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 icon:(id)arg5;
+ (id)iconCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 icon:(id)arg4;
+ (id)value2CellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4;
+ (id)value1CellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4;
+ (id)subtitleCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 reuseIdentifier:(id)arg5;
+ (id)subtitleCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4;
+ (id)cellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3;
+ (id)cellForCollectionView:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 initialization:(CDUnknownBlockType)arg5;
@property(nonatomic) struct UIEdgeInsets horizontalIconPadding; // @synthesize horizontalIconPadding=_horizontalIconPadding;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) double detailTextPadding; // @synthesize detailTextPadding=_detailTextPadding;
@property(nonatomic) _Bool multipleDetailTextLines; // @synthesize multipleDetailTextLines=_multipleDetailTextLines;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(nonatomic) _Bool multipleTextLines; // @synthesize multipleTextLines=_multipleTextLines;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)initializeStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
