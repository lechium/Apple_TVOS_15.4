//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy
{
    NSArray *_policies;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a599
+ (id)policyWithPolicies:(id)arg1;	// IMP=0x000000000001a4cc
- (void).cxx_destruct;	// IMP=0x000000000001a4b9
@property(retain) NSArray *policies; // @synthesize policies=_policies;
- (id)processMetadata:(id)arg1;	// IMP=0x000000000001a2e4
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x000000000001a17a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a101
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a078

@end

