//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNAttributedTextView.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSDictionary, NSString, UIColor;
@protocol TFNHTMLTextViewDelegate;

@interface TFNHTMLTextView : TFNAttributedTextView <TFNAttributedTextViewDelegate>
{
    id <TFNHTMLTextViewDelegate> _htmlViewDelegate;
    NSString *_htmlText;
    UIColor *_linkTextColor;
    NSDictionary *_attributes;
    NSDictionary *_rangeURLMappings;
}

@property(readonly, nonatomic) NSDictionary *rangeURLMappings; // @synthesize rangeURLMappings=_rangeURLMappings;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(retain, nonatomic) NSString *htmlText; // @synthesize htmlText=_htmlText;
@property(nonatomic) __weak id <TFNHTMLTextViewDelegate> htmlViewDelegate; // @synthesize htmlViewDelegate=_htmlViewDelegate;
- (void).cxx_destruct;
- (void)_parseHtml:(id)arg1;
- (void)attributedTextViewDidTapInactiveArea:(id)arg1;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)setDelegate:(id)arg1;
- (id)initWithHtml:(id)arg1 attributes:(id)arg2 linkTextColor:(id)arg3 delegate:(id)arg4;
- (id)initWithHtml:(id)arg1 font:(id)arg2 textAlignment:(long long)arg3 textColor:(id)arg4 linkTextColor:(id)arg5 delegate:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

