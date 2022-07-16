//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface HMDCharacteristicMetadata : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>
{
    NSNumber *_minimumValue;	// 8 = 0x8
    NSNumber *_maximumValue;	// 16 = 0x10
    NSNumber *_stepValue;	// 24 = 0x18
    NSNumber *_maxLength;	// 32 = 0x20
    NSString *_format;	// 40 = 0x28
    NSString *_units;	// 48 = 0x30
    NSString *_manufacturerDescription;	// 56 = 0x38
    NSArray *_validValues;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004ec4ed
+ (id)characteristicMetadataWithDictionary:(id)arg1;	// IMP=0x00000000004ec2e6
- (void).cxx_destruct;	// IMP=0x00000000004ec24f
@property(readonly, copy, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;
@property(readonly, copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(readonly, copy, nonatomic) NSString *units; // @synthesize units=_units;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(readonly, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(readonly, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004ebfdf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004ebdc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ebdb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ebb0f
@property(readonly) unsigned long long hash;
- (id)dictionaryRepresentation;	// IMP=0x00000000004eb806
- (id)_descriptionDetails;	// IMP=0x00000000004eb177
- (id)dumpState;	// IMP=0x00000000004eb10a
@property(readonly, copy) NSString *description;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2 stepValue:(id)arg3 maxLength:(id)arg4 validValues:(id)arg5 format:(id)arg6 units:(id)arg7 manufacturerDescription:(id)arg8;	// IMP=0x00000000004eae7a
- (id)init;	// IMP=0x00000000004eadd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

