//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtaskState.h>

@class NSArray;

@interface TFNOnboardingChoiceSelectionSubtaskState : TFNOnboardingSubtaskState
{
    NSArray *_selectedChoices;
}

@property(copy, nonatomic) NSArray *selectedChoices; // @synthesize selectedChoices=_selectedChoices;
- (void).cxx_destruct;
- (void)addStateToJSONDictionary:(id)arg1;

@end
