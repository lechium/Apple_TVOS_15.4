//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray, NSString;

@interface DownloadEntity : SSSQLiteEntity
{
}

+ (void)initialize;	// IMP=0x004000000002de87
+ (Class)memoryEntityClass;	// IMP=0x001000000002d801
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x001000000002d7e8
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x001000000002d7cf
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x001000000002d7be
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x001000000002d7a5
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x001000000002d78c
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x001000000002d6e9
+ (id)databaseTable;	// IMP=0x001000000002d6dc
+ (id)databasePropertyToSetClientProperty:(id)arg1;	// IMP=0x001000000002d64f
+ (id)databasePropertyToGetClientProperty:(id)arg1;	// IMP=0x001000000002d636
+ (id)copyValueDictionaryWithMetadata:(id)arg1;	// IMP=0x001000000002a5ac
- (_Bool)_shouldSuppressDialogForError:(id)arg1;	// IMP=0x000000000002de6b
- (void)_resetAssetProperty:(id)arg1;	// IMP=0x001000000002dcce
- (void)_deleteTransaction;	// IMP=0x001000000002dc14
- (id)_databaseAssetForAsset:(id)arg1;	// IMP=0x001000000002d9d9
- (void)deleteScratchDirectory;	// IMP=0x001000000002d912
- (_Bool)deleteFromDatabase;	// IMP=0x001000000002d812
- (id)setAssetsUsingDownload:(id)arg1;	// IMP=0x001000000002cf92
- (id)retryDownload;	// IMP=0x001000000002ce37
- (void)resetAssetURLs;	// IMP=0x001000000002ce1b
- (void)resetAssetLocalPaths;	// IMP=0x001000000002cdff
- (id)rentalInformation;	// IMP=0x001000000002ca5e
@property(readonly, nonatomic) NSString *ITunesSafeGUID;
@property(readonly, nonatomic) unsigned long long itemIdentifier;
- (id)finishWithFinalPhase:(id)arg1;	// IMP=0x001000000002c022
- (id)failWithError:(id)arg1;	// IMP=0x001000000002b993
@property(readonly, nonatomic) NSString *downloadKind;
- (id)copyStoreDownloadMetadata;	// IMP=0x001000000002b83e
- (id)copyDownloadingIPodLibraryItem;	// IMP=0x001000000002b5bb
- (id)copyAssetsWithAssetType:(id)arg1;	// IMP=0x001000000002b2df
- (id)copyAdditionalMetadataForStoreDownload:(id)arg1;	// IMP=0x001000000002b018
- (id)anyAssetForAssetType:(id)arg1;	// IMP=0x001000000002aeb6
@property(readonly, nonatomic) NSArray *allAssetCookies;
- (long long)addPersistentDownloadsWithClientID:(id)arg1 kind:(id)arg2;	// IMP=0x001000000002a5fa

@end

