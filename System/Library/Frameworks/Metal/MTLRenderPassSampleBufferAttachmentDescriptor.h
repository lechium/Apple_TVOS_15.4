//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@protocol MTLCounterSampleBuffer;

@interface MTLRenderPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000784cd
+ (id)alloc;	// IMP=0x00000000000784c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000078538

// Remaining properties
@property(nonatomic) unsigned long long endOfFragmentSampleIndex; // @dynamic endOfFragmentSampleIndex;
@property(nonatomic) unsigned long long endOfVertexSampleIndex; // @dynamic endOfVertexSampleIndex;
@property(retain, nonatomic) id <MTLCounterSampleBuffer> sampleBuffer; // @dynamic sampleBuffer;
@property(nonatomic) unsigned long long startOfFragmentSampleIndex; // @dynamic startOfFragmentSampleIndex;
@property(nonatomic) unsigned long long startOfVertexSampleIndex; // @dynamic startOfVertexSampleIndex;

@end
