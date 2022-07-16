//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks;

@interface CKDArchiveRecordsOperation
{
    CDUnknownBlockType _recordArchivedBlock;	// 8 = 0x8
    NSArray *_recordIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000026ff1f
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (id)relevantZoneIDs;	// IMP=0x000000000026fcf8
- (void)main;	// IMP=0x000000000026f693
- (int)operationType;	// IMP=0x000000000026f688
- (void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2;	// IMP=0x000000000026f280
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000026f21a
- (id)activityCreate;	// IMP=0x000000000026f1f1
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000026f162

// Remaining properties
@property(retain, nonatomic) id <CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

