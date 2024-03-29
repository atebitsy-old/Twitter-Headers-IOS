//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>

@class NSString, TFNButton, TFNDataViewItem, TFNTwitterAccount;

@interface T1PhoneAddedConfirmationViewController : TFNItemsDataViewController <T1TwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    TFNDataViewItem *_prompt;
    TFNDataViewItem *_discoverabilityItem;
    TFNButton *_doneButton;
}

@property(retain, nonatomic) TFNButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) TFNDataViewItem *discoverabilityItem; // @synthesize discoverabilityItem=_discoverabilityItem;
@property(retain, nonatomic) TFNDataViewItem *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_modifyDiscoverableByPhone:(_Bool)arg1 withBooleanItem:(id)arg2;
- (void)_done;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

