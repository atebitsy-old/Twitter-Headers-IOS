//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, UIDragPreviewParameters, UITableView;
@protocol UIDragSession;

@protocol UITableViewDragDelegate <NSObject>
- (NSArray *)tableView:(UITableView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional
- (_Bool)tableView:(UITableView *)arg1 dragSessionIsRestrictedToDraggingApplication:(id <UIDragSession>)arg2;
- (_Bool)tableView:(UITableView *)arg1 dragSessionAllowsMoveOperation:(id <UIDragSession>)arg2;
- (void)tableView:(UITableView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (void)tableView:(UITableView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (UIDragPreviewParameters *)tableView:(UITableView *)arg1 dragPreviewParametersForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint)arg4;
@end

