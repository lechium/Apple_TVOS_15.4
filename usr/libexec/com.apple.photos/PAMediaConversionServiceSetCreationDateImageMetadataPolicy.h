//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSTimeZone;

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy
{
    NSDate *_creationDate;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000003c1c
+ (id)policyWithCreationDate:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x0010000000003b5c
- (void).cxx_destruct;	// IMP=0x00200000000044af
@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)processMetadata:(id)arg1;	// IMP=0x0010000000004180
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0010000000003dbe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003d10
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003c24

@end
