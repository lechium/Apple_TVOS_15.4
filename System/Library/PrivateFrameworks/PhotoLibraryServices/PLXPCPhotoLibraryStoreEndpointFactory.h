//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSXPCStoreServerEndpointFactory-Protocol.h>

@class NSString, NSURL, PLAssetsdClient;

@interface PLXPCPhotoLibraryStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory>
{
    NSURL *_libraryURL;	// 8 = 0x8
    PLAssetsdClient *_assetsdClient;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000031c6a2
- (id)newEndpoint;	// IMP=0x000000000031c652
- (id)initWithAssetsdClient:(id)arg1;	// IMP=0x000000000031c5e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

