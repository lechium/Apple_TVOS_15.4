//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UICollectionViewFlowLayoutInvalidationContext
{
    struct {
        unsigned int invalidateDelegateMetrics:1;
        unsigned int invalidateAttributes:1;
    } _flowLayoutInvalidationFlags;	// 116 = 0x74
}

@property(nonatomic) _Bool invalidateFlowLayoutDelegateMetrics;
@property(nonatomic) _Bool invalidateFlowLayoutAttributes;
- (id)init;	// IMP=0x0000000000333fc1

@end

