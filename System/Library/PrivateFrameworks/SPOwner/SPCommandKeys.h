//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>
#import <SPOwner/SPConnectionToken-Protocol.h>
#import <SPOwner/SPNearbyToken-Protocol.h>

@class NSData, NSDateInterval, NSString, SPBeaconingKey;

@interface SPCommandKeys : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionToken>
{
    SPBeaconingKey *_beaconingKey;	// 8 = 0x8
    NSData *_commandKey;	// 16 = 0x10
    NSData *_connectionToken;	// 24 = 0x18
    NSData *_nearbyToken;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001cf60
- (void).cxx_destruct;	// IMP=0x000000000001d53a
@property(copy, nonatomic) NSData *nearbyToken; // @synthesize nearbyToken=_nearbyToken;
@property(copy, nonatomic) NSData *connectionToken; // @synthesize connectionToken=_connectionToken;
@property(copy, nonatomic) NSData *commandKey; // @synthesize commandKey=_commandKey;
@property(copy, nonatomic) SPBeaconingKey *beaconingKey; // @synthesize beaconingKey=_beaconingKey;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, copy, nonatomic) NSData *address;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d1bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d128
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d04a
- (id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4;	// IMP=0x000000000001cf68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
