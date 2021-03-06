//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLEngineCloudCache, CPLEngineStore;
@protocol CPLEngineIDMapping;

@interface CPLClientCacheBaseView
{
    CPLEngineStore *_store;	// 8 = 0x8
    CPLEngineCloudCache *_cloudCache;	// 16 = 0x10
    id <CPLEngineIDMapping> _idMapping;	// 24 = 0x18
}

+ (id)clientCacheBaseViewIDMappingForStore:(id)arg1;	// IMP=0x00000000001191da
- (void).cxx_destruct;	// IMP=0x0000000000118d0f
@property(readonly, nonatomic) id <CPLEngineIDMapping> idMapping; // @synthesize idMapping=_idMapping;
@property(readonly, nonatomic) CPLEngineCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
- (id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x0000000000118a7e
- (id)recordViewWithScopedIdentifier:(id)arg1;	// IMP=0x00000000001189a9
- (id)description;	// IMP=0x000000000011899c
- (id)initWithStore:(id)arg1;	// IMP=0x00000000001188c3
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00000000000ad0d7
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000ad00f
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000acf06

@end

