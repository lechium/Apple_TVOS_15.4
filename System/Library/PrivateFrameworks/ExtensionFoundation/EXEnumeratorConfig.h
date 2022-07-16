//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExtensionFoundation/EXEnumeratorConfig-Protocol.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EXEnumeratorConfig : NSObject <EXEnumeratorConfig>
{
    NSURL *_extensionPointsConfigURL;	// 8 = 0x8
    NSDictionary *_legacyExtensionPointAllowList;	// 16 = 0x10
    NSURL *_rootURL;	// 24 = 0x18
    NSURL *_xpcExtensionsCache;	// 32 = 0x20
    NSURL *_xpcExtensionPointsCache;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002af3d
@property(readonly) NSURL *xpcExtensionPointsCache; // @synthesize xpcExtensionPointsCache=_xpcExtensionPointsCache;
@property(readonly) NSURL *xpcExtensionsCache; // @synthesize xpcExtensionsCache=_xpcExtensionsCache;
@property(readonly) NSURL *rootURL; // @synthesize rootURL=_rootURL;
@property(readonly) NSDictionary *legacyExtensionPointAllowList; // @synthesize legacyExtensionPointAllowList=_legacyExtensionPointAllowList;
@property(readonly) NSURL *extensionPointsConfigURL; // @synthesize extensionPointsConfigURL=_extensionPointsConfigURL;
- (id)init;	// IMP=0x000000000002acfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

