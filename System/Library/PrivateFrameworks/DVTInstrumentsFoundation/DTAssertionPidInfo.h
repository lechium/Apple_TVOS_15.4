//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface DTAssertionPidInfo : NSObject
{
    int _pid;	// 8 = 0x8
    NSArray *_blocks;	// 16 = 0x10
    NSMutableSet *_clientsWithClaim;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005632a
@property(readonly) int pid; // @synthesize pid=_pid;
@property(readonly) NSArray *blocks; // @synthesize blocks=_blocks;
- (_Bool)hasNoMoreClients;	// IMP=0x00000000000562d6
- (_Bool)removeClaimFromClient:(id)arg1;	// IMP=0x0000000000056277
- (void)addClaimForClient:(id)arg1;	// IMP=0x0000000000056261
- (void)removeAssertions;	// IMP=0x000000000005616d
- (id)initForPid:(int)arg1 withRemoveBlocks:(id)arg2 onBehalfOfClient:(id)arg3;	// IMP=0x000000000005609e

@end
