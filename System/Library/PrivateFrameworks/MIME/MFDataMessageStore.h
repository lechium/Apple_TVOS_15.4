//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MFDataMessageStore
{
    NSData *_data;	// 8 = 0x8
    Class _messageClass;	// 16 = 0x10
    NSString *_storagePath;	// 24 = 0x18
}

- (_Bool)messageCanBeTriaged:(id)arg1;	// IMP=0x00000000000027c1
- (id)mailboxUid;	// IMP=0x00000000000027b9
- (void)deleteBodyDataForMessage:(id)arg1;	// IMP=0x000000000000278a
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;	// IMP=0x0000000000002781
- (void)_deleteCachedBodyForMessage:(id)arg1;	// IMP=0x000000000000277b
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x0000000000002761
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x0000000000002758
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x000000000000274f
- (id)bodyDataForMessage:(id)arg1 isComplete:(_Bool *)arg2 isPartial:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;	// IMP=0x0000000000002619
- (_Bool)bodyFetchRequiresNetworkActivity;	// IMP=0x0000000000002611
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;	// IMP=0x00000000000024f0
- (id)account;	// IMP=0x00000000000024e8
- (id)message;	// IMP=0x0000000000002462
- (void)setMessageClass:(Class)arg1;	// IMP=0x0000000000002451
- (void)writeUpdatedMessageDataToDisk;	// IMP=0x000000000000244b
- (void)setStoragePath:(id)arg1;	// IMP=0x0000000000002406
- (id)storagePath;	// IMP=0x00000000000023e8
- (id)storePath;	// IMP=0x00000000000023de
- (void)dealloc;	// IMP=0x000000000000238c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000002335

@end

