//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCReplayKitGestureSettings, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSUUID, NSUserDefaults;
@protocol NSCopying><NSObject><NSSecureCoding;

@interface GCControllerSettings : NSObject <NSSecureCoding>
{
    NSUserDefaults *_defaults;	// 8 = 0x8
    NSDictionary *_elementMappingKeyToElement;	// 16 = 0x10
    NSMutableDictionary *_elementMappings;	// 24 = 0x18
    NSMutableDictionary *__elementMappingFromUserDefaults;	// 32 = 0x20
    NSArray *_customizedElementSettings;	// 40 = 0x28
    GCController *_controller;	// 48 = 0x30
    NSUUID *_customizedUUID;	// 56 = 0x38
    NSMutableDictionary *_elementSettings;	// 64 = 0x40
    _Bool _settingsAppOpenedAtLeastOnce;	// 72 = 0x48
    NSMutableSet *_observedKeyPaths;	// 80 = 0x50
    _Bool _hapticsEnabled;	// 88 = 0x58
    _Bool _screenShotEnabled;	// 89 = 0x59
    _Bool _videoRecordingEnabled;	// 90 = 0x5a
    _Bool _customizationsEnabled;	// 91 = 0x5b
    _Bool _serialized;	// 92 = 0x5c
    _Bool _customized;	// 93 = 0x5d
    GCReplayKitGestureSettings *_replayKitGestureSettings;	// 96 = 0x60
    id <NSCopying><NSObject><NSSecureCoding> _uniqueIdentifier;	// 104 = 0x68
    NSString *_bundleIdentifier;	// 112 = 0x70
    NSString *_screenShotKey;	// 120 = 0x78
    long long _screenShotGesture;	// 128 = 0x80
    NSString *_videoRecordingKey;	// 136 = 0x88
    long long _videoRecordingGesture;	// 144 = 0x90
    long long _videoRecordingMode;	// 152 = 0x98
    NSDictionary *_general_gameIntentMappings;	// 160 = 0xa0
    CDUnknownBlockType _settingsChangedHandler;	// 168 = 0xa8
    unsigned long long _settingsID;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006e33c
+ (_Bool)settingsCustomizedForController:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000006e255
+ (void)setSettingsExist:(_Bool)arg1 forController:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x000000000006df4c
+ (void)setSettingsExist:(_Bool)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000006dd76
+ (id)metaDefaults;	// IMP=0x000000000006dd19
+ (void)unregisterSettingsCustomizedHandlerForController:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000006dacd
+ (void)registerSettingsCustomizedHandler:(CDUnknownBlockType)arg1 forController:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000006d76c
+ (void)unregisterSettingsCustomizedHandlerForKey:(id)arg1;	// IMP=0x000000000006d67e
+ (void)registerSettingsCustomizedHandler:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x000000000006d54d
+ (id)controllerSettingsCustomizedChangedHandlers;	// IMP=0x000000000006d4e8
+ (id)settingsCustomizedChangedHandlers;	// IMP=0x000000000006d483
+ (id)settingsDispatchQueue;	// IMP=0x000000000006d42c
- (void).cxx_destruct;	// IMP=0x0000000000073559
@property(nonatomic) unsigned long long settingsID; // @synthesize settingsID=_settingsID;
@property(copy, nonatomic) CDUnknownBlockType settingsChangedHandler; // @synthesize settingsChangedHandler=_settingsChangedHandler;
@property(nonatomic) _Bool customized; // @synthesize customized=_customized;
@property(readonly, nonatomic) NSDictionary *general_gameIntentMappings; // @synthesize general_gameIntentMappings=_general_gameIntentMappings;
@property(nonatomic) long long videoRecordingMode; // @synthesize videoRecordingMode=_videoRecordingMode;
@property(nonatomic) long long videoRecordingGesture; // @synthesize videoRecordingGesture=_videoRecordingGesture;
@property(retain, nonatomic) NSString *videoRecordingKey; // @synthesize videoRecordingKey=_videoRecordingKey;
@property(nonatomic) long long screenShotGesture; // @synthesize screenShotGesture=_screenShotGesture;
@property(retain, nonatomic) NSString *screenShotKey; // @synthesize screenShotKey=_screenShotKey;
@property(nonatomic) _Bool serialized; // @synthesize serialized=_serialized;
@property(nonatomic) _Bool customizationsEnabled; // @synthesize customizationsEnabled=_customizationsEnabled;
@property(nonatomic) _Bool videoRecordingEnabled; // @synthesize videoRecordingEnabled=_videoRecordingEnabled;
@property(nonatomic) _Bool screenShotEnabled; // @synthesize screenShotEnabled=_screenShotEnabled;
@property(nonatomic) _Bool hapticsEnabled; // @synthesize hapticsEnabled=_hapticsEnabled;
@property(readonly, nonatomic) NSDictionary *elementMappings; // @synthesize elementMappings=_elementMappings;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) id <NSCopying><NSObject><NSSecureCoding> uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)description;	// IMP=0x00000000000733df
- (id)mappingKeyForElement:(id)arg1;	// IMP=0x00000000000733ca
- (void)saveBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000000732cf
- (void)saveObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000731c1
- (void)refreshSettingsExist;	// IMP=0x0000000000072f5f
- (void)deleteObjectForKey:(id)arg1;	// IMP=0x0000000000072df3
- (void)restoreElementMappingToDefault;	// IMP=0x0000000000072c92
- (void)eraseAllSettings;	// IMP=0x00000000000728b8
- (id)settingsForElement:(id)arg1;	// IMP=0x0000000000072859
- (void)populateElementSettings;	// IMP=0x0000000000072723
- (id)elementSettingForKey:(id)arg1;	// IMP=0x0000000000072263
- (void)setMappingForElement:(id)arg1 toElement:(id)arg2;	// IMP=0x0000000000071f45
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000719e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000071666
- (id)mappingForTouchpad:(id)arg1;	// IMP=0x0000000000071606
- (id)mappingForDirectionPad:(id)arg1;	// IMP=0x00000000000715a6
- (id)mappingForButton:(id)arg1;	// IMP=0x0000000000071546
- (id)mappingForElement:(id)arg1;	// IMP=0x000000000007149e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000070998
- (void)initializeElementMappings;	// IMP=0x00000000000705ac
- (void)initializeReplayKitDefaultMappings;	// IMP=0x0000000000070318
- (void)observeDefaultsKeyPaths:(id)arg1;	// IMP=0x00000000000701e2
- (void)initializeUserDefaults;	// IMP=0x000000000006f8df
- (id)suiteNameForBundleIdentifier:(id)arg1;	// IMP=0x000000000006f89b
- (id)defaultValues;	// IMP=0x000000000006f77b
- (id)staticDefaultValues;	// IMP=0x000000000006f640
- (void)setGameIntentMappings:(id)arg1;	// IMP=0x000000000006f4d6
@property(copy, nonatomic) GCReplayKitGestureSettings *replayKitGestureSettings; // @synthesize replayKitGestureSettings=_replayKitGestureSettings;
- (void)_updateControllerReference:(id)arg1;	// IMP=0x000000000006ee74
- (void)dealloc;	// IMP=0x000000000006ec2f
- (void)observeDefaultsKeyPath:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000006eb8a
- (void)registerForSettingsCustomized;	// IMP=0x000000000006e924
- (void)unregisterForSettingsCustomized;	// IMP=0x000000000006e8f9
- (id)initWithBundleIdentifier:(id)arg1 forController:(id)arg2;	// IMP=0x000000000006e4c7
- (id)initWithBundleIdentifier:(id)arg1 forControllerIdentifier:(id)arg2;	// IMP=0x000000000006e363
- (id)initForController:(id)arg1;	// IMP=0x000000000006e344

@end

