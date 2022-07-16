//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface HMAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>
{
    NSDate *_lastViolationDate;	// 8 = 0x8
    NSDate *_lastResetDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000254415
- (void).cxx_destruct;	// IMP=0x00000000002543e4
@property(readonly) NSDate *lastResetDate; // @synthesize lastResetDate=_lastResetDate;
@property(readonly) NSDate *lastViolationDate; // @synthesize lastViolationDate=_lastViolationDate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000254302
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025423d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002540f2
- (unsigned long long)hash;	// IMP=0x0000000000254065
@property(readonly, getter=hasCurrentViolation) _Bool currentViolation;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;	// IMP=0x0000000000253ef3

@end

