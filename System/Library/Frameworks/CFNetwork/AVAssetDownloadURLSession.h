//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVAssetDownloadURLSession
{
}

+ (id)sessionWithConfiguration:(id)arg1 assetDownloadDelegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x00000000001c6bed
- (id)assetDownloadTaskWithConfiguration:(id)arg1;	// IMP=0x00000000001c6be5
- (id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;	// IMP=0x00000000001c6bdd
- (id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;	// IMP=0x00000000001c6bd5
- (id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;	// IMP=0x00000000001c6bcd

@end

