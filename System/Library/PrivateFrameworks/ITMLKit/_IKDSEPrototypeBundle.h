//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject
{
    NSMutableArray *_prototypes;	// 8 = 0x8
    NSMutableArray *_entries;	// 16 = 0x10
    struct {
        _Bool areEntriesDirty;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008e2f3
- (void)addPrototype:(id)arg1 forIndexes:(id)arg2;	// IMP=0x000000000008e19a
- (id)allPrototypes;	// IMP=0x000000000008e18c
- (id)prototypeForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008dfbe
- (id)init;	// IMP=0x000000000008df17

@end

