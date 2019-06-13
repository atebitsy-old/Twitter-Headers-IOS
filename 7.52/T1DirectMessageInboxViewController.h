//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1DirectMessageActiveDevicePromptDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationCellActions-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationHost-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationHostViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationParticipantsListViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageInboxConversationActions-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/TFNPushedSplitViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNScopedContainerViewControllerDelegate-Protocol.h>

@class NSArray, NSString, T1DirectMessageActiveDevicePromptManager, T1DirectMessageConversation, T1DirectMessageConversationHostViewController, T1DirectMessagePrimaryInboxViewController, T1DirectMessageRequestsInboxViewController, T1EmptyContentViewController, TFNExpandingButtonItem, TFNItemsDataViewController, TFNScopedContainerViewController, TFNTwitterAccount, UIBarButtonItem;
@protocol TFNDirectMessageInbox;

@interface T1DirectMessageInboxViewController : TFNViewController <T1DirectMessageInboxConversationActions, T1DirectMessageConversationCellActions, TFNScopedContainerViewControllerDelegate, T1DirectMessageConversationParticipantsListViewControllerDelegate, T1DirectMessageActiveDevicePromptDelegate, T1DirectMessageConversationHostViewControllerDelegate, T1JumpBackToHomeTimelineBehavior, TFNPushedSplitViewControllerDelegate, T1DirectMessageConversationHost>
{
    _Bool _didShowAddressBookFollowAmbientNotification;
    _Bool _clearsSelectionOnViewWillAppear;
    _Bool _scopeBarHidden;
    TFNTwitterAccount *_account;
    UIBarButtonItem *_composeBarButtonItem;
    id <TFNDirectMessageInbox> _messageInbox;
    T1DirectMessageConversation *_selectedConversation;
    T1DirectMessageActiveDevicePromptManager *_activeDevicePromptManager;
    TFNScopedContainerViewController *_contentViewController;
    T1DirectMessagePrimaryInboxViewController *_trustedConversationsViewController;
    T1DirectMessageRequestsInboxViewController *_untrustedConversationsViewController;
    T1EmptyContentViewController *_emptyInboxViewController;
    T1EmptyContentViewController *_untrustedConversationsEmptyViewController;
    T1EmptyContentViewController *_emptyDetailViewController;
    TFNItemsDataViewController *_loadingViewController;
    TFNExpandingButtonItem *_composeNewDMActionButtonItem;
    T1DirectMessageConversationHostViewController *_conversationHostViewController;
    CDUnknownBlockType _executeAfterViewAppears;
}

@property(copy, nonatomic) CDUnknownBlockType executeAfterViewAppears; // @synthesize executeAfterViewAppears=_executeAfterViewAppears;
@property(retain, nonatomic) T1DirectMessageConversationHostViewController *conversationHostViewController; // @synthesize conversationHostViewController=_conversationHostViewController;
@property(nonatomic) _Bool scopeBarHidden; // @synthesize scopeBarHidden=_scopeBarHidden;
@property(retain, nonatomic) TFNExpandingButtonItem *composeNewDMActionButtonItem; // @synthesize composeNewDMActionButtonItem=_composeNewDMActionButtonItem;
@property(nonatomic) __weak TFNItemsDataViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(nonatomic) __weak T1EmptyContentViewController *emptyDetailViewController; // @synthesize emptyDetailViewController=_emptyDetailViewController;
@property(nonatomic) __weak T1EmptyContentViewController *untrustedConversationsEmptyViewController; // @synthesize untrustedConversationsEmptyViewController=_untrustedConversationsEmptyViewController;
@property(nonatomic) __weak T1EmptyContentViewController *emptyInboxViewController; // @synthesize emptyInboxViewController=_emptyInboxViewController;
@property(nonatomic) __weak T1DirectMessageRequestsInboxViewController *untrustedConversationsViewController; // @synthesize untrustedConversationsViewController=_untrustedConversationsViewController;
@property(nonatomic) __weak T1DirectMessagePrimaryInboxViewController *trustedConversationsViewController; // @synthesize trustedConversationsViewController=_trustedConversationsViewController;
@property(retain, nonatomic) TFNScopedContainerViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) T1DirectMessageActiveDevicePromptManager *activeDevicePromptManager; // @synthesize activeDevicePromptManager=_activeDevicePromptManager;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(nonatomic) _Bool didShowAddressBookFollowAmbientNotification; // @synthesize didShowAddressBookFollowAmbientNotification=_didShowAddressBookFollowAmbientNotification;
@property(retain, nonatomic) T1DirectMessageConversation *selectedConversation; // @synthesize selectedConversation=_selectedConversation;
@property(retain, nonatomic) id <TFNDirectMessageInbox> messageInbox; // @synthesize messageInbox=_messageInbox;
@property(retain, nonatomic) UIBarButtonItem *composeBarButtonItem; // @synthesize composeBarButtonItem=_composeBarButtonItem;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_presentUserProfile:(id)arg1 conversation:(id)arg2 displayInModal:(_Bool)arg3 sourceView:(id)arg4 sourceRect:(struct CGRect)arg5;
- (id)t1_actionButtonItemsWithAccount:(id)arg1;
- (_Bool)t1_showsActionButton;
- (void)activeDevicePromptDidCompleteWithPromptManager:(id)arg1 didRegister:(_Bool)arg2;
- (void)scopedContainerViewController:(id)arg1 didSelectViewControllerAtIndex:(long long)arg2;
- (id)scopedContainerViewController:(id)arg1 titleForSegmentAtIndex:(long long)arg2;
- (void)didTapAvatarForConversation:(id)arg1 sender:(id)arg2;
- (void)loadMoreConversationsWithCursor:(id)arg1;
- (void)showContextMenuForConversation:(id)arg1 sender:(id)arg2;
- (void)_showMuteOptions:(id)arg1 sender:(id)arg2;
- (void)markConversationAsSeen:(id)arg1;
- (void)disableNotificationsForConversation:(id)arg1 sender:(id)arg2;
- (void)enableNotificationsForConversation:(id)arg1;
- (void)reportConversation:(id)arg1;
- (void)deleteConversation:(id)arg1;
- (id)previewConversation:(id)arg1;
- (void)viewConversation:(id)arg1;
- (void)dismissCurrentConversationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentConversation:(id)arg1 text:(id)arg2 welcomeMessageID:(id)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 options:(unsigned long long)arg6 animated:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_presentConversation:(id)arg1 text:(id)arg2 welcomeMessageID:(id)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 options:(unsigned long long)arg6 animated:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)pushedSplitViewController:(id)arg1 didPopDetailViewController:(id)arg2;
- (void)pushedSplitViewController:(id)arg1 didChangeToDisplayMode:(long long)arg2;
- (void)pushedSplitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)scrollToTop;
- (void)_showDetailViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_viewControllerForTab:(unsigned long long)arg1;
- (void)_inboxDidUpdateMetadata:(id)arg1;
- (void)_updateButtons;
- (void)_updateScopeBar;
- (void)_updateContentViewControllers;
- (_Bool)_shouldShowEmptyDetailViewForDisplayMode:(long long)arg1;
- (void)_showEmptyDetailViewIfNecessaryForDisplayMode:(long long)arg1;
- (void)_hideEmptyDetailViewIfNecessaryForDisplayMode:(long long)arg1;
- (void)_updateEmptyDetailView;
- (_Bool)_shouldShowScopeBar;
- (void)_refresh;
- (void)_directMessagesDidReset:(id)arg1;
- (void)_inboxDidUpdateTimeline:(id)arg1;
- (id)_loadLoadingViewController;
- (id)_loadEmptyDetailViewController;
- (id)_loadUntrustedConversationsEmptyViewController;
- (id)_loadEmptyInboxViewController;
- (id)_loadUntrustedConversationsViewController;
- (id)_loadTrustedConversationsViewController;
- (void)_composeNewDirectMessageWithPrefilledText:(id)arg1 popoverSource:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_composeNewDirectMessage:(id)arg1;
- (void)_clearInvalidSelectedConversation;
- (void)_openSettings;
- (void)handleComposeMessageKeyCommand;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (_Bool)t1_showsSearchAction;
- (void)directMessageConversationParticipantsListViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)conversationHostViewController:(id)arg1 didSelectConversation:(id)arg2;
- (void)conversationHostViewController:(id)arg1 didUpdateCreationState:(long long)arg2;
- (id)scribeParameters:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)tfn_contentScrollViewWillBeginDragging:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillFullyDisappear:(_Bool)arg1;
- (void)viewWillFullyAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *loadedInboxTimelineViewControllers;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showDirectMessageComposeWithPrefilledText:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccount:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
