//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1PhotoGalleryViewControllerDelegate-Protocol.h>

@class NSString, T1PhotoGalleryViewController;

@interface T1PhotoGalleryPresentationContext : NSObject <T1PhotoGalleryViewControllerDelegate>
{
    T1PhotoGalleryViewController *_photoGalleryViewController;
}

@property(retain, nonatomic) T1PhotoGalleryViewController *photoGalleryViewController; // @synthesize photoGalleryViewController=_photoGalleryViewController;
- (void).cxx_destruct;
- (void)photoGalleryViewControllerDidCancelSession:(id)arg1;
- (void)photoGalleryViewController:(id)arg1 didEndSessionWithAttachments:(id)arg2;
- (void)_t1_presentPhotoGalleryFromViewController:(id)arg1 account:(id)arg2 animated:(_Bool)arg3;
- (void)presentPhotoGalleryFromViewController:(id)arg1 account:(id)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

