//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryColorGradingRepository-Protocol.h>

@class NSCache, PXStoryColorGradingConfiguration;
@protocol OS_os_log;

@interface PXStoryConcreteColorGradingRepository : NSObject <PXStoryColorGradingRepository>
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSCache *_colorLookupCubeCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007b1ea1
@property(readonly, nonatomic) NSCache *colorLookupCubeCache; // @synthesize colorLookupCubeCache=_colorLookupCubeCache;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(readonly, nonatomic) unsigned long long minimumCategoryKindFallbacks;
- (id)colorLookupCubeForColorGradeKind:(long long)arg1;	// IMP=0x00000000007b1d4b
- (id)supportedUserPickableColorGradeKinds;	// IMP=0x00000000007b1bf2
- (id)supportedColorGradeKinds;	// IMP=0x00000000007b1ac0
- (id)localizedTitleForColorGradeKind:(long long)arg1;	// IMP=0x00000000007b19cb
- (long long)colorGradeKindForColorGradeCategory:(id)arg1 excludingKinds:(id)arg2;	// IMP=0x00000000007b15a1
- (long long)colorGradeKindForColorGradeCategory:(id)arg1;	// IMP=0x00000000007b158d
- (void)_writeTemporaryFileWithCompressedColorCube:(id)arg1 forResourceName:(id)arg2;	// IMP=0x00000000007b1109
- (id)_loadCustomColorLookupCubeForResourceName:(id)arg1;	// IMP=0x00000000007b0b6d
- (id)_createCustomColorLookupCubeForResourceName:(id)arg1;	// IMP=0x00000000007b085b
- (id)_createColorLookupCubeForColorGradeKind:(long long)arg1;	// IMP=0x00000000007b0402
- (id)_cachedColorLookupCubeForColorGradeKind:(long long)arg1;	// IMP=0x00000000007b02e9
- (id)_cubeResourceNameForColorGradeKind:(long long)arg1;	// IMP=0x00000000007b0269
- (void)_enumerateSupporedColorGradeCategoriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000007b013a
- (void)startPreloadingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000007afee4
@property(readonly, nonatomic) PXStoryColorGradingConfiguration *configuration;
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000007afdfc
- (id)init;	// IMP=0x00000000007afde8

@end

