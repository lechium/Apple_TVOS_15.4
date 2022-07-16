//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSIndexSet;

@protocol PXPresentedGridLayout <NSObject>
@property(readonly, nonatomic) long long presentedNumberOfRows;
- (NSIndexSet *)presentedItemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (NSIndexSet *)presentedItemsInRect:(struct CGRect)arg1;
- (CDStruct_e6148bb0)presentedItemLocationForItemAtIndex:(long long)arg1;
- (struct CGRect)presentedRectForItemAtIndex:(long long)arg1;
- (long long)presentedNumberOfColumnsAtRow:(long long)arg1;
- (long long)itemIndexForPresentedItemIndex:(long long)arg1;
- (long long)itemIndexForItem:(long long)arg1 inDirection:(unsigned long long)arg2;
@end

