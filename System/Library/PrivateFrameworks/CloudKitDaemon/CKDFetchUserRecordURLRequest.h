//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord;

@interface CKDFetchUserRecordURLRequest
{
    CDUnknownBlockType _recordFetchedBlock;	// 8 = 0x8
    CKRecord *_userRecord;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000180aac
@property(retain, nonatomic) CKRecord *userRecord; // @synthesize userRecord=_userRecord;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001805fd
- (id)generateRequestOperations;	// IMP=0x000000000018052f
- (id)requestOperationClasses;	// IMP=0x00000000001804c3

@end

