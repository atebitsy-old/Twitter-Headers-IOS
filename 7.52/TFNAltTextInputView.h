//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TFNTextView, UIColor, UILabel;
@protocol TFNAltTextInputViewDelegate;

@interface TFNAltTextInputView : UIView
{
    TFNTextView *_textView;
    UILabel *_placeholderLabel;
    id <TFNAltTextInputViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TFNAltTextInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updatePlaceholderAnimated:(_Bool)arg1;
- (void)_textViewDidChange:(id)arg1;
- (void)scrollToTop;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) double minimumHeight;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) _Bool scrollEnabled;
@property(nonatomic) struct UIEdgeInsets textInsets;
@property(copy, nonatomic) NSString *placeholder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

