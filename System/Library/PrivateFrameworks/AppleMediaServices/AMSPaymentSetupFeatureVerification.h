//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSPaymentSetupFeatureVerification : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001bae73
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)performPaymentSetupFeatureLookup;	// IMP=0x00000000001bad1d
- (_Bool)isPaymentSetupFeatureSupportedWithError:(id *)arg1;	// IMP=0x00000000001ba9ba
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001ba947

@end

