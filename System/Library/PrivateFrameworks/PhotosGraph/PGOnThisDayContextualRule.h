//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGContextualRule-Protocol.h>

@class NSString;

@interface PGOnThisDayContextualRule : NSObject <PGContextualRule>
{
}

- (id)_contextualKeyAssetForDayHighlightItem:(id)arg1 contextualLocalDate:(id)arg2;	// IMP=0x0000000000169caf
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 curationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000001693e4
- (_Bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;	// IMP=0x00000000001693dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

