//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1TimelinesItemsViewControllerDataViewAdapter.h>

@class NSMapTable;
@protocol TFNOnboardingTaskService;

@interface T1OnboardingInlineTaskDataViewAdapter : T1TimelinesItemsViewControllerDataViewAdapter
{
    id <TFNOnboardingTaskService> _taskService;
    NSMapTable *_taskToNavigationController;
}

- (void).cxx_destruct;
- (id)identifierForItem:(id)arg1;
- (id)hostedTableViewCell:(id)arg1 viewControllerForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithDataViewController:(id)arg1 taskService:(id)arg2;
- (id)initWithDataViewController:(id)arg1;

@end

