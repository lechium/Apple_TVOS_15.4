//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSMutableArray;
@protocol UILayoutItem;

@protocol _UIStatusBarRegionAxisLayout <NSObject>
@property(readonly, nonatomic) _Bool canOverflowItems;
- (NSArray *)constraintsForDisplayItems:(NSArray *)arg1 layoutGuides:(NSMutableArray *)arg2 inContainerItem:(id <UILayoutItem>)arg3 axis:(long long)arg4;

@optional
- (_Bool)mayFitDisplayItems:(NSArray *)arg1;
@end

