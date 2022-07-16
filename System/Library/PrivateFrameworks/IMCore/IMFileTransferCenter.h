//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMCore/IMFileTransferCenter-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IMFileTransferCenter : NSObject <IMFileTransferCenter>
{
    NSMutableDictionary *_guidToTransferMap;	// 8 = 0x8
    NSMutableDictionary *_guidToRemovedTransferMap;	// 16 = 0x10
    NSMutableDictionary *_accountIDToTransferGUIDsMap;	// 24 = 0x18
    NSMutableArray *_preauthorizedInfos;	// 32 = 0x20
    NSMutableArray *_preauthorizedGUIDs;	// 40 = 0x28
    NSMutableSet *_activeTransfers;	// 48 = 0x30
    NSMutableSet *_pendingTransfers;	// 56 = 0x38
    _Bool _disconnectionListenerSetUp;	// 64 = 0x40
    NSMutableDictionary *_fetchHighQualityVariantCompletionHandlers;	// 72 = 0x48
    NSMutableDictionary *_localFileURLRetrievalCompletionHandlers;	// 80 = 0x50
    NSMutableDictionary *_localFileURLRetrievalWithGuidCompletionHandlers;	// 88 = 0x58
    _Bool _issueSandboxEstensionsForTransfers;	// 96 = 0x60
}

+ (Class)fileTransferClass;	// IMP=0x0000000000063c3f
+ (Class)transferCenterClass;	// IMP=0x0000000000063c0a
+ (void)setTransferCenterClass:(Class)arg1;	// IMP=0x0000000000063bfd
+ (id)sharedInstance;	// IMP=0x0000000000063bb4
- (void).cxx_destruct;	// IMP=0x000000000006a0c0
@property(nonatomic, getter=shouldIssueSandboxEstensionsForTransfers) _Bool issueSandboxEstensionsForTransfers; // @synthesize issueSandboxEstensionsForTransfers=_issueSandboxEstensionsForTransfers;
- (void)_registerDaemonListenerIfNecessary;	// IMP=0x0000000000069ec9
- (void)createItemForPHAssetWithUUID:(id)arg1 parentChatItemGUID:(id)arg2 chatGUID:(id)arg3;	// IMP=0x0000000000069e28
- (void)_initiateLocalFileURLRetrievalInDaemonForGUIDs:(id)arg1 options:(long long)arg2;	// IMP=0x0000000000069d9f
- (void)_initiateLocalFileURLRetrievalInDaemonForGUID:(id)arg1 options:(long long)arg2;	// IMP=0x0000000000069d16
- (void)retrieveLocalFileURLForFileTransferWithGUIDs:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006968c
- (void)retrieveLocalFileURLForFileTransferWithGUID:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006924d
- (void)preWarmConnection;	// IMP=0x00000000000691e2
- (void)_daemonDisconnected:(id)arg1;	// IMP=0x0000000000068e34
- (void)_daemonRestarted:(id)arg1;	// IMP=0x0000000000068dce
- (void)_initiateHighQualityVariantDownloadWithDaemonForGUID:(id)arg1;	// IMP=0x0000000000068d58
- (void)_fetchHighQualityVariantForTransferGUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068b85
- (void)fetchHighQualityVariantForTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068af7
- (id)guidsForStoredAttachmentPayloadData:(id)arg1 messageGUID:(id)arg2;	// IMP=0x000000000006861f
- (void)setCommSafetySensitiveForTransfer:(id)arg1 value:(long long)arg2;	// IMP=0x00000000000684c1
- (void)setAuxVideoForTransfer:(id)arg1 value:(_Bool)arg2;	// IMP=0x000000000006837b
- (void)setAuxImageForTransfer:(id)arg1 value:(_Bool)arg2;	// IMP=0x0000000000068235
- (void)_handleFileTransferExplicitDownloadFailed:(id)arg1 suggestedRetryGUID:(id)arg2 error:(id)arg3;	// IMP=0x0000000000067fdf
- (void)_handleFileTransfer:(id)arg1 explicitDownloadSucceededWithPath:(id)arg2 livePhotoBundlePath:(id)arg3;	// IMP=0x0000000000067d7f
- (void)_handleFileTransferHighQualityDownloadFailed:(id)arg1;	// IMP=0x0000000000067cc2
- (void)_handleFileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2;	// IMP=0x0000000000067b9a
- (void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;	// IMP=0x0000000000067ae9
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2 forceNotify:(_Bool)arg3;	// IMP=0x000000000006786d
- (void)_handleFileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2;	// IMP=0x000000000006764e
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;	// IMP=0x0000000000067480
- (void)_handleAllFileTransfers:(id)arg1;	// IMP=0x000000000006721a
- (void)acceptFileTransferIfPreauthorzed:(id)arg1;	// IMP=0x0000000000066f8b
- (_Bool)wasFileTransferPreauthorized:(id)arg1;	// IMP=0x0000000000066f75
- (void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4;	// IMP=0x0000000000066c18
- (_Bool)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2;	// IMP=0x0000000000066a87
- (void)clearFinishedTransfers;	// IMP=0x00000000000666a5
@property(readonly, nonatomic) NSArray *orderedTransfersGUIDs;
@property(readonly, nonatomic) __weak NSArray *orderedTransfers;
@property(readonly, nonatomic) NSArray *activeTransferGUIDs;
@property(readonly, nonatomic) __weak NSArray *activeTransfers;
@property(readonly, nonatomic) NSDictionary *transfers;
- (id)transfersForAccount:(id)arg1;	// IMP=0x0000000000066246
- (void)retargetTransfer:(id)arg1 toPath:(id)arg2;	// IMP=0x00000000000660f9
- (void)deleteTransfer:(id)arg1;	// IMP=0x0000000000065edf
- (void)removeTransfer:(id)arg1;	// IMP=0x0000000000065cf0
- (void)stopTransfer:(id)arg1;	// IMP=0x0000000000065b5c
- (void)acceptTransfer:(id)arg1;	// IMP=0x0000000000065b3c
- (void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(_Bool)arg3 overwrite:(_Bool)arg4;	// IMP=0x000000000006587a
- (void)sendTransfer:(id)arg1;	// IMP=0x0000000000065804
- (id)transferForGUID:(id)arg1 includeRemoved:(_Bool)arg2;	// IMP=0x000000000006577e
- (id)transferForGUID:(id)arg1;	// IMP=0x000000000006576a
- (id)chatForTransfer:(id)arg1;	// IMP=0x0000000000065538
- (void)registerTransferWithDaemon:(id)arg1;	// IMP=0x0000000000065467
- (void)assignTransfer:(id)arg1 toHandle:(id)arg2;	// IMP=0x00000000000650eb
- (void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3;	// IMP=0x0000000000064d55
- (void)_addSpotlightProperties:(id)arg1 sender:(id)arg2 recipients:(id)arg3 incoming:(_Bool)arg4;	// IMP=0x0000000000064d4f
- (_Bool)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2;	// IMP=0x0000000000064ac9
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1 useLegacyGuid:(_Bool)arg2;	// IMP=0x0000000000064768
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;	// IMP=0x0000000000064751
- (_Bool)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2;	// IMP=0x00000000000645e1
- (void)_addTransfer:(id)arg1;	// IMP=0x0000000000064430
- (void)_addTransfer:(id)arg1 toAccount:(id)arg2;	// IMP=0x0000000000064309
- (void)_clearTransfers;	// IMP=0x000000000006417c
- (void)_removeAllActiveTransfers;	// IMP=0x0000000000064030
- (void)_removeActiveTransfer:(id)arg1;	// IMP=0x0000000000063faf
- (void)_addActiveTransfer:(id)arg1;	// IMP=0x0000000000063f38
@property(readonly, nonatomic) _Bool hasActiveFileTransfers;
- (void)acknowledgeAllPendingTransfers;	// IMP=0x0000000000063dcf
- (void)acknowledgePendingTransfer:(id)arg1;	// IMP=0x0000000000063dbd
- (void)_removePendingTransfer:(id)arg1;	// IMP=0x0000000000063d3c
- (void)_addPendingTransfer:(id)arg1;	// IMP=0x0000000000063ce2
@property(readonly, nonatomic) _Bool hasPendingFileTransfers;
- (void)dealloc;	// IMP=0x0000000000063c50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
