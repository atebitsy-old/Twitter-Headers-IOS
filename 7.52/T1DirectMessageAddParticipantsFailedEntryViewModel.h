//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageActivityEntryViewModel.h>

@class NSString, TFSFlavoredRange;
@protocol TFNDirectMessageAddParticipantsFailedEntry;

@interface T1DirectMessageAddParticipantsFailedEntryViewModel : T1DirectMessageActivityEntryViewModel
{
    _Bool _showDetails;
    NSString *_text;
    TFSFlavoredRange *_showMoreTextRange;
}

- (_Bool)showDetails;
- (id)showMoreTextRange;
- (id)text;
- (void).cxx_destruct;
- (void)_updateText;
- (id)viewModelBySettingShowDetails:(_Bool)arg1;
- (id)initWithEntry:(id)arg1 displayState:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <TFNDirectMessageAddParticipantsFailedEntry> entry; // @dynamic entry;

@end

