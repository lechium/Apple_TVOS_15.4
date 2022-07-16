//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult
{
    PHAssetResource *_assetResource;	// 24 = 0x18
    NSData *_assetResourceData;	// 32 = 0x20
    NSURL *_assetResourceFileURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002a8f4
@property(copy, nonatomic) NSURL *assetResourceFileURL; // @synthesize assetResourceFileURL=_assetResourceFileURL;
@property(retain, nonatomic) NSData *assetResourceData; // @synthesize assetResourceData=_assetResourceData;
- (id)mediaMetadata;	// IMP=0x000000000002a845
- (id)adjustmentData;	// IMP=0x000000000002a699
- (id)uniformTypeIdentifier;	// IMP=0x000000000002a67c
- (id)videoURL;	// IMP=0x000000000002a667
- (id)exifOrientation;	// IMP=0x000000000002a628
- (id)imageURL;	// IMP=0x000000000002a613
- (_Bool)containsValidData;	// IMP=0x000000000002a5c0
- (id)initWithRequestID:(int)arg1 assetResource:(id)arg2;	// IMP=0x000000000002a548

@end

