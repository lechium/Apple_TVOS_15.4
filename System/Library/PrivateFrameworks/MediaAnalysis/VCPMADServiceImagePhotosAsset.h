//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSNumber, PHAsset;

@interface VCPMADServiceImagePhotosAsset
{
    PHAsset *_asset;	// 8 = 0x8
    NSArray *_resources;	// 16 = 0x10
    struct CF<__CVBuffer *> _pixelBuffer;	// 24 = 0x18
    unsigned int _orientation;	// 32 = 0x20
    NSArray *_documentObservations;	// 40 = 0x28
    NSArray *_barcodeObservations;	// 48 = 0x30
    NSNumber *_hasCachedParseData;	// 56 = 0x38
    NSData *_cachedParseData;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x000000000016d9c9
- (void).cxx_destruct;	// IMP=0x000000000016d945
- (id)asset;	// IMP=0x000000000016d930
- (id)thumbnailResource;	// IMP=0x000000000016d7c0
- (void)setCachedParseData:(id)arg1;	// IMP=0x000000000016d33e
- (id)cachedParseData;	// IMP=0x000000000016d248
- (_Bool)hasCachedParseData;	// IMP=0x000000000016ce24
- (void)setBarcodeObservations:(id)arg1;	// IMP=0x000000000016cdb3
- (id)barcodeObservations;	// IMP=0x000000000016c78f
- (void)setDocumentObservations:(id)arg1;	// IMP=0x000000000016c6e2
- (id)documentObservations;	// IMP=0x000000000016c0fa
- (void)persistOCRMRC;	// IMP=0x000000000016b421
- (int)loadPixelBuffer:(struct __CVBuffer **)arg1 orientation:(unsigned int *)arg2;	// IMP=0x000000000016a508
- (id)resources;	// IMP=0x000000000016a4ac
- (id)nsfwClassifications;	// IMP=0x000000000016a19a
- (id)faces;	// IMP=0x0000000000169f6e
- (_Bool)isScreenshot;	// IMP=0x0000000000169f4a
- (id)location;	// IMP=0x0000000000169f2d
- (id)identifier;	// IMP=0x0000000000169f10
- (id)initWithPhotosAsset:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 orientation:(unsigned int)arg3 clientBundleID:(id)arg4 clientTeamID:(id)arg5;	// IMP=0x0000000000169e22
- (id)initWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;	// IMP=0x0000000000169d8c

@end

