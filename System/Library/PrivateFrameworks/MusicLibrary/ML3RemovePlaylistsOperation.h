//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ML3RemovePlaylistsOperation
{
}

- (_Bool)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)arg1;	// IMP=0x00000000001044c6
- (_Bool)_removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3;	// IMP=0x000000000010411f
- (_Bool)_removeSource:(int)arg1 usingTransaction:(id)arg2;	// IMP=0x0000000000103dc5
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;	// IMP=0x0000000000103ce6
- (_Bool)_execute:(id *)arg1;	// IMP=0x0000000000103a58
- (unsigned long long)type;	// IMP=0x0000000000103a4d

@end

