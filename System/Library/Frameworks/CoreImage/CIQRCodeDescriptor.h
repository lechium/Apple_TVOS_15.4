//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CIQRCodeDescriptor
{
    NSData *errorCorrectedPayload;	// 8 = 0x8
    long long symbolVersion;	// 16 = 0x10
    unsigned char maskPattern;	// 24 = 0x18
    long long errorCorrectionLevel;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000113da
+ (id)descriptorWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;	// IMP=0x0000000000011344
@property(readonly) long long errorCorrectionLevel; // @synthesize errorCorrectionLevel;
@property(readonly) unsigned char maskPattern; // @synthesize maskPattern;
@property(readonly) long long symbolVersion; // @synthesize symbolVersion;
@property(readonly) NSData *errorCorrectedPayload; // @synthesize errorCorrectedPayload;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000115a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000114e5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000113e2
- (void)dealloc;	// IMP=0x0000000000011393
- (id)initWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;	// IMP=0x0000000000011298
- (_Bool)isValid;	// IMP=0x0000000000011206

@end

