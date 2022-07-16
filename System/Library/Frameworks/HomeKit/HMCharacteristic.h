//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristicMetadata, HMService, NSArray, NSDate, NSDictionary, NSNumber, NSString, NSUUID, _HMContext;

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSUUID *_cachedServiceUniqueIdentifier;	// 16 = 0x10
    _Bool _notificationEnabled;	// 24 = 0x18
    _Bool _requiresDeviceUnlock;	// 25 = 0x19
    _Bool _hasAuthorizationData;	// 26 = 0x1a
    _Bool _notificationEnabledByThisClient;	// 27 = 0x1b
    NSUUID *_uniqueIdentifier;	// 32 = 0x20
    NSString *_characteristicType;	// 40 = 0x28
    NSArray *_properties;	// 48 = 0x30
    id _value;	// 56 = 0x38
    NSDate *_valueUpdatedTime;	// 64 = 0x40
    NSDate *_notificationEnabledTime;	// 72 = 0x48
    HMService *_service;	// 80 = 0x50
    HMCharacteristicMetadata *_metadata;	// 88 = 0x58
    _HMContext *_context;	// 96 = 0x60
    NSNumber *_instanceID;	// 104 = 0x68
}

+ (id)__localizedDescriptionForCharacteristicType:(id)arg1;	// IMP=0x0000000000012ef6
+ (id)localizedDescriptionForCharacteristicType:(id)arg1;	// IMP=0x0000000000012edd
+ (id)_characteristicTypeAsString:(id)arg1;	// IMP=0x0000000000012e56
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000012e4e
+ (id)logCategory;	// IMP=0x0000000000012e1e
+ (id)characteristicWithCharacteristicReference:(id)arg1 home:(id)arg2;	// IMP=0x00000000001df3a9
+ (id)characteristicWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x00000000001df2f4
- (void).cxx_destruct;	// IMP=0x0000000000012a23
@property(nonatomic) _Bool notificationEnabledByThisClient; // @synthesize notificationEnabledByThisClient=_notificationEnabledByThisClient;
@property(readonly, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) HMCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) __weak HMService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(nonatomic) _Bool requiresDeviceUnlock; // @synthesize requiresDeviceUnlock=_requiresDeviceUnlock;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
- (id)_characteristicTypeDescription;	// IMP=0x00000000000128d6
- (void)_updateAuthorizationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001277c
- (void)updateAuthorizationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012482
- (void)_enableNotification:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000121ff
- (void)enableNotification:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011f34
- (void)_readValueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011d18
- (void)readValueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011986
- (void)_writeValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001166b
- (void)writeValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000112a2
- (void)_updateValue:(id)arg1 updateTime:(id)arg2;	// IMP=0x0000000000011245
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x0000000000010add
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010ad7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010819
- (id)mapHAPProperties:(long long)arg1;	// IMP=0x0000000000010758
- (id)logIdentifier;	// IMP=0x0000000000010708
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property _Bool hasAuthorizationData; // @synthesize hasAuthorizationData=_hasAuthorizationData;
@property(copy, nonatomic) NSDate *notificationEnabledTime; // @synthesize notificationEnabledTime=_notificationEnabledTime;
- (void)setValueUpdateTime:(id)arg1;	// IMP=0x0000000000010409
@property(nonatomic, getter=isNotificationEnabled) _Bool notificationEnabled; // @synthesize notificationEnabled=_notificationEnabled;
@property(copy, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
- (void)_unconfigure;	// IMP=0x0000000000010009
- (void)_unconfigureContext;	// IMP=0x000000000000ffa1
- (void)__configureWithContext:(id)arg1 service:(id)arg2;	// IMP=0x000000000000fe52
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fd7e
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x000000000000fc99
@property(readonly, copy) NSDictionary *serializedDictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
