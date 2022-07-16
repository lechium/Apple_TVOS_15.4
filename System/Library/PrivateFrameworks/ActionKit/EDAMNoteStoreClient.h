//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/EDAMNoteStore-Protocol.h>

@class NSString;
@protocol ENTProtocol;

@interface EDAMNoteStoreClient : NSObject <EDAMNoteStore>
{
    id <ENTProtocol> _inProtocol;	// 8 = 0x8
    id <ENTProtocol> _outProtocol;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c6ab0
- (id)getLinkedAccountSyncState:(id)arg1 linkedAccount:(id)arg2;	// IMP=0x00000000001c6748
- (id)sendLogRequest:(id)arg1 logRequest:(id)arg2;	// IMP=0x00000000001c63e0
- (int)renameNotebook:(id)arg1 notebookGuid:(id)arg2 name:(id)arg3;	// IMP=0x00000000001c5fd2
- (id)getNotebookSharesEmailAddresses:(id)arg1 notebookGuid:(id)arg2 identities:(id)arg3 skipUnknownUserIdentities:(_Bool)arg4;	// IMP=0x00000000001c5a8e
- (void)unpublishNotebook:(id)arg1 notebookGuid:(id)arg2 convertGroupSharesToIndividual:(_Bool)arg3;	// IMP=0x00000000001c56d3
- (id)joinPublishedBusinessNotebook:(id)arg1 notebookGuid:(id)arg2;	// IMP=0x00000000001c5368
- (id)manageNoteShares:(id)arg1 parameters:(id)arg2;	// IMP=0x00000000001c5000
- (id)getNoteShares:(id)arg1 noteGuid:(id)arg2;	// IMP=0x00000000001c4c95
- (id)getNotebookShares:(id)arg1 notebookGuid:(id)arg2;	// IMP=0x00000000001c492a
- (id)manageNotebookShares:(id)arg1 parameters:(id)arg2;	// IMP=0x00000000001c45c2
- (id)updateNoteIfUsnMatches:(id)arg1 note:(id)arg2;	// IMP=0x00000000001c425a
- (id)getViewersForNotes:(id)arg1 noteGuids:(id)arg2;	// IMP=0x00000000001c3e97
- (id)releaseNoteLock:(id)arg1 noteGuid:(id)arg2;	// IMP=0x00000000001c3b2c
- (id)acquireNoteLock:(id)arg1 noteGuid:(id)arg2;	// IMP=0x00000000001c37c1
- (id)getNoteLockStatus:(id)arg1 noteGuid:(id)arg2;	// IMP=0x00000000001c3456
- (void)requestAccessToNotebook:(id)arg1 notebookGuid:(id)arg2 privilegeLevel:(int)arg3;	// IMP=0x00000000001c3084
- (int)stopSharingNoteWithBusiness:(id)arg1 noteGuid:(id)arg2;	// IMP=0x00000000001c2d14
- (int)shareNoteWithBusiness:(id)arg1 noteGuid:(id)arg2;	// IMP=0x00000000001c29a4
- (id)findInBusiness:(id)arg1 query:(id)arg2;	// IMP=0x00000000001c2683
- (id)findContacts:(id)arg1 query:(id)arg2;	// IMP=0x00000000001c2333
- (id)findTimeZones:(id)arg1 timeZoneSpec:(id)arg2 maxTimeZones:(int)arg3;	// IMP=0x00000000001c1f1d
- (void)updateUserSetting:(id)arg1 setting:(int)arg2 value:(id)arg3;	// IMP=0x00000000001c1b68
- (id)findSearchSuggestions:(id)arg1 query:(id)arg2 resultSpec:(id)arg3;	// IMP=0x00000000001c1739
- (id)findRelated:(id)arg1 query:(id)arg2 resultSpec:(id)arg3;	// IMP=0x00000000001c130a
- (id)createOrUpdateSharedNotes:(id)arg1 shareTemplate:(id)arg2;	// IMP=0x00000000001c0f10
- (id)authenticateToSharedNote:(id)arg1 noteKey:(id)arg2 authenticationToken:(id)arg3;	// IMP=0x00000000001c0b06
- (void)stopSharingNoteWithRecipients:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001c07ef
- (void)stopSharingNote:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001c04d8
- (id)shareNote:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001c0182
- (void)emailNote:(id)arg1 parameters:(id)arg2;	// IMP=0x00000000001bfe66
- (id)getSharedNotebookByAuth:(id)arg1;	// IMP=0x00000000001bfb93
- (id)authenticateToSharedNotebook:(id)arg1 authenticationToken:(id)arg2;	// IMP=0x00000000001bf828
- (int)expungeLinkedNotebook:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001bf4b8
- (id)listLinkedNotebooks:(id)arg1;	// IMP=0x00000000001bf1a8
- (int)updateLinkedNotebook:(id)arg1 linkedNotebook:(id)arg2;	// IMP=0x00000000001bee2a
- (id)createLinkedNotebook:(id)arg1 linkedNotebook:(id)arg2;	// IMP=0x00000000001beac2
- (int)expungeSharedNotebooks:(id)arg1 sharedNotebookIds:(id)arg2;	// IMP=0x00000000001be71f
- (id)listSharedNotebooks:(id)arg1;	// IMP=0x00000000001be40f
- (int)sendMessageToSharedNotebookMembers:(id)arg1 notebookGuid:(id)arg2 messageText:(id)arg3 recipients:(id)arg4;	// IMP=0x00000000001bdf10
- (id)setNotebookRecipientSettings:(id)arg1 notebookGuid:(id)arg2 recipientSettings:(id)arg3;	// IMP=0x00000000001bdae5
- (int)setSharedNotebookRecipientSettings:(id)arg1 sharedNotebookId:(long long)arg2 recipientSettings:(id)arg3;	// IMP=0x00000000001bd6a6
- (int)updateSharedNotebook:(id)arg1 sharedNotebook:(id)arg2;	// IMP=0x00000000001bd328
- (id)createOrUpdateNotebookShares:(id)arg1 shareTemplate:(id)arg2;	// IMP=0x00000000001bcf63
- (id)shareNotebook:(id)arg1 sharedNotebook:(id)arg2 message:(id)arg3;	// IMP=0x00000000001bcb3f
- (id)createSharedNotebook:(id)arg1 sharedNotebook:(id)arg2;	// IMP=0x00000000001bc7d7
- (id)getPublicNotebook:(int)arg1 publicUri:(id)arg2;	// IMP=0x00000000001bc4a2
- (id)getRandomAd:(id)arg1 adParameters:(id)arg2;	// IMP=0x00000000001bc181
- (id)getAds:(id)arg1 adParameters:(id)arg2;	// IMP=0x00000000001bbe31
- (id)getResourceAttributes:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001bbac6
- (id)getResourceAlternateData:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001bb770
- (id)getResourceRecognition:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001bb41a
- (id)getResourceByHash:(id)arg1 noteGuid:(id)arg2 contentHash:(id)arg3 withData:(_Bool)arg4 withRecognition:(_Bool)arg5 withAlternateData:(_Bool)arg6;	// IMP=0x00000000001badd8
- (id)getResourceData:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001baa82
- (int)updateResource:(id)arg1 resource:(id)arg2;	// IMP=0x00000000001ba704
- (int)unsetResourceApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3;	// IMP=0x00000000001ba2f6
- (int)setResourceApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3 value:(id)arg4;	// IMP=0x00000000001b9e3f
- (id)getResourceApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3;	// IMP=0x00000000001b9a45
- (id)getResourceApplicationData:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b96da
- (id)getResource:(id)arg1 guid:(id)arg2 withData:(_Bool)arg3 withRecognition:(_Bool)arg4 withAttributes:(_Bool)arg5 withAlternateData:(_Bool)arg6;	// IMP=0x00000000001b9090
- (id)getNoteVersion:(id)arg1 noteGuid:(id)arg2 updateSequenceNum:(int)arg3 withResourcesData:(_Bool)arg4 withResourcesRecognition:(_Bool)arg5 withResourcesAlternateData:(_Bool)arg6;	// IMP=0x00000000001b8a40
- (id)listNoteVersions:(id)arg1 noteGuid:(id)arg2;	// IMP=0x00000000001b869a
- (id)copyNote:(id)arg1 noteGuid:(id)arg2 toNotebookGuid:(id)arg3;	// IMP=0x00000000001b8294
- (int)expungeInactiveNotes:(id)arg1;	// IMP=0x00000000001b800a
- (int)expungeNotes:(id)arg1 noteGuids:(id)arg2;	// IMP=0x00000000001b7c67
- (int)expungeNote:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b78f7
- (int)deleteNote:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b7587
- (id)updateNote:(id)arg1 note:(id)arg2;	// IMP=0x00000000001b721f
- (id)createNote:(id)arg1 note:(id)arg2;	// IMP=0x00000000001b6eb7
- (id)getNoteTagNames:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b6b24
- (id)getResourceSearchText:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b67ce
- (id)getNoteSearchText:(id)arg1 guid:(id)arg2 noteOnly:(_Bool)arg3 tokenizeForIndexing:(_Bool)arg4;	// IMP=0x00000000001b6305
- (id)getNoteContent:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b5faf
- (int)unsetNoteApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3;	// IMP=0x00000000001b5ba1
- (int)setNoteApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3 value:(id)arg4;	// IMP=0x00000000001b56ea
- (id)getNoteApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3;	// IMP=0x00000000001b52f0
- (id)getNoteApplicationData:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b4f85
- (int)updatePreferences:(id)arg1 preferencesToUpdate:(id)arg2;	// IMP=0x00000000001b4ba8
- (id)getPreferences:(id)arg1 preferenceNames:(id)arg2;	// IMP=0x00000000001b4855
- (id)getNote:(id)arg1 guid:(id)arg2 withContent:(_Bool)arg3 withResourcesData:(_Bool)arg4 withResourcesRecognition:(_Bool)arg5 withResourcesAlternateData:(_Bool)arg6;	// IMP=0x00000000001b420b
- (id)getNoteWithResultSpec:(id)arg1 guid:(id)arg2 resultSpec:(id)arg3;	// IMP=0x00000000001b3de0
- (id)findNoteCounts:(id)arg1 filter:(id)arg2 withTrash:(_Bool)arg3;	// IMP=0x00000000001b39a7
- (id)getNoteSnippets:(id)arg1 noteGuids:(id)arg2 maxSnippetLength:(int)arg3;	// IMP=0x00000000001b3534
- (id)findNotesMetadata:(id)arg1 filter:(id)arg2 offset:(int)arg3 maxNotes:(int)arg4 resultSpec:(id)arg5;	// IMP=0x00000000001b2f8b
- (int)findNoteOffset:(id)arg1 filter:(id)arg2 guid:(id)arg3;	// IMP=0x00000000001b2b5a
- (id)findNotes:(id)arg1 filter:(id)arg2 offset:(int)arg3 maxNotes:(int)arg4;	// IMP=0x00000000001b2665
- (int)expungeSearch:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b22f5
- (int)updateSearch:(id)arg1 search:(id)arg2;	// IMP=0x00000000001b1f77
- (id)createSearch:(id)arg1 search:(id)arg2;	// IMP=0x00000000001b1c56
- (id)getSearch:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b18eb
- (id)listSearches:(id)arg1;	// IMP=0x00000000001b162a
- (int)expungeTag:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b12ba
- (void)untagAll:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b0fa3
- (int)updateTag:(id)arg1 tag:(id)arg2;	// IMP=0x00000000001b0c25
- (id)createTag:(id)arg1 tag:(id)arg2;	// IMP=0x00000000001b08bd
- (id)getTag:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001b0552
- (id)listTagsByNotebook:(id)arg1 notebookGuid:(id)arg2;	// IMP=0x00000000001b01ac
- (id)listTags:(id)arg1;	// IMP=0x00000000001afeeb
- (int)expungeNotebook:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001afb7b
- (int)updateNotebook:(id)arg1 notebook:(id)arg2;	// IMP=0x00000000001af7fd
- (id)createNotebook:(id)arg1 notebook:(id)arg2;	// IMP=0x00000000001af4dc
- (id)getDefaultNotebook:(id)arg1;	// IMP=0x00000000001af256
- (id)getNotebook:(id)arg1 guid:(id)arg2;	// IMP=0x00000000001aeeeb
- (id)listAccessibleBusinessNotebooks:(id)arg1;	// IMP=0x00000000001aec2a
- (id)listPublishedBusinessNotebooks:(id)arg1;	// IMP=0x00000000001ae969
- (id)listNotebooks:(id)arg1;	// IMP=0x00000000001ae6a8
- (id)getLinkedNotebookSyncChunk:(id)arg1 linkedNotebook:(id)arg2 afterUSN:(int)arg3 maxEntries:(int)arg4 fullSyncOnly:(_Bool)arg5;	// IMP=0x00000000001ae0f7
- (id)getLinkedNotebookSyncState:(id)arg1 linkedNotebook:(id)arg2;	// IMP=0x00000000001add8f
- (id)getFilteredSyncChunk:(id)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 filter:(id)arg4;	// IMP=0x00000000001ad903
- (id)getSyncChunk:(id)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 fullSyncOnly:(_Bool)arg4;	// IMP=0x00000000001ad480
- (id)getSyncStateWithMetrics:(id)arg1 clientMetrics:(id)arg2;	// IMP=0x00000000001ad15f
- (id)getSyncState:(id)arg1;	// IMP=0x00000000001aced9
- (id)initWithInProtocol:(id)arg1 outProtocol:(id)arg2;	// IMP=0x00000000001ace40
- (id)initWithProtocol:(id)arg1;	// IMP=0x00000000001ace2b
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000358cd5
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000358c8c
- (void)cancel;	// IMP=0x0000000000358c4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

