//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMSettingValue, NSString, NSUUID;
@protocol HMSettingManager;

@interface HMSetting : NSObject <NSSecureCoding>
{
    id _value;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    Class _valueClass;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    id <HMSettingManager> _settingManager;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    unsigned long long _properties;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c30c8
- (void).cxx_destruct;	// IMP=0x00000000001c26c0
@property unsigned long long properties; // @synthesize properties=_properties;
@property(copy) NSString *name; // @synthesize name=_name;
@property __weak id <HMSettingManager> settingManager; // @synthesize settingManager=_settingManager;
@property long long type; // @synthesize type=_type;
@property(retain) Class valueClass; // @synthesize valueClass=_valueClass;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) id value; // @synthesize value=_value;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c25cb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c23d2
- (void)merge:(id)arg1;	// IMP=0x00000000001c2368
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c229c
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c211b
- (id)valueForUpdate:(id)arg1;	// IMP=0x00000000001c2065
@property(readonly) HMSettingValue *internalValue;
@property(readonly, getter=isWritable) _Bool writable;
@property(readonly, copy) NSString *localizedTitle;
- (id)description;	// IMP=0x00000000001c1e20
- (id)_initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;	// IMP=0x00000000001c1d19
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;	// IMP=0x00000000001c1c42
- (id)initWithInternal;	// IMP=0x00000000001c1c13

@end

