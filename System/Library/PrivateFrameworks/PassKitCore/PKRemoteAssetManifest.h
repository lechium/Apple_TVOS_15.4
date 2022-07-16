//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSURL;

@interface PKRemoteAssetManifest : NSObject
{
    NSURL *_fileURL;	// 8 = 0x8
    NSURL *_passURL;	// 16 = 0x10
    NSMutableDictionary *_remoteAssets;	// 24 = 0x18
    NSArray *_encryptedDeviceSpecificRemoteAssetFilenames;	// 32 = 0x20
}

+ (Class)_remoteAssestManifestItemClassWithValues:(id)arg1;	// IMP=0x00000000003b4a64
- (void).cxx_destruct;	// IMP=0x00000000003b5c1b
@property(readonly, nonatomic) NSArray *encryptedDeviceSpecificRemoteAssetFilenames; // @synthesize encryptedDeviceSpecificRemoteAssetFilenames=_encryptedDeviceSpecificRemoteAssetFilenames;
@property(readonly, nonatomic) NSDictionary *remoteAssets; // @synthesize remoteAssets=_remoteAssets;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2;	// IMP=0x00000000003b555c
- (id)deviceSpecificAsset;	// IMP=0x00000000003b5536
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 deviceSEIDs:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003b4b28
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003b4b10

@end

