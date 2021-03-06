//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceSetCaptionImageMetadataPolicy
{
    NSString *_caption;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000004751
+ (id)policyWithCaption:(id)arg1;	// IMP=0x00100000000046ff
- (void).cxx_destruct;	// IMP=0x0020000000004b60
@property(copy) NSString *caption; // @synthesize caption=_caption;
- (id)processMetadata:(id)arg1;	// IMP=0x001000000000497d
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x001000000000486a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000047f1
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000004759

@end

