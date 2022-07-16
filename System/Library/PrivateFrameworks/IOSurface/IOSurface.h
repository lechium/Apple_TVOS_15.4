//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IOSurface/NSSecureCoding-Protocol.h>

@interface IOSurface : NSObject <NSSecureCoding>
{
    void *_impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000014a7
- (id)newWiringAssertion;	// IMP=0x0000000000002042
- (unsigned long long)traceID;	// IMP=0x0000000000002034
- (unsigned long long)registryID;	// IMP=0x0000000000002026
- (unsigned long long)timestampAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000002015
- (void)setTimestamp:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000002004
- (_Bool)supportsProtectionOptions:(unsigned long long)arg1;	// IMP=0x0000000000001ff3
- (unsigned long long)protectionOptions;	// IMP=0x0000000000001fe5
- (int)setPurgeable:(unsigned int)arg1 oldState:(unsigned int *)arg2;	// IMP=0x0000000000001fd2
@property(readonly) _Bool allowsPixelSizeCasting;
- (void)decrementUseCount;	// IMP=0x0000000000001fb0
- (void)incrementUseCount;	// IMP=0x0000000000001fa2
- (_Bool)isSysMemOnly;	// IMP=0x0000000000001f94
- (_Bool)isDisplayable;	// IMP=0x0000000000001f86
@property(readonly, getter=isInUse) _Bool inUse;
@property(readonly) int localUseCount;
- (void)removeAllAttachments;	// IMP=0x0000000000001f54
- (id)allAttachments;	// IMP=0x0000000000001f3e
- (void)setAllAttachments:(id)arg1;	// IMP=0x0000000000001f2e
- (void)removeAttachmentForKey:(id)arg1;	// IMP=0x0000000000001f1d
- (id)attachmentForKey:(id)arg1;	// IMP=0x0000000000001f04
- (void)setAttachment:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000001ef3
- (void *)baseAddressOfPlaneAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001e23
- (long long)elementHeightOfPlaneAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001d53
- (long long)elementWidthOfPlaneAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001c83
- (long long)bytesPerElementOfPlaneAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001bb3
- (long long)bytesPerRowOfPlaneAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001ae3
- (long long)heightOfPlaneAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001a13
- (long long)widthOfPlaneAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001943
@property(readonly) unsigned long long planeCount;
@property(readonly) unsigned int seed;
@property(readonly) unsigned int pixelFormat;
@property(readonly) void *baseAddress;
@property(readonly) long long elementHeight;
@property(readonly) long long elementWidth;
@property(readonly) long long bytesPerElement;
@property(readonly) long long bytesPerRow;
@property(readonly) long long height;
@property(readonly) long long width;
@property(readonly) long long allocationSize;
- (int)unlockWithOptions:(unsigned int)arg1 seed:(unsigned int *)arg2;	// IMP=0x0000000000001893
- (int)lockWithOptions:(unsigned int)arg1 seed:(unsigned int *)arg2;	// IMP=0x0000000000001880
- (void)dealloc;	// IMP=0x0000000000001815
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000017c9
- (unsigned long long)hash;	// IMP=0x00000000000017b8
- (unsigned long long)_cfTypeID;	// IMP=0x00000000000017ae
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000170a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001681
- (id)initWithClientBuffer:(struct __IOSurfaceClient *)arg1;	// IMP=0x0000000000001626
- (id)initWithMachPort:(unsigned int)arg1;	// IMP=0x00000000000015a9
- (id)initWithSurfaceID:(unsigned int)arg1;	// IMP=0x000000000000152c
- (id)initWithProperties:(id)arg1;	// IMP=0x00000000000014af

@end

