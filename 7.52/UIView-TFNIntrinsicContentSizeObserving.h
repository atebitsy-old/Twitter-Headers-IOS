//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (TFNIntrinsicContentSizeObserving)
+ (void)_tfn_registerForIntrinsicContentSizeObserving:(_Bool)arg1;
+ (void)tfn_unregisterForIntrinsicContentSizeObserving;
+ (void)tfn_registerForIntrinsicContentSizeObserving;
- (void)_tfn_setIntrinsicContentSizeInvalidationRecursionGuardActive:(_Bool)arg1;
- (_Bool)_tfn_isIntrinsicContentSizeInvalidationRecursionGuardActive;
- (void)_tfn_recursionGuardedInvalidateIntrinsicContentSize;
- (_Bool)_tfn_invalidateIntrinsicContentSizeRecursively;
- (void)_tfn_observableInvalidateIntrinsicContentSize;
- (_Bool)tfn_terminatesInvalidateIntrinsicContentSizeRecursion;
- (void)tfn_invalidateIntrinsicContentSizeRecursively;
- (void)tfn_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
@end

