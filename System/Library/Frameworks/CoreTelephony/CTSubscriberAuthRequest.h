//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTSubscriberAlgorithm;

@interface CTSubscriberAuthRequest : NSObject <NSSecureCoding>
{
    CTSubscriberAlgorithm *_algorithm;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006ee7d
- (void).cxx_destruct;	// IMP=0x000000000006eea0
@property(retain, nonatomic) CTSubscriberAlgorithm *algorithm; // @synthesize algorithm=_algorithm;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006edbd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ed2e

@end
