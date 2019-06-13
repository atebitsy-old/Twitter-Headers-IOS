//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PHAsset, UIImage;

@interface T1CameraPhotoCapture : NSObject
{
    _Bool _hasAttemptedToSaveToPhotosAlbum;
    NSData *_imageData;
    UIImage *_preview;
    PHAsset *_asset;
}

+ (id)_assetWritingQueue;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool hasAttemptedToSaveToPhotosAlbum; // @synthesize hasAttemptedToSaveToPhotosAlbum=_hasAttemptedToSaveToPhotosAlbum;
@property(retain, nonatomic) UIImage *preview; // @synthesize preview=_preview;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)writeToSavedPhotosAlbumIfNecessaryCompletion:(CDUnknownBlockType)arg1;
- (void)mediaAssetForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderPreview:(CDUnknownBlockType)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end
