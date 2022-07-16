//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MFAttachmentManager : NSObject
{
    NSObject<OS_dispatch_queue> *_arrayAccessQueue;	// 8 = 0x8
    NSMutableDictionary *_providers;	// 16 = 0x10
    NSMutableDictionary *_attachments;	// 24 = 0x18
    NSMutableDictionary *_metadata;	// 32 = 0x20
    NSLock *_metaDataLock;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_imageScalingQueue;	// 48 = 0x30
}

+ (id)supportedDocumentUTIs;	// IMP=0x00000000000c78bf
+ (id)defaultManager;	// IMP=0x00000000000c7730
+ (id)allManagers;	// IMP=0x00000000000c76eb
- (void)clearMetadataForAttachment:(id)arg1;	// IMP=0x00000000000c9ac4
- (id)metadataForAttachment:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000c9a34
- (void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000000c990a
- (id)_contentIDForAttachment:(id)arg1;	// IMP=0x00000000000c98f1
- (void)setContentID:(id)arg1 forAttachment:(id)arg2;	// IMP=0x00000000000c9842
- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;	// IMP=0x00000000000c983c
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;	// IMP=0x00000000000c9836
- (void)removeAttachmentForURL:(id)arg1;	// IMP=0x00000000000c9830
- (_Bool)updateAttachment:(id)arg1 withNewData:(id)arg2;	// IMP=0x00000000000c9828
- (void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2;	// IMP=0x00000000000c9822
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000c981a
- (void)fetchDataForAttachment:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c9626
- (void)cancelFetchForAttachment:(id)arg1;	// IMP=0x00000000000c93a0
- (void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2;	// IMP=0x00000000000c8e64
- (void)fetchDataSynchronouslyForAttachment:(id)arg1;	// IMP=0x00000000000c8ac8
- (void)fetchDataForAttachment:(id)arg1;	// IMP=0x00000000000c89a5
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 syncLock:(id *)arg3;	// IMP=0x00000000000c8972
- (id)attachmentsForContext:(id)arg1;	// IMP=0x00000000000c896a
- (id)attachmentForContentID:(id)arg1 preferredSchemes:(id)arg2;	// IMP=0x00000000000c8645
- (id)attachmentForContentID:(id)arg1;	// IMP=0x00000000000c8631
- (id)attachmentForCID:(id)arg1;	// IMP=0x00000000000c85cd
- (id)attachmentForTextAttachment:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c8551
- (id)attachmentsForURLs:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c839d
- (id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c831a
- (id)attachmentForURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c8303
- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c818a
- (id)_filePathForAttachment:(id)arg1;	// IMP=0x00000000000c80b9
- (_Bool)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c7d79
- (id)imageScalingQueue;	// IMP=0x00000000000c7d6f
- (void)removeProvider:(id)arg1;	// IMP=0x00000000000c7c04
- (void)removeProviderForBaseURL:(id)arg1;	// IMP=0x00000000000c7b79
- (void)addProvider:(id)arg1 forBaseURL:(id)arg2;	// IMP=0x00000000000c7aca
- (void)dealloc;	// IMP=0x00000000000c7826
- (id)init;	// IMP=0x00000000000c7767

@end
