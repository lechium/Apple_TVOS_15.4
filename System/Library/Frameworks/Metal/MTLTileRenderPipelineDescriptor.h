//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLLinkedFunctions, MTLPipelineBufferDescriptorArray, MTLTileRenderPipelineColorAttachmentDescriptorArray, NSArray, NSString;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>
{
    NSArray *_preloadedLibraries;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001812
+ (id)alloc;	// IMP=0x0000000000001808
@property(copy, nonatomic) NSArray *preloadedLibraries; // @synthesize preloadedLibraries=_preloadedLibraries;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001883
- (void)reset;	// IMP=0x000000000000187d

// Remaining properties
@property(copy, nonatomic) NSArray *binaryArchives; // @dynamic binaryArchives;
@property(readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) MTLLinkedFunctions *linkedFunctions; // @dynamic linkedFunctions;
@property(nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; // @dynamic maxTotalThreadsPerThreadgroup;
@property(nonatomic) unsigned long long rasterSampleCount; // @dynamic rasterSampleCount;
@property(nonatomic) _Bool threadgroupSizeMatchesTileSize; // @dynamic threadgroupSizeMatchesTileSize;
@property(readonly) MTLPipelineBufferDescriptorArray *tileBuffers; // @dynamic tileBuffers;
@property(retain, nonatomic) id <MTLFunction> tileFunction; // @dynamic tileFunction;

@end
