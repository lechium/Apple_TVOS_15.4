//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNOriginatingRequestSpecifierProviding-Protocol.h>
#import <Vision/VNRequestSpecifying-Protocol.h>
#import <Vision/VNSerializing-Protocol.h>
#import <Vision/VNSerializingInternal-Protocol.h>

@class NSString, VNMPImageDescriptor, VNRequestSpecifier;

@interface VNImageprint : NSObject <VNSerializingInternal, VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNSerializing, VNRequestSpecifying>
{
    VNRequestSpecifier *_originatingRequestSpecifier;	// 8 = 0x8
    VNMPImageDescriptor *_descriptor;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000121f8c
- (void).cxx_destruct;	// IMP=0x0000000000121ee9
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) VNMPImageDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (Class)requestClassAndReturnError:(id *)arg1;	// IMP=0x0000000000121def
@property(readonly, copy) NSString *requestClassName;
@property(readonly) VNRequestSpecifier *originatingRequestSpecifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000121ba6
- (unsigned long long)hash;	// IMP=0x0000000000121add
- (id)serializeStateAndReturnError:(id *)arg1;	// IMP=0x0000000000121a41
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000121793
@property(readonly, nonatomic) unsigned long long serializedLength;
- (id)initWithState:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012174f
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000120fcd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000120f60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000120e83
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000120af8
- (id)initWithImageDescriptor:(id)arg1 type:(unsigned long long)arg2 originatingRequestSpecifier:(id)arg3;	// IMP=0x0000000000120a28
- (id)distanceToImageprint:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000120876

@end

