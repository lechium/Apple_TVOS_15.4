//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKEventEmitter, NSString;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject
{
    NSString *_udid;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    NSString *_osVersion;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_gameKitVersion;	// 40 = 0x28
    _Bool _gameKitAvailable;	// 48 = 0x30
    GKEventEmitter<GKLockStatusObserver> *_emitter;	// 56 = 0x38
}

+ (id)currentDevice;	// IMP=0x004000000009cd77
- (void).cxx_destruct;	// IMP=0x001000000009d8da
@property(retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter; // @synthesize emitter=_emitter;
@property(readonly, nonatomic, getter=isGameKitAvailable) _Bool gameKitAvailable; // @synthesize gameKitAvailable=_gameKitAvailable;
@property(readonly, nonatomic) NSString *gameKitVersion; // @synthesize gameKitVersion=_gameKitVersion;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)removeLockStatusObserver:(id)arg1;	// IMP=0x001000000009d867
- (void)addLockStatusObserver:(id)arg1;	// IMP=0x001000000009d851
- (void)stopObservingKeyBagStatus;	// IMP=0x001000000009d84b
- (void)beginObservingKeyBagStatusWithCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x001000000009d845
- (id)platformBuildVersion;	// IMP=0x001000000009d756
- (id)buildVersionHeader;	// IMP=0x001000000009d655
- (id)protocolVersionHeader;	// IMP=0x001000000009d5f6
- (id)storeUserAgent;	// IMP=0x001000000009d43c
- (id)processNameHeader;	// IMP=0x001000000009d36e
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;	// IMP=0x001000000009d10b
- (id)userAgent;	// IMP=0x001000000009d0f5
- (void)dealloc;	// IMP=0x001000000009d0b7
@property(readonly, nonatomic) NSString *udid;
- (id)init;	// IMP=0x001000000009ce08
- (_Bool)isProductType:(unsigned int)arg1;	// IMP=0x00100000000fe8df
- (_Bool)isFocusDevice;	// IMP=0x00100000000fe896
- (_Bool)isDevelopmentDevice;	// IMP=0x00100000000fe82a
- (id)_platformUDID;	// IMP=0x00100000000fe78c
- (void)_initPlatform;	// IMP=0x00100000000fe46f

@end
