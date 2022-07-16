//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ceda
- (void)updateAssetForPolicy:(id)arg1;	// IMP=0x000000000000ce4a
- (void)refreshAssetCatalogForPolicy:(id)arg1 withOverrideTimeout:(id)arg2;	// IMP=0x000000000000cd9e
- (id)_serviceProxy;	// IMP=0x000000000000cce5
- (id)xpcConnection;	// IMP=0x000000000000c918
- (void)dealloc;	// IMP=0x000000000000c85c
- (void)_destroyXPCConnection;	// IMP=0x000000000000c82a
- (id)init;	// IMP=0x000000000000c7d2

@end

