//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface ENUserAuthorization : NSObject <NSSecureCoding, NSCopying>
{
    long long _authorization;	// 8 = 0x8
    unsigned int _reportType;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    double _lastUpdatedTimestamp;	// 40 = 0x28
    NSDate *_testDateToday;	// 48 = 0x30
    NSNumber *_didUserTravel;	// 56 = 0x38
    NSNumber *_isUserVaccinated;	// 64 = 0x40
    NSDate *_symptomOnsetDate;	// 72 = 0x48
    NSString *_verificationCode;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003739c
- (void).cxx_destruct;	// IMP=0x0000000000037476
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(copy, nonatomic) NSDate *symptomOnsetDate; // @synthesize symptomOnsetDate=_symptomOnsetDate;
@property(nonatomic) unsigned int reportType; // @synthesize reportType=_reportType;
@property(copy, nonatomic) NSNumber *isUserVaccinated; // @synthesize isUserVaccinated=_isUserVaccinated;
@property(copy, nonatomic) NSNumber *didUserTravel; // @synthesize didUserTravel=_didUserTravel;
@property(retain, nonatomic) NSDate *testDateToday; // @synthesize testDateToday=_testDateToday;
@property(readonly, nonatomic) double lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037391
- (void)setUserAuthorization:(long long)arg1 withExpiration:(id)arg2;	// IMP=0x0000000000037330
@property(readonly, nonatomic) long long expirationStatus;
@property(nonatomic) long long userAuthorization;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036dfd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036aef
- (id)description;	// IMP=0x0000000000036604
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000003659c

@end

