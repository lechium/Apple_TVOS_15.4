//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexSet, NSString, PXGColorLookupCube;

@protocol PXStoryColorGradingRepository
@property(readonly, nonatomic) unsigned long long minimumCategoryKindFallbacks;
- (NSString *)localizedTitleForColorGradeKind:(long long)arg1;
- (PXGColorLookupCube *)colorLookupCubeForColorGradeKind:(long long)arg1;
- (NSArray *)supportedUserPickableColorGradeKinds;
- (NSArray *)supportedColorGradeKinds;
- (long long)colorGradeKindForColorGradeCategory:(NSString *)arg1 excludingKinds:(NSIndexSet *)arg2;
- (long long)colorGradeKindForColorGradeCategory:(NSString *)arg1;
@end

