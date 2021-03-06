//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PAMediaConversionServiceAddPFMediaMetadataPolicy
{
    unsigned char _type;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ac39
+ (id)policyWithType:(unsigned char)arg1 value:(id)arg2;	// IMP=0x000000000001abd1
- (void).cxx_destruct;	// IMP=0x000000000001afa3
@property(retain) id value; // @synthesize value=_value;
@property unsigned char type; // @synthesize type=_type;
- (id)processMetadata:(id)arg1;	// IMP=0x000000000001adb4
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x000000000001adac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ad0f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ac41

@end

