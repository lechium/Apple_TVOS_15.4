//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ATTrackingEnforcementManager : NSObject
{
}

+ (_Bool)shouldEnforceTrackingWithReasonCode:(long long *)arg1;	// IMP=0x0000000000001aa1
+ (_Bool)isDefaultReturned;	// IMP=0x0000000000001a95
+ (void)setIsDefaultReturned:(_Bool)arg1;	// IMP=0x0000000000001a89
+ (long long)lastReasonCode;	// IMP=0x0000000000001a7c
+ (void)setLastReasonCode:(long long)arg1;	// IMP=0x0000000000001a6f
+ (_Bool)lastEnforcement;	// IMP=0x0000000000001a63
+ (void)setLastEnforcement:(_Bool)arg1;	// IMP=0x0000000000001a57
+ (id)lastBagLookup;	// IMP=0x0000000000001a46
+ (void)setLastBagLookup:(id)arg1;	// IMP=0x0000000000001a32

@end

