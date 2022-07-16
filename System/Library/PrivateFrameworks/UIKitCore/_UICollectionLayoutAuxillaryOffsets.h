//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryOffsets-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryOffsets : NSObject <_UICollectionLayoutAuxillaryOffsets, NSCopying>
{
    NSMutableDictionary *_offsets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000026a1fa
- (_Bool)containsIndex:(long long)arg1 forElementKind:(id)arg2;	// IMP=0x000000000026a1a4
- (_Bool)overlapsOffsets:(id)arg1;	// IMP=0x0000000000269f74
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000269d73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000269d44
- (long long)offsetForElementKind:(id)arg1;	// IMP=0x0000000000269c77
- (id)indexesForElementKind:(id)arg1;	// IMP=0x0000000000269b4f
- (struct _NSRange)rangeForElementKind:(id)arg1;	// IMP=0x0000000000269a2b
- (id)offsetsByRebasingOnOffsets:(id)arg1;	// IMP=0x0000000000269350
- (id)offsetsByApplyingOffsets:(id)arg1;	// IMP=0x0000000000268f0f
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000268c41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
