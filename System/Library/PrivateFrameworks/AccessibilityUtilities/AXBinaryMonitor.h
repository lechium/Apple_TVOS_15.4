//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AXBinaryMonitor : NSObject
{
    NSMutableDictionary *_bundleHandlerMap;	// 8 = 0x8
    NSMutableDictionary *_frameworkHandlerMap;	// 16 = 0x10
    NSMutableDictionary *_dylibHandlerMap;	// 24 = 0x18
    NSMutableDictionary *_appHandlerMap;	// 32 = 0x20
    NSMutableDictionary *_appExtensionHandlerMap;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_binaryMonitorQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000000003220a
+ (void)initialize;	// IMP=0x00000000000321e8
- (void).cxx_destruct;	// IMP=0x0000000000033c95
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *binaryMonitorQueue; // @synthesize binaryMonitorQueue=_binaryMonitorQueue;
@property(retain, nonatomic) NSMutableDictionary *appExtensionHandlerMap; // @synthesize appExtensionHandlerMap=_appExtensionHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *appHandlerMap; // @synthesize appHandlerMap=_appHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *dylibHandlerMap; // @synthesize dylibHandlerMap=_dylibHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *frameworkHandlerMap; // @synthesize frameworkHandlerMap=_frameworkHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *bundleHandlerMap; // @synthesize bundleHandlerMap=_bundleHandlerMap;
- (void)_handleLoadedImagePath:(id)arg1;	// IMP=0x0000000000033a31
- (void)_applyHandlerBlocks:(id)arg1 handlerMap:(id)arg2;	// IMP=0x00000000000338b9
- (id)_dylibNameForImage:(id)arg1;	// IMP=0x000000000003375e
- (id)_appNameForImage:(id)arg1;	// IMP=0x0000000000033603
- (id)_appExtensionNameForImage:(id)arg1;	// IMP=0x00000000000334a8
- (id)_bundleNameForImage:(id)arg1;	// IMP=0x00000000000332f7
- (id)_frameworkNameForImage:(id)arg1;	// IMP=0x0000000000033152
- (_Bool)_loadImageIsAppExtension:(id)arg1;	// IMP=0x0000000000033107
- (_Bool)_loadImageIsApp:(id)arg1;	// IMP=0x00000000000330bc
- (_Bool)_loadImageIsDylib:(id)arg1;	// IMP=0x0000000000033071
- (_Bool)_loadImageIsBundle:(id)arg1;	// IMP=0x0000000000033005
- (_Bool)_loadImageIsFramework:(id)arg1;	// IMP=0x0000000000032fba
- (id)_bundleNameAndType:(id)arg1;	// IMP=0x0000000000032f67
- (void)_addHandler:(CDUnknownBlockType)arg1 withName:(id)arg2 toMap:(id *)arg3;	// IMP=0x0000000000032bad
- (void)addHandler:(CDUnknownBlockType)arg1 forApp:(id)arg2;	// IMP=0x0000000000032afa
- (void)addHandler:(CDUnknownBlockType)arg1 forAppExtension:(id)arg2;	// IMP=0x0000000000032a47
- (void)addHandler:(CDUnknownBlockType)arg1 forDylib:(id)arg2;	// IMP=0x0000000000032994
- (void)addHandler:(CDUnknownBlockType)arg1 forFramework:(id)arg2;	// IMP=0x00000000000328e1
- (void)addHandler:(CDUnknownBlockType)arg1 forBundleName:(id)arg2;	// IMP=0x0000000000032804
- (void)addHandler:(CDUnknownBlockType)arg1 forBundleID:(id)arg2;	// IMP=0x00000000000327ee
- (void)evaluateExistingBinaries;	// IMP=0x000000000003247e
- (id)init;	// IMP=0x000000000003225f

@end
