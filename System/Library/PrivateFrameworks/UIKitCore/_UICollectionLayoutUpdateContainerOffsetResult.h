//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutUpdateContainerOffsetResult-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutUpdateContainerOffsetResult : NSObject <_UICollectionLayoutUpdateContainerOffsetResult>
{
    NSMutableDictionary *_invalidatedSupplementaryIndexesDict;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002608f4
- (void)addInvalidatedSupplementaryForKind:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000260756
- (id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1;	// IMP=0x0000000000260668
@property(readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
- (id)init;	// IMP=0x00000000002605ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
