//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScope, CPLPlaceholderRecord, CPLResource, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitInMemoryResourceDownloadTask
{
    CPLCloudKitScope *_scope;	// 8 = 0x8
    CPLResource *_resource;	// 16 = 0x10
    CPLPlaceholderRecord *_record;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000e3e0a
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CPLPlaceholderRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) CPLResource *resource; // @synthesize resource=_resource;
- (void)_startDownload;	// IMP=0x00100000000e35d4
- (void)_fetchPlaceholderRecordAndStartDownload;	// IMP=0x00100000000e330a
- (void)runOperations;	// IMP=0x00100000000e31c0
- (id)_inMemoryDownloadOperationForRecordID:(id)arg1 resource:(id)arg2 record:(id)arg3 keys:(id)arg4 operationType:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e2906
- (id)initWithController:(id)arg1 resource:(id)arg2 record:(id)arg3 transportScope:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e27b4

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

