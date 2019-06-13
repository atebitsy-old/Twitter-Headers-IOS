//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TIPImageStoreRequest-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, UIImage;
@protocol TIPImageStoreRequestHydrater;

@interface T1VideoPreviewImageExtractorImageStoreRequest : NSObject <TIPImageStoreRequest>
{
    NSURL *_imageURL;
    NSString *_imageIdentifier;
    UIImage *_image;
    double _timeToLive;
}

@property(readonly, nonatomic) double timeToLive; // @synthesize timeToLive=_timeToLive;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 imageIdentifier:(id)arg2 image:(id)arg3;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *animationFrameDurations;
@property(readonly, nonatomic) unsigned long long animationLoopCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDictionary *decoderConfigMap;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <TIPImageStoreRequestHydrater> hydrater;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) struct CGSize imageDimensions;
@property(readonly, copy, nonatomic) NSString *imageFilePath;
@property(readonly, copy, nonatomic) NSString *imageType;
@property(readonly, nonatomic) long long options;
@property(readonly) Class superclass;

@end
