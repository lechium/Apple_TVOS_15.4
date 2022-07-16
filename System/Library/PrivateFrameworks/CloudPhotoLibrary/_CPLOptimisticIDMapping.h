//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLEngineIDMapping-Protocol.h>

@class NSString;
@protocol CPLEngineIDMapping;

@interface _CPLOptimisticIDMapping : NSObject <CPLEngineIDMapping>
{
    id <CPLEngineIDMapping> _idMapping;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001188b3
@property(readonly, nonatomic) id <CPLEngineIDMapping> idMapping; // @synthesize idMapping=_idMapping;
- (id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000118893
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1;	// IMP=0x0000000000118831
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x00000000001187c0
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)arg1;	// IMP=0x00000000001187aa
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x0000000000118713
- (_Bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000001186fd
- (id)initWithIDMapping:(id)arg1;	// IMP=0x0000000000118692

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

