//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice;

@protocol MTLRenderPipelineState <NSObject>
@property(nonatomic, readonly) _Bool supportIndirectCommandBuffers;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@property(nonatomic, readonly) long long imageblockSampleLength;
@property(nonatomic, readonly) _Bool threadgroupSizeMatchesTileSize;
@property(nonatomic, readonly) long long maxTotalThreadsPerThreadgroup;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, readonly) NSString *label;
@end

