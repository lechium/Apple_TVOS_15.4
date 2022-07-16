//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKInvalidatable-Protocol.h>

@class NSData, NSString;
@protocol OS_xpc_object;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding, PKInvalidatable>
{
    _Bool _invalidated;	// 8 = 0x8
    unsigned long long _length;	// 16 = 0x10
    _Bool _isShmem;	// 24 = 0x18
    unsigned long long _offset;	// 32 = 0x20
    NSObject<OS_xpc_object> *_data;	// 40 = 0x28
    NSData *_imageSetHash;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c6662
- (void).cxx_destruct;	// IMP=0x00000000000c6f56
@property(readonly, nonatomic) NSData *imageSetHash; // @synthesize imageSetHash=_imageSetHash;
- (void)invalidate;	// IMP=0x00000000000c6ef9
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (id)containedImageSet;	// IMP=0x00000000000c6aa1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c6995
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c67d8
- (id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(_Bool)arg3 offset:(unsigned long long)arg4 hash:(id)arg5;	// IMP=0x00000000000c6705
- (id)initWithWithXPCObject:(id)arg1 hash:(id)arg2;	// IMP=0x00000000000c6680
- (id)init;	// IMP=0x00000000000c666a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
