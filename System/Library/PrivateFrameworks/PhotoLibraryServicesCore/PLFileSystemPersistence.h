//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLFileSystemPersistence : NSObject
{
    NSObject<OS_dispatch_queue> *_writerQueue;	// 8 = 0x8
}

+ (void)performBlockOnWriterQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000007cbe2
+ (void)persistMetadata:(id)arg1 fileURL:(id)arg2;	// IMP=0x000000000007ca75
+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;	// IMP=0x000000000007c9e2
+ (void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3;	// IMP=0x000000000007c93f
+ (void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;	// IMP=0x000000000007c8bc
+ (void)clearAllAttributesForFileAtUrl:(id)arg1;	// IMP=0x000000000007c4d9
+ (id)persistedAttributesForFileAtURL:(id)arg1 exists:(_Bool *)arg2 includeUnknownAttributes:(_Bool)arg3;	// IMP=0x000000000007bed5
+ (id)persistedAttributesForFileAtURL:(id)arg1;	// IMP=0x000000000007bebe
+ (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;	// IMP=0x000000000007bdff
+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1;	// IMP=0x000000000007bda9
+ (id)sharedInstance;	// IMP=0x000000000007bd85
+ (id)persistenceKeyTypes;	// IMP=0x000000000007ba07
- (void).cxx_destruct;	// IMP=0x000000000007b8bb
- (void)_performOnWriterQueueWithIdentifier:(const char *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b7ef
- (void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2;	// IMP=0x000000000007b731
- (id)init;	// IMP=0x000000000007b69b

@end

