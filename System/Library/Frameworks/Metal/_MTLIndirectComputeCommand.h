//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLIndirectComputeCommandSPI-Protocol.h>

@class NSString;

@interface _MTLIndirectComputeCommand : NSObject <MTLIndirectComputeCommandSPI>
{
}

- (void *)getKernelBufferAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007ea0f
- (unsigned long long)getCommandType;	// IMP=0x000000000007e9f7
- (id)dispatchThreadsArguments;	// IMP=0x000000000007e9df
- (id)dispatchThreadgroupsArguments;	// IMP=0x000000000007e9c7
- (unsigned long long)getOptimizedStatus;	// IMP=0x000000000007e9af
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000007e99a
- (void)setKernelArgument:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000007e985
- (void)setComputePipelineState:(id)arg1;	// IMP=0x000000000007e970
- (void)reset;	// IMP=0x000000000007e95b
- (void)setStageInRegion:(CDStruct_caaed6bc)arg1;	// IMP=0x000000000007e946
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007e931
- (id)getImageBlockSize;	// IMP=0x000000000007e919
- (_Bool)hasBarrier;	// IMP=0x000000000007e901
- (CDStruct_caaed6bc)getStageInRegion;	// IMP=0x000000000007e8c6
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007e8ae
- (void)clearBarrier;	// IMP=0x000000000007e899
- (void)setBarrier;	// IMP=0x000000000007e884
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x000000000007e86f
- (void)concurrentDispatchThreads:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;	// IMP=0x000000000007e85a
- (void)concurrentDispatchThreadgroups:(CDStruct_da2e99ad)arg1 threadsPerThreadgroup:(CDStruct_da2e99ad)arg2;	// IMP=0x000000000007e845
- (unsigned long long)getPipelineStateUniqueIdentifier;	// IMP=0x000000000007e82d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

