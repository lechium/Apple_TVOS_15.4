//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface UISUIActivityExtensionItemData : NSObject <NSSecureCoding>
{
    NSArray *_extensionItems;	// 8 = 0x8
    NSDictionary *_openURLAnnotationsByURL;	// 16 = 0x10
    struct __CFDictionary *_itemProviderOrExtensionItemWithMetadataToUUID;	// 24 = 0x18
    NSMutableDictionary *_attachmentNamesByItemUUID;	// 32 = 0x20
    NSMutableDictionary *_subjectsByItemUUID;	// 40 = 0x28
    NSMutableDictionary *_previewImagesByItemUUID;	// 48 = 0x30
    NSMutableDictionary *_previewImageDataByItemUUID;	// 56 = 0x38
    NSMutableDictionary *_dataTypesByItemUUID;	// 64 = 0x40
}

+ (id)_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2;	// IMP=0x000000000004573f
+ (id)_onBackgroundQueue_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2;	// IMP=0x000000000004553f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000044702
- (void).cxx_destruct;	// IMP=0x0000000000046ba0
@property(readonly, nonatomic) NSMutableDictionary *dataTypesByItemUUID; // @synthesize dataTypesByItemUUID=_dataTypesByItemUUID;
@property(readonly, nonatomic) NSMutableDictionary *previewImageDataByItemUUID; // @synthesize previewImageDataByItemUUID=_previewImageDataByItemUUID;
@property(readonly, nonatomic) NSMutableDictionary *previewImagesByItemUUID; // @synthesize previewImagesByItemUUID=_previewImagesByItemUUID;
@property(readonly, nonatomic) NSMutableDictionary *subjectsByItemUUID; // @synthesize subjectsByItemUUID=_subjectsByItemUUID;
@property(readonly, nonatomic) NSMutableDictionary *attachmentNamesByItemUUID; // @synthesize attachmentNamesByItemUUID=_attachmentNamesByItemUUID;
@property(readonly, nonatomic) struct __CFDictionary *itemProviderOrExtensionItemWithMetadataToUUID; // @synthesize itemProviderOrExtensionItemWithMetadataToUUID=_itemProviderOrExtensionItemWithMetadataToUUID;
@property(retain, nonatomic) NSDictionary *openURLAnnotationsByURL; // @synthesize openURLAnnotationsByURL=_openURLAnnotationsByURL;
@property(retain, nonatomic) NSArray *extensionItems; // @synthesize extensionItems=_extensionItems;
- (id)_getItemUUIDForItem:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000046aa1
- (void)_setItemUUID:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000046a29
- (void)_changeUUIDMappingFromExtensionItems:(id)arg1 toClonedExtensionItems:(id)arg2;	// IMP=0x00000000000466e8
- (id)_uuidMappingDataForTemporaryAttachmentToExtensionItem:(id)arg1 attachments:(id)arg2;	// IMP=0x00000000000463f5
- (void)_removeTemporaryUUIDMappingAttachmentFromExtensionItems:(id)arg1;	// IMP=0x000000000004615d
- (void)_appendTemporaryUUIDMappingAttachmentToExtensionItem:(id)arg1;	// IMP=0x0000000000045e2e
- (void)_loadItemProviderOrExtensionItemWithMetadataToUUIDFromTemporaryUUIDMappingAttachedToExtensionItems:(id)arg1;	// IMP=0x00000000000458be
- (void)prepareForSendingAsCompletionToHostWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000000451f0
- (void)prepareForSendingToExtension:(id)arg1;	// IMP=0x0000000000045137
- (id)allDataTypes;	// IMP=0x0000000000045121
- (id)dataTypeForItem:(id)arg1;	// IMP=0x00000000000450bf
- (void)addDataType:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000004503e
- (id)previewImageDataForItem:(id)arg1;	// IMP=0x0000000000044fdc
- (void)addPreviewImageData:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000044f5b
- (id)previewImageForItem:(id)arg1;	// IMP=0x0000000000044ef9
- (void)addPreviewImage:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000044e78
- (id)subjectForItem:(id)arg1;	// IMP=0x0000000000044e16
- (void)addSubject:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000044d95
- (id)attachmentNameForItem:(id)arg1;	// IMP=0x0000000000044d33
- (void)addAttachmentName:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000044cb2
- (void)dealloc;	// IMP=0x0000000000044c73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000044a86
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000044841
- (id)init;	// IMP=0x000000000004470a

@end
