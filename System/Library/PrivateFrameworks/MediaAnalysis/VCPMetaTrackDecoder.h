//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput;

@interface VCPMetaTrackDecoder : NSObject
{
    AVAssetReader *_reader;	// 8 = 0x8
    AVAssetReaderTrackOutput *_readerOutput;	// 16 = 0x10
    AVAssetReaderOutputMetadataAdaptor *_readerOutputAdaptor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001151d0
- (id)copyNextMetadataGroup;	// IMP=0x00000000001151b1
- (long long)status;	// IMP=0x000000000011519b
- (void)dealloc;	// IMP=0x0000000000115110
- (id)initWithTrack:(id)arg1;	// IMP=0x0000000000114f40

@end

