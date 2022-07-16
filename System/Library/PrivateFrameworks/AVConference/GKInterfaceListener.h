//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol InterfaceListenerDelegate;

@interface GKInterfaceListener : NSObject
{
    struct __SCDynamicStore *_dynamicStore;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _notificationMutex;	// 16 = 0x10
    id _interfaceListenerDelegate;	// 80 = 0x50
    _Bool _isWifiUp;	// 88 = 0x58
    _Bool _isCellUp;	// 89 = 0x59
    int _notifyToken;	// 92 = 0x5c
    _Bool _monitoringAvailable;	// 96 = 0x60
}

@property _Bool _isCellUp; // @synthesize _isCellUp;
@property _Bool _isWifiUp; // @synthesize _isWifiUp;
@property id <InterfaceListenerDelegate> interfaceListenerDelegate;
- (void)stopRoutingChangeListener;	// IMP=0x000000000004d1f5
- (_Bool)startRoutingChangeListener;	// IMP=0x000000000004cff5
- (_Bool)stopChangeListener;	// IMP=0x000000000004cfaf
- (_Bool)startChangeListener;	// IMP=0x000000000004ce11
- (void)hasConnectionWithWifi:(_Bool *)arg1 cell:(_Bool *)arg2;	// IMP=0x000000000004cbb8
- (void)dealloc;	// IMP=0x000000000004cb43
- (id)init;	// IMP=0x000000000004cad9

@end
