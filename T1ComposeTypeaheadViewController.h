//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class NSArray, T1ComposeTypeaheadPrompt, T1ComposeTypeaheadResult, T1TopicAutocompleteRowAdapter, T1TypeaheadUserTableRowAdapter, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1ComposeTypeaheadViewControllerDelegate;

@interface T1ComposeTypeaheadViewController : TFNItemsDataViewController
{
    _Bool _useDarkMode;
    TFNTwitterAccount *_account;
    NSArray *_includedMentionUserIDs;
    NSArray *_excludedReplyUserIDs;
    T1ComposeTypeaheadPrompt *_searchPrompt;
    T1ComposeTypeaheadResult *_results;
    id <T1ComposeTypeaheadViewControllerDelegate> _delegate;
    TFSTwitterScribeContext *_scribeContext;
    NSArray *_scribeItems;
    T1TypeaheadUserTableRowAdapter *_userTableRowAdapter;
    T1TopicAutocompleteRowAdapter *_topicRowAdapter;
}

@property(readonly, nonatomic) T1TopicAutocompleteRowAdapter *topicRowAdapter; // @synthesize topicRowAdapter=_topicRowAdapter;
@property(readonly, nonatomic) T1TypeaheadUserTableRowAdapter *userTableRowAdapter; // @synthesize userTableRowAdapter=_userTableRowAdapter;
@property(copy, nonatomic) NSArray *scribeItems; // @synthesize scribeItems=_scribeItems;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) __weak id <T1ComposeTypeaheadViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useDarkMode; // @synthesize useDarkMode=_useDarkMode;
@property(retain, nonatomic) T1ComposeTypeaheadResult *results; // @synthesize results=_results;
@property(retain, nonatomic) T1ComposeTypeaheadPrompt *searchPrompt; // @synthesize searchPrompt=_searchPrompt;
@property(copy, nonatomic) NSArray *excludedReplyUserIDs; // @synthesize excludedReplyUserIDs=_excludedReplyUserIDs;
@property(copy, nonatomic) NSArray *includedMentionUserIDs; // @synthesize includedMentionUserIDs=_includedMentionUserIDs;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_t1_scribeItemForResultItem:(id)arg1 index:(unsigned long long)arg2;
- (void)_t1_scribeClickForItem:(id)arg1 index:(unsigned long long)arg2;
- (void)_t1_scribeResultsImpression;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)update:(_Bool)arg1;
- (void)_t1_updateRepliedToUserIDs;
@property(nonatomic) _Bool showSocialContext;
- (void)_t1_updateBackground;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithScribeContext:(id)arg1;

@end
