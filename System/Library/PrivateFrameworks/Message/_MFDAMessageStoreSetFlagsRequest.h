//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccess/DAMailboxSetFlagsRequest.h>

#import <Message/MFDAMailAccountRequest-Protocol.h>

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest>
{
}

- (id)deferredOperation;	// IMP=0x0000000000081497
@property(readonly, nonatomic) _Bool isUserRequested;
@property(readonly, nonatomic) _Bool shouldSend;
- (unsigned long long)generationNumber;	// IMP=0x000000000008147f

@end
