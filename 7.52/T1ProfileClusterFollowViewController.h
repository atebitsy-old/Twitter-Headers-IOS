//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataViewController.h>

#import <T1Twitter/T1ResizableHeaderSubheader-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount;
@protocol T1ProfileDataSource;

@interface T1ProfileClusterFollowViewController : TFNDataViewController <T1ResizableHeaderSubheader, T1TwitterAuthenticated>
{
    _Bool _observingProfileDataSourceInvalidations;
    CDUnknownBlockType _preferredHeightCheckBlock;
    id _subheaderInfo;
    id <T1ProfileDataSource> _profileDataSource;
    TFNTwitterAccount *_account;
    CDUnknownBlockType _dismissBlock;
    NSArray *_recommendations;
}

@property(nonatomic, getter=isObservingProfileDataSourceInvalidations) _Bool observingProfileDataSourceInvalidations; // @synthesize observingProfileDataSourceInvalidations=_observingProfileDataSourceInvalidations;
@property(copy, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) id <T1ProfileDataSource> profileDataSource; // @synthesize profileDataSource=_profileDataSource;
@property(retain, nonatomic) id subheaderInfo; // @synthesize subheaderInfo=_subheaderInfo;
@property(copy, nonatomic) CDUnknownBlockType preferredHeightCheckBlock; // @synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (double)_heightForClusterFollowRecommendationRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (double)_heightForClusterFollowHeaderRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_clusterRecommendationCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_didSelectUserRecommendation:(id)arg1 atIndexPath:(id)arg2;
- (id)_clusterRecommendationHeaderCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_headerItemWithTitle:(id)arg1;
- (id)_scribeParameters;
- (void)_handleProfileDataSourceDidInvalidateNotification:(id)arg1;
- (void)_stopObservingProfileDataSourceInvalidations;
- (void)_startObservingProfileDataSourceInvalidations;
- (double)preferredHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

