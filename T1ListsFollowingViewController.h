//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ListsListViewController.h>

@class TFNTwitterAccount, TFNTwitterListList, TFSTwitterUserReference;

@interface T1ListsFollowingViewController : T1ListsListViewController
{
    TFNTwitterAccount *_account;
    TFSTwitterUserReference *_userReference;
    TFNTwitterListList *_listsList;
}

- (void)setListsList:(id)arg1;
- (id)listsList;
- (void)setUserReference:(id)arg1;
- (id)userReference;
- (void)setAccount:(id)arg1;
- (id)account;
- (void).cxx_destruct;
- (id)scribeSection;
- (void)_membershipsDidUpdate:(id)arg1;
- (void)_resetMemberships;
- (id)emptyListMessage;
- (id)emptyListHeading;
- (void)viewDidLoad;
- (id)init;

@end
