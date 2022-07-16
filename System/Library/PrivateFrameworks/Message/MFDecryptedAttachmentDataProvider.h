//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class MFMailMessage, NSString;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    MFMailMessage *_message;	// 8 = 0x8
}

- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000000004851e
- (id)messageForAttachment:(id)arg1;	// IMP=0x0000000000048514
- (void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000048357
- (id)fetchLocalDataForAttachment:(id)arg1;	// IMP=0x0000000000048291
- (void)dealloc;	// IMP=0x0000000000048256
- (id)initWithDecryptedMessage:(id)arg1;	// IMP=0x0000000000048222

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
