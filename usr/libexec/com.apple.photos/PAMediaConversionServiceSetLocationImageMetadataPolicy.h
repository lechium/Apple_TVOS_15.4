//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation;

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceSetLocationImageMetadataPolicy
{
    CLLocation *_location;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000003532
+ (id)policyWithLocation:(id)arg1;	// IMP=0x00100000000034e0
- (void).cxx_destruct;	// IMP=0x00200000000034cd
@property(retain) CLLocation *location; // @synthesize location=_location;
- (id)processMetadata:(id)arg1;	// IMP=0x0010000000003377
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0010000000003258
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000031df
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003147

@end

