//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVControlBarItem.h>

@class TFNPaddedButton, UIButton, UIImage;

@interface T1ControlBarMediaExpandButton : TAVControlBarItem
{
    TFNPaddedButton *_button;
    UIImage *_mediaExpandImage;
}

@property(retain, nonatomic) UIImage *mediaExpandImage; // @synthesize mediaExpandImage=_mediaExpandImage;
@property(retain, nonatomic) TFNPaddedButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *view;
- (id)initWithIdentifier:(id)arg1;

@end
