//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface RTLocationOfInterestTransition : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_stopDate;	// 24 = 0x18
    NSUUID *_visitIdentifierOrigin;	// 32 = 0x20
    NSUUID *_visitIdentifierDestination;	// 40 = 0x28
    long long _modeOfTransportation;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a9fc
- (void).cxx_destruct;	// IMP=0x000000000001adac
@property(readonly, nonatomic) long long modeOfTransportation; // @synthesize modeOfTransportation=_modeOfTransportation;
@property(readonly, nonatomic) NSUUID *visitIdentifierDestination; // @synthesize visitIdentifierDestination=_visitIdentifierDestination;
@property(readonly, nonatomic) NSUUID *visitIdentifierOrigin; // @synthesize visitIdentifierOrigin=_visitIdentifierOrigin;
@property(readonly, copy, nonatomic) NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x000000000001ad2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ac51
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ab90
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001aa04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a9f1
- (id)description;	// IMP=0x000000000001a80c
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 modeOfTransportation:(long long)arg6;	// IMP=0x000000000001a3ca

@end

