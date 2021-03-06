//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class BSMutableIntegerMap, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding>
{
    BSMutableIntegerMap *_settingToFlagMap;	// 8 = 0x8
    BSMutableIntegerMap *_settingToObjectMap;	// 16 = 0x10
    id <BSSettingDescriptionProvider> _descriptionProvider;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000828af
- (void).cxx_destruct;	// IMP=0x00000000000843d9
@property(nonatomic) __weak id <BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
- (id)basicDescriptionWithPrefix:(id)arg1;	// IMP=0x0000000000084390
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4;	// IMP=0x0000000000084237
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x0000000000084212
- (void)_removeAllSettings;	// IMP=0x00000000000841e4
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000083fb7
@property(readonly) unsigned long long hash;
- (id)allSettings;	// IMP=0x0000000000083def
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000083c8c
- (id)objectForSetting:(unsigned long long)arg1;	// IMP=0x0000000000083c62
- (void)enumerateFlagsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000083b24
- (_Bool)boolForSetting:(unsigned long long)arg1;	// IMP=0x0000000000083af7
- (long long)flagForSetting:(unsigned long long)arg1;	// IMP=0x0000000000083ab8
- (_Bool)isEmpty;	// IMP=0x0000000000083a69
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000008356e
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000008350a
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000834ee
- (id)succinctDescription;	// IMP=0x000000000008348a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000082fb7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000828b7
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000081e64
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000080d13
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080cac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080ca1
- (id)init;	// IMP=0x0000000000080c8f
- (id)_init;	// IMP=0x0000000000080c60
- (_Bool)isKeyedSettings;	// IMP=0x00000000000701e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

