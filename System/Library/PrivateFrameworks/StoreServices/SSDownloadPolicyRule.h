//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSSet, NSString;

@interface SSDownloadPolicyRule : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>
{
    NSSet *_applicationStates;	// 8 = 0x8
    float _batteryLevel;	// 16 = 0x10
    long long _cellularDataStates;	// 24 = 0x18
    long long _downloadSizeLimit;	// 32 = 0x20
    NSSet *_networkTypes;	// 40 = 0x28
    long long _powerStates;	// 48 = 0x30
    long long _registrationStates;	// 56 = 0x38
    long long _timeLimitStates;	// 64 = 0x40
    NSSet *_userDefaultStates;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e2c70
@property(copy, nonatomic) NSSet *userDefaultStates; // @synthesize userDefaultStates=_userDefaultStates;
@property(nonatomic) long long timeLimitStates; // @synthesize timeLimitStates=_timeLimitStates;
@property(nonatomic) long long registrationStates; // @synthesize registrationStates=_registrationStates;
@property(nonatomic) long long powerStates; // @synthesize powerStates=_powerStates;
@property(copy, nonatomic) NSSet *networkTypes; // @synthesize networkTypes=_networkTypes;
@property(nonatomic) long long downloadSizeLimit; // @synthesize downloadSizeLimit=_downloadSizeLimit;
@property(nonatomic) long long cellularDataStates; // @synthesize cellularDataStates=_cellularDataStates;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(copy, nonatomic) NSSet *applicationStates; // @synthesize applicationStates=_applicationStates;
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000e31eb
- (id)copyXPCEncoding;	// IMP=0x00000000000e30ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e303e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e2d91
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2c78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2a03
@property(readonly) unsigned long long hash;
- (void)unionPolicyRule:(id)arg1;	// IMP=0x00000000000e2764
@property(readonly, nonatomic, getter=isWiFiAllowed) _Bool wiFiAllowed;
@property(readonly, nonatomic, getter=isCellularAllowed) _Bool cellularAllowed;
- (void)addUserDefaultState:(id)arg1;	// IMP=0x00000000000e251f
- (void)addNetworkType:(long long)arg1;	// IMP=0x00000000000e2452
- (void)addApplicationState:(id)arg1;	// IMP=0x00000000000e2398
- (void)dealloc;	// IMP=0x00000000000e2347
- (id)init;	// IMP=0x00000000000e22fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

