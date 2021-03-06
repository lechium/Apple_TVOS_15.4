//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SideBoardCore/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SIBCEndpointStateManager : NSObject <NSFastEnumeration>
{
    NSMutableArray *_objects;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b60d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000000b5f7
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)objectForEndpointId:(id)arg1;	// IMP=0x000000000000b586
- (unsigned long long)_indexForEndpointId:(id)arg1;	// IMP=0x000000000000b494
- (void)_removeObjectForEndpointId:(id)arg1;	// IMP=0x000000000000b44e
- (void)removeObjectForEndpointId:(id)arg1;	// IMP=0x000000000000b43c
- (void)removeObject:(id)arg1;	// IMP=0x000000000000b3ed
- (void)addObject:(id)arg1;	// IMP=0x000000000000b321
- (id)init;	// IMP=0x000000000000b2cb

@end

