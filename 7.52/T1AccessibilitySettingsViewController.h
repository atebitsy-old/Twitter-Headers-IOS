//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNTwitterAccount;

@interface T1AccessibilitySettingsViewController : TFNItemsDataViewController
{
    // Error parsing type: , name: account
    // Error parsing type: , name: dataSaverSettings
    // Error parsing type: , name: hashtagItem
    // Error parsing type: , name: includeUsernamesInTimelinesItem
    // Error parsing type: , name: linkShortenedItem
    // Error parsing type: , name: magicTapItem
    // Error parsing type: , name: highContrastItem
    // Error parsing type: , name: altTextHelpItem.storage
    // Error parsing type: , name: SFSVCItem
    // Error parsing type: , name: altTextItem.storage
    // Error parsing type: , name: reduceMotionItem
    // Error parsing type: , name: reduceMotionHelpItem
    // Error parsing type: , name: videoAutoplayItem.storage
    // Error parsing type: , name: videoAutoplayDescriptionItem.storage
    // Error parsing type: , name: videoAutoplayHelpItem.storage
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)dataSaverSettingsDidChange;
- (void)systemSettingsDidChange;
- (void)update:(_Bool)arg1;
- (id)scribePage;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end
