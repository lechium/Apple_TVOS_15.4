//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSTimeZone;

@interface PKAccountPaymentScheduleDetails : NSObject <NSSecureCoding>
{
    NSTimeZone *_productTimeZone;	// 8 = 0x8
    long long _frequency;	// 16 = 0x10
    long long _scheduledDay;	// 24 = 0x18
    long long _preset;	// 32 = 0x20
    NSDate *_scheduledDate;	// 40 = 0x28
    NSString *_paymentTermsIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000032139f
- (void).cxx_destruct;	// IMP=0x0000000000321855
@property(copy, nonatomic) NSString *paymentTermsIdentifier; // @synthesize paymentTermsIdentifier=_paymentTermsIdentifier;
@property(copy, nonatomic) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
@property(nonatomic) long long preset; // @synthesize preset=_preset;
@property(nonatomic) long long scheduledDay; // @synthesize scheduledDay=_scheduledDay;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
- (id)description;	// IMP=0x00000000003216ba
- (unsigned long long)hash;	// IMP=0x000000000032161a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000321578
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003214c8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003213a7
- (id)hashString;	// IMP=0x000000000032120a
- (id)jsonDictionaryRepresentation;	// IMP=0x0000000000321089
- (id)jsonString;	// IMP=0x0000000000320f42
- (void)setScheduleTimeZone:(id)arg1;	// IMP=0x0000000000320f31
- (id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2;	// IMP=0x0000000000320d87
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000320d73

@end

