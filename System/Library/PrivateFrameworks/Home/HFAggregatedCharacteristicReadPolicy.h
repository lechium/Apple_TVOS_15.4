//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>
#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface HFAggregatedCharacteristicReadPolicy : NSObject <HFCharacteristicReadPolicy, NSCopying, NSMutableCopying>
{
    NSArray *_policies;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000137f15
@property(readonly, nonatomic) NSArray *policies; // @synthesize policies=_policies;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;	// IMP=0x0000000000137bae
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000137aa8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000137a9d
- (id)initWithPolicies:(id)arg1;	// IMP=0x0000000000137a32
- (id)init;	// IMP=0x000000000013797d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

