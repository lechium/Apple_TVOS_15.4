//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NAIdentity, NSMutableArray;

@interface NAIdentityBuilder : NSObject <NSCopying>
{
    NSMutableArray *_characteristics;	// 8 = 0x8
    NAIdentity *_builtIdentity;	// 16 = 0x10
}

+ (id)buildPointerIdentity;	// IMP=0x0000000000020031
+ (id)na_identity;	// IMP=0x000000000001ff6d
+ (id)builderWithIdentity:(id)arg1;	// IMP=0x000000000001f451
+ (id)builder;	// IMP=0x000000000001f438
- (void).cxx_destruct;	// IMP=0x0000000000020118
@property(retain, nonatomic) NAIdentity *builtIdentity; // @synthesize builtIdentity=_builtIdentity;
@property(retain, nonatomic) NSMutableArray *characteristics; // @synthesize characteristics=_characteristics;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001fef7
- (unsigned long long)hash;	// IMP=0x000000000001fe9c
- (id)build;	// IMP=0x000000000001fdd4
- (_Bool)isObject:(id)arg1 equalToObject:(id)arg2;	// IMP=0x000000000001fd49
- (unsigned long long)hashOfObject:(id)arg1;	// IMP=0x000000000001fcd2
- (id)appendCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2 comparatorBlock:(CDUnknownBlockType)arg3 hashBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001fb65
- (id)appendRangeCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;	// IMP=0x000000000001fa81
- (id)appendDoubleCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;	// IMP=0x000000000001f9a3
- (id)appendFloatCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;	// IMP=0x000000000001f8c5
- (id)appendUnsignedIntegerCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;	// IMP=0x000000000001f7e8
- (id)appendIntegerCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;	// IMP=0x000000000001f70b
- (id)appendCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;	// IMP=0x000000000001f6f3
- (id)appendRangeCharacteristic:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f6dc
- (id)appendDoubleCharacteristic:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f6c5
- (id)appendFloatCharacteristic:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f6ae
- (id)appendUnsignedIntegerCharacteristic:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f697
- (id)appendIntegerCharacteristic:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f680
- (id)appendCharacteristic:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f663
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f5b1
- (id)initWithIdentity:(id)arg1;	// IMP=0x000000000001f4b2
- (id)init;	// IMP=0x000000000001f49e

@end

