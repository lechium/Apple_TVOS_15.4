//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;	// 8 = 0x8
}

+ (id)normalWorld;	// IMP=0x000000000038fd49
+ (id)world;	// IMP=0x000000000038fd17
@property(readonly) struct Object *_apiObject;
@property(readonly) void *_scriptWorld;
@property(readonly, copy, nonatomic) NSString *name;
- (void)disableOverrideBuiltinsBehavior;	// IMP=0x000000000038fdca
- (void)makeAllShadowRootsOpen;	// IMP=0x000000000038fdbc
- (void)clearWrappers;	// IMP=0x000000000038fdae
- (void)dealloc;	// IMP=0x000000000038fd58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
