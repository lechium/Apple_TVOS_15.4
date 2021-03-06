//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCollectionSetting, HMFUnfairLock, NSData, NSUUID;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    id <NSObject><NSCopying><NSSecureCoding> _value;	// 16 = 0x10
    NSData *_serializedValue;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
    HMAccessoryCollectionSetting *_setting;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000023b081
+ (_Bool)requiresCustomItemValueClassesToDecodeForKeyPath:(id)arg1;	// IMP=0x000000000023b068
+ (id)shortDescription;	// IMP=0x000000000023b056
- (void).cxx_destruct;	// IMP=0x000000000023aac6
@property __weak HMAccessoryCollectionSetting *setting; // @synthesize setting=_setting;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023a9dd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023a8f7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023a8ec
- (_Bool)shouldBlockValueDecode;	// IMP=0x000000000023a832
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> value; // @synthesize value=_value;
@property(readonly) NSData *serializedValue; // @synthesize serializedValue=_serializedValue;
- (id)description;	// IMP=0x000000000023a35d
- (id)debugDescription;	// IMP=0x000000000023a346
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000023a1f4
- (id)shortDescription;	// IMP=0x000000000023a159
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023a00b
- (unsigned long long)hash;	// IMP=0x0000000000239fc7
- (id)initWithIdentifier:(id)arg1 value:(id)arg2;	// IMP=0x0000000000239f15
- (id)initWithValue:(id)arg1;	// IMP=0x0000000000239e94
- (id)init;	// IMP=0x0000000000239dec

@end

