//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSHIDUISensorCharacteristics : NSObject <NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable, NSCopying>
{
    _Bool _hasDiscreteProximitySensor;	// 8 = 0x8
}

+ (id)protobufSchema;	// IMP=0x000000000004553f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000045537
+ (id)new;	// IMP=0x00000000000454a1
@property(readonly, nonatomic) _Bool hasDiscreteProximitySensor;
- (id)initForProtobufDecoding;	// IMP=0x00000000000453de
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0000000000045347
@property(readonly, copy) NSString *description;
- (id)mutableCopy;	// IMP=0x00000000000452f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000452bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004524b
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000451ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045173
- (id)_init;	// IMP=0x0000000000044fbe
- (id)init;	// IMP=0x0000000000044f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

