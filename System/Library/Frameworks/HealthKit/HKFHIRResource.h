//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKFHIRVersion, NSData, NSDate, NSString, NSURL;

@interface HKFHIRResource : NSObject <NSSecureCoding, NSCopying>
{
    HKFHIRVersion *_FHIRVersion;	// 8 = 0x8
    NSString *_resourceType;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    NSURL *_sourceURL;	// 40 = 0x28
    NSDate *_lastUpdatedDate;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015bee0
- (void).cxx_destruct;	// IMP=0x000000000015c335
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015c32a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015c155
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015bee8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015b836
- (unsigned long long)hash;	// IMP=0x000000000015b6e0
@property(readonly, copy) NSString *sourceString;
@property(readonly, copy) NSDate *lastUpdatedDate;
@property(readonly, copy) NSURL *sourceURL;
@property(readonly, copy) NSData *data;
@property(readonly, copy) NSString *identifier;
@property(readonly, copy) NSString *resourceType;
@property(readonly, copy) HKFHIRVersion *FHIRVersion;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2 FHIRVersion:(id)arg3 data:(id)arg4 sourceURL:(id)arg5 lastUpdatedDate:(id)arg6;	// IMP=0x000000000015b236
- (id)init;	// IMP=0x000000000015b1bc

@end

