//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation;

@interface PAMediaConversionServiceSetLocationImageMetadataPolicy
{
    CLLocation *_location;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a98c
+ (id)policyWithLocation:(id)arg1;	// IMP=0x000000000001a93a
- (void).cxx_destruct;	// IMP=0x000000000001a927
@property(retain) CLLocation *location; // @synthesize location=_location;
- (id)processMetadata:(id)arg1;	// IMP=0x000000000001a7d1
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x000000000001a6b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a639
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a5a1

@end

