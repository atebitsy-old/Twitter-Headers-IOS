//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNPlaceholderTextView.h>

#import <T1Twitter/TFNFormTextInput-Protocol.h>

@class NSDictionary, NSString, TFNFormField, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol TFNFormTextInputCustomizationDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface TFNFormMultiLineTextField : TFNPlaceholderTextView <TFNFormTextInput>
{
    TFNFormField *_formField;
}

+ (double)private_stackedLineVerticalPadding;
+ (double)private_minimumHeightForLines:(long long)arg1;
+ (id)private_font;
+ (double)standardHeightForLayoutMetrics:(id)arg1 emphasized:(_Bool)arg2 stacked:(_Bool)arg3;
+ (void)initialize;
@property(retain, nonatomic) TFNFormField *formField; // @synthesize formField=_formField;
- (void).cxx_destruct;
- (_Bool)_shouldDisableAction:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)updateTextColor;
- (double)baselineYForBounds:(struct CGRect)arg1;
- (struct CGRect)layoutRectInBounds:(struct CGRect)arg1 stacked:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(nonatomic) __weak id <TFNFormTextInputCustomizationDelegate> customizationDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

@end

