//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, T1PhotoCachingImageManagerHelper;

@protocol T1PhotoCachingImageManagerHelperDelegate <NSObject>
- (NSArray *)cachingImageManagerHelper:(T1PhotoCachingImageManagerHelper *)arg1 assetsInRect:(struct CGRect)arg2;
- (_Bool)cachingImageManagerHelper:(T1PhotoCachingImageManagerHelper *)arg1 shouldUpdateForRect:(struct CGRect)arg2 cachedRect:(struct CGRect)arg3;
@end
