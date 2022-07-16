//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, UNSBundleLibrarian, UNSKeyedDictionaryRepository;

@interface UNSAttachmentsRepository : NSObject
{
    UNSKeyedDictionaryRepository *_referencesRepository;	// 8 = 0x8
    NSURL *_directoryURL;	// 16 = 0x10
    UNSBundleLibrarian *_librarian;	// 24 = 0x18
}

+ (id)_sha1HashOfFileAtURL:(id)arg1;	// IMP=0x0000000000068798
- (void).cxx_destruct;	// IMP=0x00000000000689f1
- (id)_attachmentDirectoryForBundleIdentifier:(id)arg1;	// IMP=0x0000000000068707
- (id)_fileURLForDigestString:(id)arg1 extension:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x0000000000068644
- (void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)arg1;	// IMP=0x0000000000067f92
- (void)_performAttachmentRepositoryKeyMigration;	// IMP=0x0000000000067952
- (void)_performAttachmentReferencesMigrationForBundleIdentifier:(id)arg1;	// IMP=0x0000000000067577
- (void)_performAttachmentFilesMigration;	// IMP=0x0000000000067024
- (void)_performAttachmentReferencesMigration;	// IMP=0x0000000000066ea0
- (void)performMigration;	// IMP=0x0000000000066e65
- (unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)arg1 bundleIdentifier:(id)arg2 usingTransformBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066c01
- (void)_transformAttachmentsForBundleIdentifier:(id)arg1 usingTransformBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066aca
- (void)_removeAllReferencesForBundleIdentifier:(id)arg1;	// IMP=0x0000000000066aa9
- (unsigned long long)_removeReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x00000000000669be
- (unsigned long long)_addReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x0000000000066901
- (void)deleteAllFilesForBundleIdentifier:(id)arg1;	// IMP=0x00000000000667f5
- (void)_removeRepositoryURL:(id)arg1;	// IMP=0x0000000000066721
- (void)removeReferenceToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x00000000000665b8
- (id)moveFileIntoRepositoryFromFileURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x00000000000660d5
- (id)referencesForBundleIdentifier:(id)arg1;	// IMP=0x00000000000660bf
- (id)allBundleIdentifiers;	// IMP=0x00000000000660a9
- (_Bool)isValidRepositoryURL:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000065f99
- (_Bool)isRepositoryURL:(id)arg1;	// IMP=0x0000000000065f00
- (id)_claimedRepositoryURLsForBundleIdentifier:(id)arg1;	// IMP=0x0000000000065e34
- (id)bundleIdentifiersClaimingAttachments;	// IMP=0x0000000000065c31
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2;	// IMP=0x0000000000065b38

@end
