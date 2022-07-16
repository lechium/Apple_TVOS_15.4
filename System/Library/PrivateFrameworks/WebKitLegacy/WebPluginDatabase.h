//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject
{
    NSMutableDictionary *plugins;	// 8 = 0x8
    NSMutableSet *registeredMIMETypes;	// 16 = 0x10
    NSArray *plugInPaths;	// 24 = 0x18
    NSMutableSet *pluginInstanceViews;	// 32 = 0x20
}

+ (void)setAdditionalWebPlugInPaths:(id)arg1;	// IMP=0x00000000000a4860
+ (void)closeSharedDatabase;	// IMP=0x00000000000a4290
+ (id)sharedDatabaseIfExists;	// IMP=0x00000000000a4260
+ (id)sharedDatabase;	// IMP=0x00000000000a41a0
+ (id)_defaultPlugInPaths;	// IMP=0x00000000000a5190
- (void)destroyAllPluginInstanceViews;	// IMP=0x00000000000a50b0
- (void)removePluginInstanceViewsFor:(id)arg1;	// IMP=0x00000000000a4ed0
- (void)removePluginInstanceView:(id)arg1;	// IMP=0x00000000000a4eb0
- (void)addPluginInstanceView:(id)arg1;	// IMP=0x00000000000a4e90
- (_Bool)isMIMETypeRegistered:(id)arg1;	// IMP=0x00000000000a4e70
- (void)refresh;	// IMP=0x00000000000a4a70
- (void)dealloc;	// IMP=0x00000000000a4a10
- (id)init;	// IMP=0x00000000000a49b0
- (void)close;	// IMP=0x00000000000a4920
- (void)setPlugInPaths:(id)arg1;	// IMP=0x00000000000a48e0
- (id)plugins;	// IMP=0x00000000000a4840
- (id)pluginForExtension:(id)arg1;	// IMP=0x00000000000a4640
- (id)pluginForMIMEType:(id)arg1;	// IMP=0x00000000000a42e0
- (id)_scanForNewPlugins;	// IMP=0x00000000000a5550
- (void)_removePlugin:(id)arg1;	// IMP=0x00000000000a53a0
- (void)_addPlugin:(id)arg1;	// IMP=0x00000000000a5330
- (id)_plugInPaths;	// IMP=0x00000000000a5250

@end

