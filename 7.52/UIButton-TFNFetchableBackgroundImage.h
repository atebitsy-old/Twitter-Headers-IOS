//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <TFNUI/TIPImageFetchable-Protocol.h>

@class NSString, TIPImageContainer, UIImage;

@interface UIButton (TFNFetchableBackgroundImage) <TIPImageFetchable>
@property(retain, nonatomic) UIImage *tip_fetchedImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) TIPImageContainer *tip_fetchedImageContainer;
@end
