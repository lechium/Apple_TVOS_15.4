//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSTimeZone;

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy
{
    NSDate *_creationDate;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b076
+ (id)policyWithCreationDate:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x000000000001afb6
- (void).cxx_destruct;	// IMP=0x000000000001b909
@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)processMetadata:(id)arg1;	// IMP=0x000000000001b5da
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x000000000001b218
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b16a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b07e

@end
