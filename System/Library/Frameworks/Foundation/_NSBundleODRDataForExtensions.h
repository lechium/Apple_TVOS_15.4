//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCListenerDelegate-Protocol.h>
#import <Foundation/_NSBundleResourceRequestAppExtensionProtocol-Protocol.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForExtensions <NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol>
{
    NSXPCConnection *_connection;	// 40 = 0x28
}

- (void)hostApplicationAssetPacksBecameUnavailable:(id)arg1;	// IMP=0x0000000000126357
- (void)hostApplicationAssetPacksBecameAvailable:(id)arg1;	// IMP=0x000000000012629b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000126231
- (void)accessSandboxExtension:(id)arg1;	// IMP=0x0000000000126165
- (void)dealloc;	// IMP=0x00000000001260eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

