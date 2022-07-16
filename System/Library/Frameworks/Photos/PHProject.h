//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString;

@interface PHProject
{
    NSData *_projectExtensionData;	// 112 = 0x70
    NSDate *_creationDate;	// 120 = 0x78
    NSString *_projectExtensionIdentifier;	// 128 = 0x80
    NSString *_projectDocumentType;	// 136 = 0x88
    NSString *_projectRenderUuid;	// 144 = 0x90
}

+ (id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x000000000000d117
+ (id)fetchProjectsWithOptions:(id)arg1;	// IMP=0x000000000000d0f7
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000000d02e
+ (id)entityKeyMap;	// IMP=0x000000000000cfd8
+ (id)identifierCode;	// IMP=0x000000000000cfcb
+ (id)fetchType;	// IMP=0x000000000000cfac
+ (id)localIdentifierWithUUID:(id)arg1;	// IMP=0x000000000000cf16
+ (id)managedEntityName;	// IMP=0x000000000000cefd
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x000000000000cecd
- (void).cxx_destruct;	// IMP=0x000000000000ce69
@property(readonly, nonatomic) NSString *projectRenderUuid; // @synthesize projectRenderUuid=_projectRenderUuid;
@property(readonly, nonatomic) NSString *projectDocumentType; // @synthesize projectDocumentType=_projectDocumentType;
@property(readonly, nonatomic) NSString *projectExtensionIdentifier; // @synthesize projectExtensionIdentifier=_projectExtensionIdentifier;
- (id)creationDate;	// IMP=0x000000000000ce25
@property(readonly, nonatomic) NSData *projectData;
@property(readonly, nonatomic) NSData *projectExtensionData; // @synthesize projectExtensionData=_projectExtensionData;
@property(readonly, nonatomic) _Bool hasProjectPreview;
- (_Bool)shouldQueryForCustomKeyAsset;	// IMP=0x000000000000cc5a
- (_Bool)canContainCustomKeyAssets;	// IMP=0x000000000000cc52
- (_Bool)canPerformEditOperation:(long long)arg1;	// IMP=0x000000000000cc45
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x000000000000cadb

@end

