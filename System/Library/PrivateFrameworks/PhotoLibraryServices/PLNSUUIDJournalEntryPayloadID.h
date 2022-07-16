//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLJournalEntryPayloadID-Protocol.h>

@class NSString, NSUUID;

@interface PLNSUUIDJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID>
{
    NSUUID *_payloadID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003a741b
- (id)payloadUUIDData;	// IMP=0x00000000003a73a0
- (id)payloadIDString;	// IMP=0x00000000003a738a
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a7369
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a72fe
@property(readonly) unsigned long long hash;
- (id)initWithUUIDString:(id)arg1;	// IMP=0x00000000003a7240
- (id)initWithUUIDBytes:(unsigned char [16])arg1;	// IMP=0x00000000003a71d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

