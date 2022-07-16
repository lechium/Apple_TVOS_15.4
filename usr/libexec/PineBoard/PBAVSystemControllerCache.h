//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, PBAVSystemControllerDataProviding;

@interface PBAVSystemControllerCache : NSObject
{
    _Bool _airplayDisplayActive;	// 8 = 0x8
    _Bool _cacheInitialized;	// 9 = 0x9
    CDUnknownBlockType _dataProviderInitializer;	// 16 = 0x10
    id <PBAVSystemControllerDataProviding> _dataProvider;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dataProviderSerialQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_cacheDataAccessSerialQueue;	// 40 = 0x28
    NSDictionary *_notificationNameToHandlerMap;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00400000001df090
- (void).cxx_destruct;	// IMP=0x00200000001e0700
@property(nonatomic, getter=isCacheInitialized) _Bool cacheInitialized; // @synthesize cacheInitialized=_cacheInitialized;
@property(readonly, nonatomic) NSDictionary *notificationNameToHandlerMap; // @synthesize notificationNameToHandlerMap=_notificationNameToHandlerMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheDataAccessSerialQueue; // @synthesize cacheDataAccessSerialQueue=_cacheDataAccessSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dataProviderSerialQueue; // @synthesize dataProviderSerialQueue=_dataProviderSerialQueue;
@property(retain, nonatomic) id <PBAVSystemControllerDataProviding> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType dataProviderInitializer; // @synthesize dataProviderInitializer=_dataProviderInitializer;
- (void)_callUpdateHandlerForNotificationName:(id)arg1 notification:(id)arg2;	// IMP=0x00100000001e04d0
- (void)_updateAirplayDisplayActiveFromNotification:(id)arg1;	// IMP=0x00100000001e00d0
- (void)_rebuildCache;	// IMP=0x00100000001dfde0
- (void)_initializeCache;	// IMP=0x00100000001df930
- (void)_handleSystemControllerMetadataDidChangeNotification:(id)arg1;	// IMP=0x00100000001df570
- (void)_handleSystemControllerServerConnectionDied:(id)arg1;	// IMP=0x00100000001df2f0
@property(readonly, nonatomic, getter=isAirplayDisplayActive) _Bool airplayDisplayActive; // @synthesize airplayDisplayActive=_airplayDisplayActive;
- (void)dealloc;	// IMP=0x00100000001df010
- (id)initWithDataProviderInitializer:(CDUnknownBlockType)arg1;	// IMP=0x00100000001dee00

@end

