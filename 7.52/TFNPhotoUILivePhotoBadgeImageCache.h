//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface TFNPhotoUILivePhotoBadgeImageCache : NSObject
{
    NSCache *_cache;
}

+ (id)sharedCache;
@property(readonly, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)setLivePhotoBadgeImage:(id)arg1 forFitSize:(struct CGSize)arg2 options:(unsigned long long)arg3;
- (id)livePhotoBadgeImageForFitSize:(struct CGSize)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

