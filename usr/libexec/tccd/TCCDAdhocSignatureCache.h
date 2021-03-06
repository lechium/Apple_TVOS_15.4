//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSFileManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TCCDAdhocSignatureCache : NSObject
{
    NSMutableDictionary *_keys;	// 8 = 0x8
    NSCache *_signatures;	// 16 = 0x10
    unsigned long long _capacity;	// 24 = 0x18
    NSString *_directoryPath;	// 32 = 0x20
    NSString *_keysPath;	// 40 = 0x28
    NSFileManager *_fileManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000265bb
- (void)addSignature:(id)arg1 forStaticCode:(struct __SecCode *)arg2;	// IMP=0x00100000000261b7
- (id)getSignatureForStaticCode:(struct __SecCode *)arg1;	// IMP=0x0010000000025ce3
- (void)maintainSize;	// IMP=0x0010000000025517
- (id)cacheKeyForStaticCode:(struct __SecCode *)arg1;	// IMP=0x0010000000024e75
- (void)saveSignature:(id)arg1 withUUID:(id)arg2;	// IMP=0x0010000000024d61
- (id)loadSignatureWithUUID:(id)arg1;	// IMP=0x0010000000024c5d
- (void)saveKeysToDirectory;	// IMP=0x0010000000024aff
- (void)loadKeysFromDirectory;	// IMP=0x00100000000248dd
- (void)createStateHandler;	// IMP=0x00100000000244a9
- (id)stateDump;	// IMP=0x00100000000241b1
- (id)init;	// IMP=0x00100000000241a3
- (id)initWithDirectoryPath:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0010000000023f4c
- (id)logHandle;	// IMP=0x0010000000023f1c

@end

