//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1StatusViewEventHandler-Protocol.h>

@class NSString, T1SlideshowStatusView, T1SlideshowViewController;

@interface T1StatusSlideshowViewEventHandler : NSObject <T1StatusViewEventHandler>
{
    T1SlideshowViewController *_controller;
    T1SlideshowStatusView *_slideshowStatusView;
}

- (void).cxx_destruct;
- (void)_scribeAction:(id)arg1 element:(id)arg2 status:(id)arg3 controller:(id)arg4;
- (void)_handleCaretTapEvent:(id)arg1 withController:(id)arg2 slideshowStatusView:(id)arg3;
- (void)_handleActiveRangeTapEvent:(id)arg1 withController:(id)arg2 slideshowStatusView:(id)arg3;
- (void)_handleAvatarTapEvent:(id)arg1 withController:(id)arg2 slideshowStatusView:(id)arg3;
- (id)handleStatusViewEvent:(id)arg1;
- (id)initWithController:(id)arg1 slideshowStatusView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
