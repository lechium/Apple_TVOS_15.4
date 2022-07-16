//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class MFMailMessage, MFMimePart, NSData, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    NSData *_messageData;	// 8 = 0x8
    MFMimePart *_parentPart;	// 16 = 0x10
    MFMailMessage *_message;	// 24 = 0x18
}

- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;	// IMP=0x00000000000b17af
- (id)messageForAttachment:(id)arg1;	// IMP=0x00000000000b17a5
- (void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b1588
- (id)fetchLocalDataForAttachment:(id)arg1;	// IMP=0x00000000000b1498
- (void)dealloc;	// IMP=0x00000000000b1447
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;	// IMP=0x00000000000b13cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
