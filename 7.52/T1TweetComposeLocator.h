//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1PlacePickerViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>
#import <T1Twitter/TFNTwitterAutoGeotaggerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterPOISuggesterDelegate-Protocol.h>

@class NSString, TFNTwitterAccount, TFNTwitterAutoGeotagger, TFNTwitterComposePlaceStore, TFNTwitterCompositionGeotagSession, TFNTwitterPOISuggester, TFSTwitterPlace, UIButton;
@protocol T1TweetComposeLocatorDelegate;

@interface T1TweetComposeLocator : NSObject <TFNTwitterPOISuggesterDelegate, T1PlacePickerViewControllerDelegate, TFNTwitterAutoGeotaggerDelegate, T1TwitterAuthenticated>
{
    _Bool _isFinishedLoading;
    TFNTwitterAccount *_account;
    TFNTwitterComposePlaceStore *_placeStore;
    id <T1TweetComposeLocatorDelegate> _delegate;
    NSString *_scribePage;
    UIButton *_placePickerButton;
    TFNTwitterPOISuggester *_poiSuggester;
    TFNTwitterCompositionGeotagSession *_geotagSession;
    TFNTwitterAutoGeotagger *_autotagger;
}

@property(retain, nonatomic) TFNTwitterAutoGeotagger *autotagger; // @synthesize autotagger=_autotagger;
@property(retain, nonatomic) TFNTwitterCompositionGeotagSession *geotagSession; // @synthesize geotagSession=_geotagSession;
@property(retain, nonatomic) TFNTwitterPOISuggester *poiSuggester; // @synthesize poiSuggester=_poiSuggester;
@property(nonatomic) __weak UIButton *placePickerButton; // @synthesize placePickerButton=_placePickerButton;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(nonatomic) __weak id <T1TweetComposeLocatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isFinishedLoading; // @synthesize isFinishedLoading=_isFinishedLoading;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_presentModalSheetViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 preferredPresentationStyle:(long long)arg4 layoutDelegate:(id)arg5 delegate:(id)arg6;
- (void)_t1_presentFullScreenStyleModalSheetWithContentViewController:(id)arg1 delegate:(id)arg2;
- (void)_t1_selectedPlaceDidUpdate:(id)arg1;
@property(retain, nonatomic) TFSTwitterPlace *selectedPlace;
@property(retain, nonatomic) TFNTwitterComposePlaceStore *placeStore; // @synthesize placeStore=_placeStore;
- (void)POISuggester:(id)arg1 didCompleteWithPlaces:(id)arg2;
- (void)geoAutotagger:(id)arg1 didCompleteWithPlace:(id)arg2;
- (void)_t1_enableGeotaggingSettingWithCallback:(CDUnknownBlockType)arg1;
- (void)_t1_setAutotaggingStateEnabled:(_Bool)arg1;
- (void)_t1_suggestPlaces;
- (void)_t1_performGeoLookupWithCallback:(CDUnknownBlockType)arg1;
- (void)_t1_handleAutotagWithLocation:(id)arg1;
- (void)_t1_autoGeotagComposition;
- (void)placePickerViewControllerShouldDismiss:(id)arg1;
- (void)placePickerViewController:(id)arg1 didChangePreciseLocationState:(_Bool)arg2;
- (void)_t1_removeSelectedPlace;
- (void)placePickerViewController:(id)arg1 didDeselectPlace:(id)arg2;
- (void)placePickerViewController:(id)arg1 didSelectPlace:(id)arg2;
- (void)_t1_presentPlacePicker:(id)arg1;
- (void)_t1_setupAndPresentPlacePicker;
- (void)_t1_handleGeotagEnabledWithLocation:(id)arg1;
- (void)_t1_handleRealtimeLocation:(id)arg1 locationServicesAvailable:(_Bool)arg2 error:(id)arg3;
- (void)activatePlacePickerFromButton:(id)arg1;
- (void)updateAssetLocation:(id)arg1;
- (void)updateAssetLocationWhenRemovingAttachment;
- (void)startAutoTagging;
- (id)initWithLocatorDelegate:(id)arg1 account:(id)arg2 scribePage:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
