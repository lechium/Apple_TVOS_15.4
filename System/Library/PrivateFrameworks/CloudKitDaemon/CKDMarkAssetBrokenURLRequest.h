//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKUploadRequestMetadata;

@interface CKDMarkAssetBrokenURLRequest
{
    _Bool _writeRepairRecord;	// 8 = 0x8
    CDUnknownBlockType _assetBrokenBlock;	// 16 = 0x10
    CKUploadRequestMetadata *_metadata;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000316576
@property(nonatomic) _Bool writeRepairRecord; // @synthesize writeRepairRecord=_writeRepairRecord;
@property(copy, nonatomic) CKUploadRequestMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType assetBrokenBlock; // @synthesize assetBrokenBlock=_assetBrokenBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000316461
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000316242
- (id)generateRequestOperations;	// IMP=0x0000000000315da5
- (id)requestOperationClasses;	// IMP=0x0000000000315d39
- (id)initWithOperation:(id)arg1 assetOrPackageMetadata:(id)arg2 writeRepairRecord:(_Bool)arg3;	// IMP=0x0000000000315caf

@end
