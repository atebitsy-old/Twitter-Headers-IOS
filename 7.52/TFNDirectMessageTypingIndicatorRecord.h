//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTimer;
@protocol TFNDirectMessageUser;

@interface TFNDirectMessageTypingIndicatorRecord : NSObject
{
    TFSTimer *_timer;
    id <TFNDirectMessageUser> _user;
}

@property(readonly, nonatomic) id <TFNDirectMessageUser> user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUser:(id)arg1 doneTyping:(CDUnknownBlockType)arg2;
- (id)init;

@end

