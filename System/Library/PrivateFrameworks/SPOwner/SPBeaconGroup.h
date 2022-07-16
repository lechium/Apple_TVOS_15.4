//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSSet, NSString, NSUUID, SPLostModeInfo;

@interface SPBeaconGroup : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isPairingComplete;	// 8 = 0x8
    _Bool _isClassicConnected;	// 9 = 0x9
    _Bool _isConnected;	// 10 = 0xa
    _Bool _isFindMyNetworkEnabled;	// 11 = 0xb
    NSUUID *_identifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSSet *_beaconIdentifiers;	// 32 = 0x20
    NSData *_macAddress;	// 40 = 0x28
    long long _status;	// 48 = 0x30
    long long _classification;	// 56 = 0x38
    NSDictionary *_beaconMap;	// 64 = 0x40
    NSDictionary *_taskInformation;	// 72 = 0x48
    SPLostModeInfo *_lostModeInfo;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003f84
- (void).cxx_destruct;	// IMP=0x0000000000004ac5
@property(copy, nonatomic) SPLostModeInfo *lostModeInfo; // @synthesize lostModeInfo=_lostModeInfo;
@property(copy, nonatomic) NSDictionary *taskInformation; // @synthesize taskInformation=_taskInformation;
@property(copy, nonatomic) NSDictionary *beaconMap; // @synthesize beaconMap=_beaconMap;
@property(nonatomic) long long classification; // @synthesize classification=_classification;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isFindMyNetworkEnabled; // @synthesize isFindMyNetworkEnabled=_isFindMyNetworkEnabled;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) _Bool isClassicConnected; // @synthesize isClassicConnected=_isClassicConnected;
@property(nonatomic) _Bool isPairingComplete; // @synthesize isPairingComplete=_isPairingComplete;
@property(copy, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(copy, nonatomic) NSSet *beaconIdentifiers; // @synthesize beaconIdentifiers=_beaconIdentifiers;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000000048f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000044ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004391
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000040a3
- (unsigned long long)hash;	// IMP=0x000000000000405f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003f8c

@end
