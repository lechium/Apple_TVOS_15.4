//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PAMediaConversionServiceSetCaptionImageMetadataPolicy
{
    NSString *_caption;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001bbab
+ (id)policyWithCaption:(id)arg1;	// IMP=0x000000000001bb59
- (void).cxx_destruct;	// IMP=0x000000000001bfba
@property(copy) NSString *caption; // @synthesize caption=_caption;
- (id)processMetadata:(id)arg1;	// IMP=0x000000000001bdd7
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x000000000001bcc4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001bc4b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001bbb3

@end

