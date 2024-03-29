//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFNTwitterCompositionUpdateStatusDependency-Protocol.h>

@class NSString, TFNTwitterComposition, TFNTwitterCompositionUploadContext, TFNTwitterStatus;

@interface TFNTwitterCompositionScribeAttachmentsOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency>
{
    TFNTwitterStatus *_status;
    TFNTwitterComposition *_composition;
    TFNTwitterCompositionUploadContext *_context;
}

@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(retain) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)_tfn_main_scribeCompositionAction:(id)arg1 parameters:(id)arg2;
- (void)_tfn_main_scribeAttachmentAction:(id)arg1 component:(id)arg2 parameters:(id)arg3;
- (void)_ftn_main_scribeCustomCameraUsageForAttachment:(id)arg1;
- (void)_ftn_main_scribeCameraCapturedAttachmentTimeIntervalToCompositionWithTweetForAttachment:(id)arg1;
- (void)_ftn_main_scribeCameraCapturedAttachmentUsageForAttachment:(id)arg1;
- (void)_tfn_main_scribeForAttachment:(id)arg1;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithComposition:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

