//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFCharacteristicValueDisplayError, HFServiceState, NAFuture, NSString;

@interface HFCharacteristicValueDisplayMetadata : NSObject
{
    long long _primaryState;	// 8 = 0x8
    long long _priority;	// 16 = 0x10
    NSString *_sortKey;	// 24 = 0x18
    long long _transitioningPrimaryState;	// 32 = 0x20
    HFCharacteristicValueDisplayError *_error;	// 40 = 0x28
    HFServiceState *_serviceState;	// 48 = 0x30
    NAFuture *_splitAccountFuture;	// 56 = 0x38
}

+ (id)_errorForSymptomHandler:(id)arg1 isFixingCurrently:(_Bool)arg2 withContextProvider:(id)arg3;	// IMP=0x0000000000118799
+ (long long)_unknownStatePriorityForServiceDescriptor:(id)arg1 characteristicReadResponse:(id)arg2;	// IMP=0x000000000011833e
+ (void)_populateSplitMediaAccountErrorForMedatadata:(id)arg1 withContextProvider:(id)arg2;	// IMP=0x000000000011824e
+ (void)_displayAppleIDSplitErrorForMediaProfile:(id)arg1 havingMetadata:(id)arg2 withContextProvider:(id)arg3;	// IMP=0x0000000000118248
+ (id)displayMetadataForMediaProfile:(id)arg1 withContextProvider:(id)arg2;	// IMP=0x000000000011766b
+ (id)displayMetadataForAccessory:(id)arg1 withContextProvider:(id)arg2;	// IMP=0x00000000001172d9
+ (id)displayMetadataForService:(id)arg1 characteristicReadResponse:(id)arg2;	// IMP=0x00000000001162f9
- (void).cxx_destruct;	// IMP=0x000000000011a930
@property(retain, nonatomic) NAFuture *splitAccountFuture; // @synthesize splitAccountFuture=_splitAccountFuture;
@property(retain, nonatomic) HFServiceState *serviceState; // @synthesize serviceState=_serviceState;
@property(retain, nonatomic) HFCharacteristicValueDisplayError *error; // @synthesize error=_error;
@property(nonatomic) long long transitioningPrimaryState; // @synthesize transitioningPrimaryState=_transitioningPrimaryState;
@property(copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long primaryState; // @synthesize primaryState=_primaryState;
- (void)parseProgammableSwitchOfType:(id)arg1 response:(id)arg2;	// IMP=0x000000000011a786
- (void)parseCurrentTargetPositionForServiceType:(id)arg1 response:(id)arg2;	// IMP=0x000000000011a343
- (void)parseHumidifierDehumidifierResponse:(id)arg1;	// IMP=0x000000000011a0f6
- (void)parseAirPurifierResponse:(id)arg1;	// IMP=0x0000000000119ff2
- (void)parseThermostatResponse:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000119c70
- (void)parseActiveStateForServiceType:(id)arg1 response:(id)arg2;	// IMP=0x0000000000119b31
- (void)parsePowerStateForServiceType:(id)arg1 response:(id)arg2;	// IMP=0x0000000000119986
- (void)parseWarningSensorWithServiceType:(id)arg1 response:(id)arg2;	// IMP=0x0000000000119465
- (void)parseInformationalSensorWithServiceType:(id)arg1 response:(id)arg2;	// IMP=0x00000000001190a0
- (void)parseSecuritySystemResponse:(id)arg1;	// IMP=0x0000000000118d56
- (void)parseLockMechanismResponse:(id)arg1;	// IMP=0x0000000000118b2d
- (void)parseGarageDoorOpenerResponse:(id)arg1;	// IMP=0x000000000011886a
- (void)dealloc;	// IMP=0x000000000011628e

@end

