//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ProfileDisplayContentProvider.h>

@class T1LoadingStateViewController;

@interface T1ProfileDisplayLoadingContentProvider : T1ProfileDisplayContentProvider
{
    T1LoadingStateViewController *_loadingStateViewController;
}

@property(nonatomic) __weak T1LoadingStateViewController *loadingStateViewController; // @synthesize loadingStateViewController=_loadingStateViewController;
- (void).cxx_destruct;
- (_Bool)_isPermissionToShowUserInfoUnknown;
- (id)generateDefaultMainViewController;
- (void)profileDataSourceDidInvalidateWithReason:(long long)arg1;
- (_Bool)shouldShowUserImagesWhenCurrent;
- (_Bool)canBecomeCurrent;
@property(readonly, nonatomic) unsigned long long loadingState;

@end
