//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1FoundMediaCollectionViewCell, TFSTwitterFoundMediaObject;

@protocol T1FoundMediaCollectionViewCellDelegate <NSObject>

@optional
- (void)foundMediaCollectionViewCell:(T1FoundMediaCollectionViewCell *)arg1 didFailToLoadAnimatedImageForFoundMediaObject:(TFSTwitterFoundMediaObject *)arg2;
- (void)foundMediaCollectionViewCellDidLongPress:(T1FoundMediaCollectionViewCell *)arg1;
- (void)foundMediaCollectionViewCellDidEndTrackingLongPressGesture:(T1FoundMediaCollectionViewCell *)arg1;
- (_Bool)foundMediaCollectionViewCellShouldBeginTrackingLongPressGesture:(T1FoundMediaCollectionViewCell *)arg1;
@end
