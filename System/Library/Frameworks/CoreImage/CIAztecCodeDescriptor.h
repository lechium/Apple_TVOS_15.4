//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CIAztecCodeDescriptor
{
    NSData *errorCorrectedPayload;	// 8 = 0x8
    _Bool isCompact;	// 16 = 0x10
    long long layerCount;	// 24 = 0x18
    long long dataCodewordCount;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011844
+ (id)descriptorWithPayload:(id)arg1 isCompact:(_Bool)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;	// IMP=0x00000000000117ae
@property(readonly) long long dataCodewordCount; // @synthesize dataCodewordCount;
@property(readonly) long long layerCount; // @synthesize layerCount;
@property(readonly) _Bool isCompact; // @synthesize isCompact;
@property(readonly) NSData *errorCorrectedPayload; // @synthesize errorCorrectedPayload;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011a15
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011953
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001184c
- (void)dealloc;	// IMP=0x00000000000117fd
- (id)initWithPayload:(id)arg1 isCompact:(_Bool)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;	// IMP=0x0000000000011702
- (_Bool)isValid;	// IMP=0x0000000000011678

@end
