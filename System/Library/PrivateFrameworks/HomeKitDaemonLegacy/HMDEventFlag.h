//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HMDEventFlag : HMFObject
{
    unsigned long long _flagValue;	// 8 = 0x8
    double _flagPeriod;	// 16 = 0x10
}

@property double flagPeriod; // @synthesize flagPeriod=_flagPeriod;
@property unsigned long long flagValue; // @synthesize flagValue=_flagValue;
- (id)shortDescription;	// IMP=0x0000000000a19930
- (id)initWithValue:(unsigned long long)arg1 definedPeriod:(double)arg2;	// IMP=0x0000000000a198d6
- (id)init;	// IMP=0x0000000000a198bf

@end
