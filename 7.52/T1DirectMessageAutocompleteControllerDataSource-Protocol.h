//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1DirectMessageAutocompleteController;

@protocol T1DirectMessageAutocompleteControllerDataSource <NSObject>
- (void)directMessageAutocompleteController:(T1DirectMessageAutocompleteController *)arg1 sectionsForAutocompleteResultType:(long long)arg2 query:(NSString *)arg3 source:(unsigned long long)arg4 completion:(void (^)(T1ComposeTypeaheadResult *))arg5;
@end

