//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPServerObjectDatabaseImportResult;

@interface MPCModelStorePlaybackItemsRequestAccumulatorImportResponse : NSObject
{
    struct MPCModelStorePlaybackItemsRequestAccumulatorResult _accumulatorImportResult;	// 8 = 0x8
    MPServerObjectDatabaseImportResult *_serverObjectDatabaseImportResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fda60
@property(readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult accumulatorImportResult; // @synthesize accumulatorImportResult=_accumulatorImportResult;
@property(readonly, copy, nonatomic) MPServerObjectDatabaseImportResult *serverObjectDatabaseImportResult; // @synthesize serverObjectDatabaseImportResult=_serverObjectDatabaseImportResult;
- (id)initWitDatabaseImportResult:(id)arg1 accumulatorImportResult:(struct MPCModelStorePlaybackItemsRequestAccumulatorResult)arg2;	// IMP=0x00000000000fd9bb

@end

