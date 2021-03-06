//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadStepOperation : ISOperation
{
    FinishDownloadMemoryEntity *_download;	// 96 = 0x60
    NSString *_downloadPhase;	// 104 = 0x68
    double _progressFraction;	// 112 = 0x70
    CDUnknownBlockType _outputBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000eb7ec
@property(readonly, nonatomic) FinishDownloadMemoryEntity *download; // @synthesize download=_download;
- (id)_newURLOperationWithAsset:(id)arg1;	// IMP=0x00100000000eb5af
- (_Bool)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000eb12b
- (_Bool)unzipAsset:(id)arg1 unzippedPath:(id *)arg2 error:(id *)arg3;	// IMP=0x00100000000eaf9a
@property double progressFraction;
@property(copy) CDUnknownBlockType outputBlock;
@property(copy) NSString *downloadPhase;
- (_Bool)rollbackAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ea95b
- (_Bool)removeInstalledAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ea306
- (_Bool)moveFile:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000000e9b08
- (_Bool)moveAsset:(id)arg1 toPath:(inout id *)arg2 installBehavior:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000000e9a09
- (_Bool)installAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e9854
- (void)finishWithDownloadResponse:(id)arg1;	// IMP=0x00100000000e9769
- (_Bool)downloadAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e9444
- (_Bool)downloadAndInstallAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e8d42
- (id)documentsDirectoryPathWithClientIdentifier:(id)arg1 downloadKind:(id)arg2;	// IMP=0x00100000000e8abb
- (void)addPurchaseManifestItemWithLibraryIdentifier:(id)arg1;	// IMP=0x00100000000e87dd
- (void)addPurchaseManifestItem;	// IMP=0x00100000000e87c9
- (id)initWithDownload:(id)arg1;	// IMP=0x00100000000e875b

@end

