//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLifecycleTools/TLTGenericBackgroundFetchTask.h>

@interface T1SpotlightBackgroundFetchTask : TLTGenericBackgroundFetchTask
{
    CDUnknownBlockType _completion;
    unsigned long long _result;
}

@property unsigned long long result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)cancel;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

