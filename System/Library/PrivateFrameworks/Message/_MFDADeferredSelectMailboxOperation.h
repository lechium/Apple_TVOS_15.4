//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/MFDAOfflineCacheOperation-Protocol.h>

@class NSString;

@interface _MFDADeferredSelectMailboxOperation <MFDAOfflineCacheOperation>
{
    NSString *_folderID;	// 16 = 0x10
}

- (id)description;	// IMP=0x00000000000ad505
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;	// IMP=0x00000000000ad433
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ad3e7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ad360
- (id)initWithMailbox:(id)arg1;	// IMP=0x00000000000ad302

@end

