//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVDeleteTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVMkcolTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVMoveTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPutTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;
@protocol CoreDAVLocalDBTreeInfoProvider;

@interface CoreDAVRecursiveContainerSyncTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVMoveTaskDelegate>
{
    int _phase;	// 88 = 0x58
    NSURL *_folderURL;	// 96 = 0x60
    NSString *_previousCTag;	// 104 = 0x68
    NSString *_nextCTag;	// 112 = 0x70
    NSString *_previousSyncToken;	// 120 = 0x78
    NSString *_nextSyncToken;	// 128 = 0x80
    NSString *_previousPTag;	// 136 = 0x88
    NSString *_nextPTag;	// 144 = 0x90
    NSArray *_actions;	// 152 = 0x98
    unsigned long long _multiGetBatchSize;	// 160 = 0xa0
    NSMutableArray *_unsubmittedTasks;	// 168 = 0xa8
    NSURL *_addMemberURL;	// 176 = 0xb0
    _Bool _useMultiGet;	// 184 = 0xb8
    NSMutableSet *_syncReportDeletedURLs;	// 192 = 0xc0
    NSMutableDictionary *_leafURLToETag;	// 200 = 0xc8
    NSMutableArray *_childCollectionURL;	// 208 = 0xd0
    Class _appSpecificDataItemClass;	// 216 = 0xd8
    Class _appSpecificContainerItemClass;	// 224 = 0xe0
    _Bool _syncItemOrder;	// 232 = 0xe8
    NSMutableDictionary *_folderURLToChildrenURLOrder;	// 240 = 0xf0
    _Bool _preflightCTag;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0000000000064c60
@property(retain, nonatomic) NSString *nextCTag; // @synthesize nextCTag=_nextCTag;
@property(readonly, nonatomic) NSDictionary *folderURLToChildrenURLOrder; // @synthesize folderURLToChildrenURLOrder=_folderURLToChildrenURLOrder;
@property(retain, nonatomic) NSString *previousSyncToken; // @synthesize previousSyncToken=_previousSyncToken;
@property(nonatomic) _Bool preflightCTag; // @synthesize preflightCTag=_preflightCTag;
@property(readonly, nonatomic) NSString *previousCTag; // @synthesize previousCTag=_previousCTag;
@property(readonly, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property(nonatomic) unsigned long long multiGetBatchSize; // @synthesize multiGetBatchSize=_multiGetBatchSize;
- (_Bool)shouldSyncChildWithResourceType:(id)arg1;	// IMP=0x0000000000064a26
- (id)dataContentType;	// IMP=0x00000000000648ab
- (id)copyFolderMultiGetTaskWithURLs:(id)arg1;	// IMP=0x0000000000064730
- (id)copyMultiGetTaskWithURLs:(id)arg1;	// IMP=0x00000000000645b5
- (id)_copyContainerParserMappings;	// IMP=0x0000000000064598
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4;	// IMP=0x0000000000063a77
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;	// IMP=0x00000000000630f7
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000000062563
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;	// IMP=0x0000000000062029
- (void)moveTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;	// IMP=0x000000000006140b
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x00000000000611bd
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;	// IMP=0x00000000000611ab
- (void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;	// IMP=0x0000000000061199
- (void)_folderModTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;	// IMP=0x0000000000060763
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x00000000000601fc
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;	// IMP=0x000000000005fad2
- (_Bool)isWhitelistedError:(id)arg1;	// IMP=0x000000000005fa2b
- (void)syncAway;	// IMP=0x000000000005fa19
- (void)startTaskGroup;	// IMP=0x000000000005f9cf
- (void)_getDataPayloads;	// IMP=0x000000000005e401
- (void)_getItemTags;	// IMP=0x000000000005e104
- (void)_getTopFolderTags;	// IMP=0x000000000005df42
- (void)_pushActions;	// IMP=0x000000000005d21a
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)arg1;	// IMP=0x000000000005cfaa
- (unsigned long long)_submitTasks;	// IMP=0x000000000005cb69
- (void)cancelTaskGroup;	// IMP=0x000000000005cb2b
- (void)bailWithError:(id)arg1;	// IMP=0x000000000005cac7
- (void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2;	// IMP=0x000000000005c8a1
- (void)_tearDownAllUnsubmittedTasks;	// IMP=0x000000000005c6c6
- (void)taskGroupWillCancelWithError:(id)arg1;	// IMP=0x000000000005c5ea
@property(readonly, copy) NSString *description;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(_Bool)arg6 context:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;	// IMP=0x000000000005c310

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CoreDAVLocalDBTreeInfoProvider> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

