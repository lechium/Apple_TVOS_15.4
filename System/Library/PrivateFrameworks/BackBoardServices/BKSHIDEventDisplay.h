//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying>
{
    _Bool _builtin;	// 8 = 0x8
    NSString *_hardwareIdentifier;	// 16 = 0x10
}

+ (id)protobufSchema;	// IMP=0x00000000000105d4
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000105cc
+ (id)displayWithHardwareIdentifier:(id)arg1;	// IMP=0x00000000000102cf
+ (id)builtinDisplay;	// IMP=0x000000000001029f
+ (id)nullDisplay;	// IMP=0x000000000001026f
- (void).cxx_destruct;	// IMP=0x000000000001025f
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000101bc
@property(readonly) unsigned long long hash;
- (id)initForProtobufDecoding;	// IMP=0x000000000001015a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001005f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001001b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010010
- (id)_hardwareIdentifier;	// IMP=0x0000000000010002
- (_Bool)_isBuiltinDisplay;	// IMP=0x000000000000fff9
- (_Bool)_isNullDisplay;	// IMP=0x000000000000ffe1
- (id)_initWithHardwareIdentifier:(id)arg1;	// IMP=0x000000000000fe07
- (id)init;	// IMP=0x000000000000fcd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

