//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, T1CardContainerView, TFNTwitterCardContext;

@interface T1CardItem : NSObject
{
    TFNTwitterCardContext *_cardContext;
    T1CardContainerView *_cardContainerView;
    NSString *_scribeComponent;
}

@property(copy, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
@property(retain, nonatomic) T1CardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;

@end

