//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TPSAnalyticsEventEligibilityCheckPerformed
{
    NSString *_error;	// 8 = 0x8
}

+ (id)eventWithError:(id)arg1;	// IMP=0x00000000000469c3
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000468ad
- (void).cxx_destruct;	// IMP=0x0000000000046b48
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
- (id)mutableAnalyticsEventRepresentation;	// IMP=0x0000000000046abf
- (id)eventName;	// IMP=0x0000000000046a8c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000046a0c
- (id)_initWithError:(id)arg1;	// IMP=0x0000000000046953
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000468b5

@end

