//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CMImaging/FigMetalAllocatorImpl-Protocol.h>

@class FigMetalUtils;
@protocol MTLHeap;

__attribute__((visibility("hidden")))
@interface FigMetalHeapAllocator : NSObject <FigMetalAllocatorImpl>
{
    id <MTLHeap> _heap;	// 8 = 0x8
    unsigned long long _alignment;	// 16 = 0x10
    FigMetalUtils *_utils;	// 24 = 0x18
    unsigned long long _memSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000009286
@property(readonly, nonatomic) unsigned long long memSize; // @synthesize memSize=_memSize;
@property(readonly, nonatomic) FigMetalUtils *utils; // @synthesize utils=_utils;
@property(readonly, nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (unsigned long long)bufferOffset:(id)arg1;	// IMP=0x0000000000009253
- (unsigned long long)textureOffset:(id)arg1;	// IMP=0x000000000000919f
- (_Bool)hasCreatedTexture:(id)arg1;	// IMP=0x000000000000915c
- (void)purgeResources;	// IMP=0x0000000000009142
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000008e87
- (id)newBufferWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000008e0b
- (CDStruct_4bcfbbae)getSizeAndAlignForBufferDescriptor:(id)arg1;	// IMP=0x0000000000008d67
- (CDStruct_4bcfbbae)getSizeAndAlignForDescriptor:(id)arg1;	// IMP=0x0000000000008c1e
- (int)setupWithDescriptor:(id)arg1;	// IMP=0x0000000000008aa7
- (id)description;	// IMP=0x0000000000008a9a
- (id)initWithMetalUtils:(id)arg1;	// IMP=0x00000000000089e3

@end

