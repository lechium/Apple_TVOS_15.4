//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMNoteStoreClient, NSString;

@interface ENNoteStoreClient
{
    CDUnknownBlockType _uploadProgressHandler;	// 8 = 0x8
    CDUnknownBlockType _downloadProgressHandler;	// 16 = 0x10
    EDAMNoteStoreClient *_client;	// 24 = 0x18
    NSString *_cachedNoteStoreUrl;	// 32 = 0x20
    NSString *_cachedAuthenticationToken;	// 40 = 0x28
}

+ (id)noteStoreClientWithUrl:(id)arg1 authenticationToken:(id)arg2;	// IMP=0x000000000032aa0c
- (void).cxx_destruct;	// IMP=0x0000000000331876
@property(copy, nonatomic) NSString *cachedAuthenticationToken; // @synthesize cachedAuthenticationToken=_cachedAuthenticationToken;
@property(copy, nonatomic) NSString *cachedNoteStoreUrl; // @synthesize cachedNoteStoreUrl=_cachedNoteStoreUrl;
@property(retain, nonatomic) EDAMNoteStoreClient *client; // @synthesize client=_client;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressHandler; // @synthesize downloadProgressHandler=_downloadProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressHandler; // @synthesize uploadProgressHandler=_uploadProgressHandler;
- (void)setSharedNotebookRecipientSettingsWithSharedNotebookId:(long long)arg1 recipientSettings:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000000331735
- (void)updateSharedNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000331676
- (void)authenticateToSharedNoteWithGuid:(id)arg1 noteKey:(id)arg2 authenticationToken:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x00000000003315a6
- (void)stopSharingNoteWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x00000000003314e7
- (void)shareNoteWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000331428
- (void)emailNoteWithParameters:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000331369
- (void)getSharedNotebookByAuthWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x00000000003312ad
- (void)authenticateToSharedNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x00000000003311ee
- (void)expungeLinkedNotebookWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000033112f
- (void)listLinkedNotebooksWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x0000000000331073
- (void)updateLinkedNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000330fb4
- (void)createLinkedNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000330ef5
- (void)expungeSharedNotebooksWithIds:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000330e36
- (void)listSharedNotebooksWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x0000000000330d7a
- (void)sendMessageToSharedNotebookMembersWithGuid:(id)arg1 messageText:(id)arg2 recipients:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x0000000000330caa
- (void)createSharedNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000330beb
- (void)getPublicNotebookWithUserID:(int)arg1 publicUri:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000000330b26
- (void)getResourceAttributesWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000330a67
- (void)getResourceAlternateDataWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x00000000003309a8
- (void)getResourceRecognitionWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x00000000003308e9
- (void)getResourceByHashWithGuid:(id)arg1 contentHash:(id)arg2 withData:(_Bool)arg3 withRecognition:(_Bool)arg4 withAlternateData:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;	// IMP=0x00000000003307fc
- (void)getResourceDataWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000033073d
- (void)updateResource:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000033067e
- (void)unsetResourceApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x00000000003305b7
- (void)setResourceApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 value:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x00000000003304e7
- (void)getResourceApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000000330420
- (void)getResourceApplicationDataWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x0000000000330361
- (void)getResourceWithGuid:(id)arg1 withData:(_Bool)arg2 withRecognition:(_Bool)arg3 withAttributes:(_Bool)arg4 withAlternateDate:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;	// IMP=0x0000000000330271
- (void)getNoteVersionWithGuid:(id)arg1 updateSequenceNum:(int)arg2 withResourcesData:(_Bool)arg3 withResourcesRecognition:(_Bool)arg4 withResourcesAlternateData:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;	// IMP=0x0000000000330186
- (void)listNoteVersionsWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x00000000003300c7
- (void)copyNoteWithGuid:(id)arg1 toNoteBookGuid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x0000000000330000
- (void)expungeInactiveNoteWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x000000000032ff44
- (void)expungeNotesWithGuids:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032fe85
- (void)expungeNoteWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032fdc6
- (void)deleteNoteWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032fd07
- (void)updateNote:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032fc48
- (void)createNote:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032fb89
- (void)getNoteTagNamesWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032faca
- (void)getResourceSearchTextWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032fa0b
- (void)getNoteSearchTextWithGuid:(id)arg1 noteOnly:(_Bool)arg2 tokenizeForIndexing:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x000000000032f93d
- (void)getNoteContentWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032f87e
- (void)unsetNoteApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x000000000032f7b7
- (void)setNoteApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 value:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x000000000032f6e7
- (void)getNoteApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x000000000032f620
- (void)getNoteApplicationDataWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032f561
- (void)getNoteWithGuid:(id)arg1 withContent:(_Bool)arg2 withResourcesData:(_Bool)arg3 withResourcesRecognition:(_Bool)arg4 withResourcesAlternateData:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;	// IMP=0x000000000032f476
- (void)findNoteCountsWithFilter:(id)arg1 withTrash:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x000000000032f3b1
- (void)findNotesMetadataWithFilter:(id)arg1 offset:(int)arg2 maxNotes:(int)arg3 resultSpec:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;	// IMP=0x000000000032f2e0
- (void)findNoteOffsetWithFilter:(id)arg1 guid:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x000000000032f219
- (void)findNotesWithFilter:(id)arg1 offset:(int)arg2 maxNotes:(int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x000000000032f14b
- (void)findRelatedWithQuery:(id)arg1 resultSpec:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x000000000032f084
- (void)expungeSearchWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032efc5
- (void)updateSearch:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032ef06
- (void)createSearch:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032ee47
- (void)getSearchWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032ed88
- (void)listSearchesWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x000000000032eccc
- (void)expungeTagWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032ec0d
- (void)untagAllWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032eb4e
- (void)updateTag:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032ea8f
- (void)createTag:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032e9d0
- (void)getTagWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032e911
- (void)listTagsByNotebookWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032e852
- (void)listTagsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x000000000032e796
- (void)expungeNotebookWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032e6d7
- (void)updateNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032e618
- (void)createNotebook:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032e559
- (void)getDefaultNotebookWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x000000000032e49d
- (void)getNotebookWithGuid:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032e3de
- (void)listNotebooksWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x000000000032e322
- (void)getLinkedNotebookSyncChunk:(id)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 fullSyncOnly:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;	// IMP=0x000000000032e251
- (void)getLinkedNotebookSyncState:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000032e192
- (void)getFilteredSyncChunkAfterUSN:(int)arg1 maxEntries:(int)arg2 filter:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x000000000032e0c6
- (void)getSyncChunkAfterUSN:(int)arg1 maxEntries:(int)arg2 fullSyncOnly:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x000000000032dffa
- (void)getSyncStateWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x000000000032df3e
- (void)findNotesMetadataInternalWithFilter:(id)arg1 offset:(int)arg2 resultSpec:(id)arg3 maxResults:(unsigned long long)arg4 results:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;	// IMP=0x000000000032dd55
- (void)findNotesMetadataWithFilter:(id)arg1 maxResults:(unsigned long long)arg2 resultSpec:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x000000000032dc84
- (void)cancelFirstOperation;	// IMP=0x000000000032dc47
- (void)setRecipientSettings:(id)arg1 forSharedNotebookWithID:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032dba4
- (void)updateSharedNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032db08
- (void)authenticateToSharedNoteWithGuid:(id)arg1 noteKey:(id)arg2 authenticationToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032da1b
- (void)stopSharingNoteWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d97f
- (void)shareNoteWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d8e3
- (void)emailNoteWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d847
- (void)fetchSharedNotebookByAuthWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032d7f8
- (void)authenticateToSharedNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d75c
- (void)expungeLinkedNotebookWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d6c0
- (void)listLinkedNotebooksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032d671
- (void)updateLinkedNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d5d5
- (void)createLinkedNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d539
- (void)expungeSharedNotebooksWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d49d
- (void)listSharedNotebooksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032d44e
- (void)sendMessageToMembersOfSharedNotebookWithGuid:(id)arg1 messageText:(id)arg2 recipients:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032d361
- (void)createSharedNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d2c5
- (void)fetchPublicNotebookWithUserID:(int)arg1 publicURI:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032d222
- (void)fetchAttributesForResourceWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d186
- (void)fetchAlternateDataForResourceWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d0ea
- (void)fetchRecognitionDataForResourceWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032d04e
- (void)fetchResourceByHashWithGuid:(id)arg1 contentHash:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032cf84
- (void)fetchResourceDataWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032cee8
- (void)updateResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032ce4c
- (void)unsetResourceApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032cd89
- (void)setResourceApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032cc9c
- (void)fetchResourceApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032cbd9
- (void)fetchResourceApplicationDataWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032cb3d
- (void)fetchResourceWithGuid:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032ca9a
- (void)fetchNoteVersionWithGuid:(id)arg1 updateSequenceNum:(int)arg2 resourceOptions:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032c9ef
- (void)listNoteVersionsWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c953
- (void)copyNoteWithGuid:(id)arg1 toNotebookWithGuid:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032c890
- (void)expungeInactiveNoteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032c841
- (void)expungeNotesWithGuids:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c7a5
- (void)expungeNoteWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c709
- (void)deleteNoteWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c66d
- (void)updateNote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c5d1
- (void)createNote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c535
- (void)fetchTagNamesForNoteWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c499
- (void)fetchSearchTextForResourceWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c3fd
- (void)fetchSearchTextForNoteWithGuid:(id)arg1 noteOnly:(_Bool)arg2 tokenizeForIndexing:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032c352
- (void)fetchNoteContentWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c2b6
- (void)unsetNoteApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032c1f3
- (void)setNoteApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032c106
- (void)fetchNoteApplicationDataEntryWithGuid:(id)arg1 key:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032c043
- (void)fetchNoteApplicationDataWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032bfa7
- (void)fetchNoteWithGuid:(id)arg1 includingContent:(_Bool)arg2 resourceOptions:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032befc
- (void)findNoteCountsWithFilter:(id)arg1 includingTrash:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032be59
- (void)findNotesMetadataWithFilter:(id)arg1 offset:(int)arg2 maxNotes:(int)arg3 resultSpec:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000032bd89
- (void)findNoteOffsetWithFilter:(id)arg1 guid:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032bcc6
- (void)findNotesWithFilter:(id)arg1 offset:(int)arg2 maxNotes:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032bc1b
- (void)findRelatedWithQuery:(id)arg1 resultSpec:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000032bb58
- (void)expungeSearchWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032babc
- (void)updateSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032ba20
- (void)createSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b984
- (void)fetchSearchWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b8e8
- (void)listSearchesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032b899
- (void)expungeTagWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b7fd
- (void)untagAllWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b761
- (void)updateTag:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b6c5
- (void)createTag:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b629
- (void)fetchTagWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b58d
- (void)listTagsInNotebookWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b4f1
- (void)listTagsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032b4a2
- (void)expungeNotebookWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b406
- (void)updateNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b36a
- (void)createNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b281
- (void)fetchDefaultNotebookWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032b232
- (void)fetchNotebookWithGuid:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032b196
- (void)listNotebooksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032b147
- (void)fetchSyncChunkForLinkedNotebook:(id)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 fullSyncOnly:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000032b095
- (void)fetchSyncStateForLinkedNotebook:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032aff9
- (void)fetchFilteredSyncChunkAfterUSN:(int)arg1 maxEntries:(int)arg2 filter:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032af4e
- (void)fetchSyncChunkAfterUSN:(int)arg1 maxEntries:(int)arg2 fullSyncOnly:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032aef2
- (void)fetchSyncStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000032aea3
- (id)authenticateToSharedNotebookWithGlobalId:(id)arg1;	// IMP=0x000000000032adff
- (void)updateProgressHandlers;	// IMP=0x000000000032ab30
- (id)noteStoreUrl;	// IMP=0x000000000032aaa6
- (id)authenticationToken;	// IMP=0x000000000032aa94

@end
