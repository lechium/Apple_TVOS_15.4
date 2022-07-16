//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class HBAppGridView, HBRootCell, NSArray, NSIndexPath;

@protocol HBAppGridViewDataSource <NSObject>
- (void)appGridView:(HBAppGridView *)arg1 cancelPrefetchingForItemsAtIndexPaths:(NSArray *)arg2;
- (void)appGridView:(HBAppGridView *)arg1 prefetchItemsAtIndexPaths:(NSArray *)arg2;
- (HBRootCell *)appGridView:(HBAppGridView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)numberOfApplicationsInAppGridView:(HBAppGridView *)arg1;

@optional
- (void)appGridView:(HBAppGridView *)arg1 droppedItemAtIndexPathOutOfBounds:(NSIndexPath *)arg2 isLeft:(_Bool)arg3;
- (void)appGridView:(HBAppGridView *)arg1 droppedItemAtIndexPath:(NSIndexPath *)arg2 onItemAtIndexPath:(NSIndexPath *)arg3;
- (void)appGridView:(HBAppGridView *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)appGridView:(HBAppGridView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
@end

