//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <USDKit/USKIterator-Protocol.h>

@interface USKNodeSubtreeIterator : NSObject <USKIterator>
{
    struct UsdPrimRange _range;	// 8 = 0x8
    struct iterator _it;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x0000000000468adc
- (void).cxx_destruct;	// IMP=0x0000000000468ab8
- (id)nextObject;	// IMP=0x0000000000468901
- (id)initWithPrim:(const void *)arg1 withPredicate:(struct Usd_PrimFlagsPredicate)arg2;	// IMP=0x0000000000468865
- (id)initWithScene:(const void *)arg1 withPredicate:(struct Usd_PrimFlagsPredicate)arg2;	// IMP=0x00000000004687bd
- (id)initWithPrim:(const void *)arg1;	// IMP=0x000000000046871d
- (id)initWithScene:(const void *)arg1;	// IMP=0x0000000000468666
- (id)initWithSubtreeRange:(const void *)arg1;	// IMP=0x0000000000468556
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000468527

@end

