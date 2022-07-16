//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaCloudAddItemToPlaylistOperation
{
    long long _playlistPersistentID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000c9a2e
- (void)logCloudAddRequestDescription;	// IMP=0x00200000000c997f
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00100000000c95a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000c9525
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000c94ab
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3 referralPlaylistGlobalID:(id)arg4 clientIdentity:(id)arg5;	// IMP=0x00100000000c942e
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3 referralAlbumAdamID:(long long)arg4 clientIdentity:(id)arg5;	// IMP=0x00100000000c93fd
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000c93b6
- (id)initWithAdamID:(long long)arg1 playlistPersistentID:(long long)arg2 clientIdentity:(id)arg3;	// IMP=0x00100000000c933b

@end

