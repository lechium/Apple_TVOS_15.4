//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMDCodable-Protocol.h>
#import <FindMyDevice/FMDIdentifiable-Protocol.h>
#import <FindMyDevice/NSCopying-Protocol.h>

@class NSString;

@interface FMDAccessoryIdentifier : NSObject <FMDCodable, NSCopying, FMDIdentifiable>
{
    NSString *_string;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b2ed
- (void).cxx_destruct;	// IMP=0x000000000000b651
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (id)initWithFMDCoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b579
- (_Bool)encodeWithFMDCoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b4ea
@property(readonly, copy) NSString *description;
- (id)stringValue;	// IMP=0x000000000000b4c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b453
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b3c5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b2f5
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b173
- (id)initWithString:(id)arg1;	// IMP=0x000000000000b661
- (id)computeAccessoryIdentifierWithAddress:(id)arg1;	// IMP=0x000000000000b76c
- (id)initWithAddress:(id)arg1;	// IMP=0x000000000000b6d4
- (id)initWithDeviceVendor:(id)arg1 deviceProductId:(id)arg2;	// IMP=0x000000000000b845

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
