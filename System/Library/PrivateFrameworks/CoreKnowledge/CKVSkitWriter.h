//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSkitWriteAccess-Protocol.h>

@class CKVFilesystemBase, NSLocale, NSURL;

@interface CKVSkitWriter : NSObject <CKVSkitWriteAccess>
{
    NSURL *_directoryURL;	// 8 = 0x8
    CKVFilesystemBase *_base;	// 16 = 0x10
    struct unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> _indexer;	// 24 = 0x18
    NSLocale *_skitLocale;	// 32 = 0x20
    NSLocale *_transactionLocale;	// 40 = 0x28
    unsigned long long _flushThreshold;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x000000000009db2d
- (id).cxx_construct;	// IMP=0x000000000009d52a
- (void).cxx_destruct;	// IMP=0x000000000009d4e1
@property(readonly, nonatomic) unsigned long long flushThreshold; // @synthesize flushThreshold=_flushThreshold;
- (_Bool)shouldMerge:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x000000000009d47a
- (_Bool)cleanupWithError:(id *)arg1;	// IMP=0x000000000009d421
- (_Bool)clearWithError:(id *)arg1;	// IMP=0x000000000009d32f
- (_Bool)removeVocabularyItemWithRecordId:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009d28b
- (_Bool)addVocabularyItemWithBuffer:(id)arg1 originAppId:(id)arg2 recordId:(id)arg3 error:(id *)arg4;	// IMP=0x000000000009d04f
- (_Bool)_setTransactionLocaleWithAssetPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009cf88
- (_Bool)setTransactionLocale:(id)arg1 assetPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009caae
- (_Bool)_saveLocaleWithError:(id *)arg1;	// IMP=0x000000000009c70b
- (_Bool)_loadLocaleWithError:(id *)arg1;	// IMP=0x000000000009c5a6
- (_Bool)rollbackTransactionWithError:(id *)arg1;	// IMP=0x000000000009c4b4
- (_Bool)commitTransactionWithError:(id *)arg1;	// IMP=0x000000000009c3ab
- (_Bool)beginTransactionWithError:(id *)arg1;	// IMP=0x000000000009c2a2
- (id)init;	// IMP=0x000000000009c23e
- (id)initWithSkitDirectoryURL:(id)arg1 filesystemBase:(id)arg2 flushThreshold:(unsigned long long)arg3;	// IMP=0x000000000009bf88

@end

