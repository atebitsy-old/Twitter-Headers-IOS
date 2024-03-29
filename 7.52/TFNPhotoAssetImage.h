//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, PHAsset, UIImage;

@interface TFNPhotoAssetImage : NSObject
{
    _Bool _animatedGIF;
    _Bool _needsToTestAnimatedGIF;
    UIImage *_image;
    NSString *_caption;
    NSDictionary *_metadata;
    PHAsset *_asset;
    NSData *_imageData;
    NSString *_imageDataUTI;
    long long _imageOrientation;
}

+ (void)requestAssetImageForAsset:(id)arg1 allowNetworkAccess:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)requestAssetImageForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool needsToTestAnimatedGIF; // @synthesize needsToTestAnimatedGIF=_needsToTestAnimatedGIF;
@property(readonly, nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(readonly, copy, nonatomic) NSString *imageDataUTI; // @synthesize imageDataUTI=_imageDataUTI;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic, getter=isAnimatedGIF) _Bool animatedGIF; // @synthesize animatedGIF=_animatedGIF;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithAsset:(id)arg1 imageData:(id)arg2 imageDataUTI:(id)arg3 imageOrientation:(long long)arg4;
- (id)init;

@end

