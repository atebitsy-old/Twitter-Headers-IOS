//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@interface T1DirectMessageQuickShareViewController : TFNViewController
{
    // Error parsing type: , name: account
    // Error parsing type: , name: sharedItem
    // Error parsing type: , name: selectionManager
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: addressingViewController
    // Error parsing type: , name: composeBarController
    // Error parsing type: , name: composeBarTopBorderView
    // Error parsing type: , name: composeBarContainerView
    // Error parsing type: , name: pickerBottomBorderView
    // Error parsing type: , name: pickerViewController
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: isFirstTimeSearch
    // Error parsing type: , name: addressingBarHeightConstraint.storage
    // Error parsing type: , name: pickerViewHeightConstraint.storage
    // Error parsing type: , name: composeBarBottomConstraint.storage
    // Error parsing type: , name: didDismissBlock
    // Error parsing type: , name: resultsObserver
    // Error parsing type: , name: expectedKeyboardFrame
    // Error parsing type: , name: keyboardShouldBeShown
    // Error parsing type: , name: shouldShowDismissButton
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)scribeSection;
- (id)scribePage;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)isLayoutMetricsCanvasInheritedByChildViewController:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)layoutGuidesDidChange:(long long)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)dismissAnimated;
- (void)presentFrom:(id)arg1 source:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 sharedItem:(id)arg2 prefilledText:(id)arg3 placeholderText:(id)arg4;
@property(nonatomic, copy) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock;

@end

