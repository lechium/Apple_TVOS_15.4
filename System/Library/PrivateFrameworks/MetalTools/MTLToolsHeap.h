//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLHeapSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsHeap <MTLHeapSPI>
{
}

- (void)notifyResourceReleasing:(id)arg1;	// IMP=0x00000000000110e3
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x00000000000110a4
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x0000000000011065
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x0000000000011026
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000010fe7
- (id)_newToolsTexture:(id)arg1;	// IMP=0x0000000000010f99
- (id)_newToolsBuffer:(id)arg1;	// IMP=0x0000000000010f4b
@property(readonly) long long type;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) unsigned long long currentAllocatedSize;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x0000000000010e99
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;	// IMP=0x0000000000010e68
@property(readonly) unsigned long long usedSize;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000010e0c
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(copy) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

