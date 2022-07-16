//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/MFDAOfflineCacheOperation-Protocol.h>

@class NSString;

@interface MFDADeferredStoreDraftOperation <MFDAOfflineCacheOperation>
{
    NSString *_messageIDHeader;	// 16 = 0x10
    NSString *_folderID;	// 24 = 0x18
}

- (id)description;	// IMP=0x000000000000bd1f
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;	// IMP=0x000000000000baab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ba33
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b974
- (void)dealloc;	// IMP=0x000000000000b91c
- (id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2;	// IMP=0x000000000000b8a5

@end

