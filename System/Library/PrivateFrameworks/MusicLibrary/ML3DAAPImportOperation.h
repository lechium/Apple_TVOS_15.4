//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface ML3DAAPImportOperation
{
    void *_importSession;	// 8 = 0x8
    NSError *_importError;	// 16 = 0x10
    struct shared_ptr<DAAPParserDelegate> _delegate;	// 24 = 0x18
    unsigned char _updateType;	// 40 = 0x28
    long long _totalTrackCount;	// 48 = 0x30
    long long _totalContainerCount;	// 56 = 0x38
    long long _processedTrackCount;	// 64 = 0x40
    long long _processedContainerCount;	// 72 = 0x48
    _Bool _importSessionStarted;	// 80 = 0x50
    int _sourceType;	// 84 = 0x54
}

- (id).cxx_construct;	// IMP=0x000000000001d846
- (void).cxx_destruct;	// IMP=0x000000000001d7f3
- (_Bool)_startImportSessionIfNeeded;	// IMP=0x000000000001d6e3
- (_Bool)_processPersonElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001d50e
- (_Bool)_processDeletedContainerId:(long long)arg1;	// IMP=0x000000000001d348
- (_Bool)_processContainerElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_1ee95920)arg2 trackPersonIdentifiers:(vector_c589d274)arg3;	// IMP=0x000000000001d02f
- (_Bool)_processContainerItemCount:(int)arg1;	// IMP=0x000000000001d019
- (_Bool)_processDeletedTrackId:(long long)arg1;	// IMP=0x000000000001ce53
- (_Bool)_processTrackElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001cbac
- (_Bool)_processTrackItemCount:(int)arg1;	// IMP=0x000000000001cb96
- (_Bool)_processUpdateType:(unsigned char)arg1;	// IMP=0x000000000001cb84
- (void)_finishParsingWithError:(id)arg1;	// IMP=0x000000000001cacc
- (_Bool)_importDAAPPayloadFromFile:(id)arg1 shouldProcessPlaylists:(_Bool)arg2;	// IMP=0x000000000001b533
- (void)updateImportProgress:(float)arg1;	// IMP=0x000000000001b521
- (shared_ptr_9dbb0ac9)personImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001b3ea
- (shared_ptr_9dbb0ac9)containerImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_1ee95920)arg2 trackPersonIdentifiers:(vector_c589d274)arg3;	// IMP=0x000000000001b27e
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;	// IMP=0x000000000001b178
- (_Bool)performImportOfSourceType:(int)arg1 usingConnection:(id)arg2;	// IMP=0x000000000001a63d
- (void)dealloc;	// IMP=0x000000000001a5f6

@end
