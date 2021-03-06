//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, PKDirectoryCoordinator, PKRemoteAssetManager;

@interface PKFileDataAccessor
{
    PKDirectoryCoordinator *_coordinator;	// 8 = 0x8
    _Bool _remoteAssetManagerAccessed;	// 16 = 0x10
    PKRemoteAssetManager *_remoteAssetManager;	// 24 = 0x18
    NSArray *_seids;	// 32 = 0x20
    _Bool _ownsFileURL;	// 40 = 0x28
    NSString *_explicitDataTypeIdentifier;	// 48 = 0x30
    NSURL *_fileURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004e052
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *explicitDataTypeIdentifier; // @synthesize explicitDataTypeIdentifier=_explicitDataTypeIdentifier;
@property(nonatomic) _Bool ownsFileURL; // @synthesize ownsFileURL=_ownsFileURL;
- (id)passLocalizedStringForKey:(id)arg1;	// IMP=0x000000000004df6b
- (id)displayProfileOfType:(long long)arg1;	// IMP=0x000000000004dea0
- (id)remoteAssetManager;	// IMP=0x000000000004dd32
- (id)remoteAssetManagerForSEIDs:(id)arg1;	// IMP=0x000000000004dcbd
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 seids:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000004dbd0
- (_Bool)remoteAssetsDownloadedForScreenScale:(double)arg1 seids:(id)arg2 suffix:(id)arg3;	// IMP=0x000000000004da08
- (_Bool)remoteAssetsDownloadedForSEIDs:(id)arg1;	// IMP=0x000000000004d9c4
- (id)bundle;	// IMP=0x000000000004d88f
- (id)serializedFileWrapper;	// IMP=0x000000000004d5eb
- (id)archiveData;	// IMP=0x000000000004d4c5
- (id)manifestHash;	// IMP=0x000000000004d39f
- (id)dataForBundleResources:(id)arg1;	// IMP=0x000000000004cfb8
- (id)dataForBundleResource:(id)arg1;	// IMP=0x000000000004cf12
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;	// IMP=0x000000000004cd05
- (id)resourceValueForKey:(id)arg1;	// IMP=0x000000000004cb0f
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x000000000004ca6a
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5;	// IMP=0x000000000004c7d4
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c76e
- (id)content;	// IMP=0x000000000004c622
- (void)dictionaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c5bc
- (id)dictionary;	// IMP=0x000000000004c45d
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c3a1
- (void)dealloc;	// IMP=0x000000000004c24d
- (id)initWithFileURL:(id)arg1 error:(id *)arg2 coordinator:(id)arg3;	// IMP=0x000000000004c138
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c123
- (id)init;	// IMP=0x000000000004c115

@end

