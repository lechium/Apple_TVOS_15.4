//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKIDSDestination : NSObject
{
    NSString *_deviceIdentifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x000000000016ad55
- (void).cxx_destruct;	// IMP=0x000000000016ae5c
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)description;	// IMP=0x000000000016adcb
- (id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x000000000016ac9c

@end
