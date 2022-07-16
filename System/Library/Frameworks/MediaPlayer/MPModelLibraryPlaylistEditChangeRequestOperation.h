//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelLibraryPlaylistEditChangeRequest;

__attribute__((visibility("hidden")))
@interface MPModelLibraryPlaylistEditChangeRequestOperation
{
    MPModelLibraryPlaylistEditChangeRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _localPersistenceResponseHandler;	// 16 = 0x10
    CDUnknownBlockType _completeResponseHandler;	// 24 = 0x18
}

+ (id)requiredPlaylistEntryProperties;	// IMP=0x0000000000192665
- (void).cxx_destruct;	// IMP=0x000000000019433f
@property(copy, nonatomic) CDUnknownBlockType completeResponseHandler; // @synthesize completeResponseHandler=_completeResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType localPersistenceResponseHandler; // @synthesize localPersistenceResponseHandler=_localPersistenceResponseHandler;
@property(copy, nonatomic) MPModelLibraryPlaylistEditChangeRequest *request; // @synthesize request=_request;
- (_Bool)_isCloudLibraryEnabled;	// IMP=0x000000000019423c
- (void)execute;	// IMP=0x0000000000192768

@end

