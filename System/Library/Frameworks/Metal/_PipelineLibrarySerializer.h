//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PipelineLibrarySerializer : NSObject
{
    void *_binarySerializer;	// 8 = 0x8
}

- (unsigned long long)writeToMemory:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000001178
- (unsigned long long)totalSize;	// IMP=0x000000000000116a
- (id)addComputePipelineDescriptor:(const void *)arg1;	// IMP=0x000000000000114b
- (id)addRenderPipelineDescriptor:(const void *)arg1;	// IMP=0x000000000000112c
- (id)addSpecializedFunction:(id)arg1 descriptor:(const void *)arg2;	// IMP=0x000000000000110d
- (unsigned long long)addLibrary:(void *)arg1;	// IMP=0x00000000000010fc
- (void)dealloc;	// IMP=0x00000000000010bc
- (id)init;	// IMP=0x0000000000001050

@end

