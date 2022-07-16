//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMFWoBLEInfo, HMFWoWLANInfo, NSArray, NSString;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>
{
    NSString *_accessoryIdentifier;	// 8 = 0x8
    HMFWoBLEInfo *_woBLEInfo;	// 16 = 0x10
    NSArray *_woWLANInfos;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x000000000058aec5
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000058aebd
+ (id)connectivityInfoWithAccessoryIdentifier:(id)arg1 wakeConfiguration:(id)arg2;	// IMP=0x000000000058abe4
- (void).cxx_destruct;	// IMP=0x000000000058aba2
@property(retain, nonatomic) NSArray *woWLANInfos; // @synthesize woWLANInfos=_woWLANInfos;
@property(retain, nonatomic) HMFWoBLEInfo *woBLEInfo; // @synthesize woBLEInfo=_woBLEInfo;
@property(readonly, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (id)description;	// IMP=0x000000000058aa8a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000058a764
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000058a5d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000058a423
- (unsigned long long)hash;	// IMP=0x000000000058a364
@property(readonly, nonatomic) HMFWoWLANInfo *woWLANInfo;
- (id)initWithAccessoryIdentifier:(id)arg1 woBLEInfo:(id)arg2 woWLANInfos:(id)arg3;	// IMP=0x0000000000589fb1

@end
