//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INExecutionCounterpartMapper, INExecutionFrameworkMapper, NSDictionary;

@interface INExecutionInfoResolver : NSObject
{
    INExecutionCounterpartMapper *_counterpartMapper;	// 8 = 0x8
    INExecutionFrameworkMapper *_frameworkMapper;	// 16 = 0x10
    NSDictionary *__counterpartMapping;	// 24 = 0x18
}

+ (id)defaultResolver;	// IMP=0x0000000000121ddd
+ (void)initialize;	// IMP=0x0000000000121d99
- (void).cxx_destruct;	// IMP=0x00000000001217d8
@property(readonly, copy, nonatomic) NSDictionary *_counterpartMapping; // @synthesize _counterpartMapping=__counterpartMapping;
@property(readonly, nonatomic) INExecutionFrameworkMapper *_frameworkMapper; // @synthesize _frameworkMapper;
@property(readonly, nonatomic) INExecutionCounterpartMapper *_counterpartMapper; // @synthesize _counterpartMapper;
- (id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)arg1;	// IMP=0x00000000001213fa
- (id)_resolveUserActivityExecutionInfoByLinkingFileProvidersToFilesApp:(id)arg1;	// IMP=0x000000000012124c
- (id)_resolveUserActivityExecutionInfoBySwappingIdentifiers:(id)arg1;	// IMP=0x0000000000121110
- (id)_resolveIntentExecutionInfoUsingCounterparts:(id)arg1;	// IMP=0x0000000000120bb7
- (id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)arg1;	// IMP=0x00000000001209eb
- (id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)arg1;	// IMP=0x000000000012084f
- (id)_resolveExecutionInfoByLinkingExtensionToApp:(id)arg1;	// IMP=0x00000000001206d4
- (id)_resolveExecutionInfoBySwappingIdentifiers:(id)arg1;	// IMP=0x0000000000120455
- (id)_resolveExecutionInfo:(id)arg1;	// IMP=0x0000000000120395
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1;	// IMP=0x0000000000120383
- (id)counterpartIdentifiersForLocalIdentifier:(id)arg1;	// IMP=0x0000000000120300
- (id)localIdentifiersForCounterpartIdentifier:(id)arg1;	// IMP=0x000000000012027d
- (id)resolveUserActivityExecutionInfo:(id)arg1;	// IMP=0x000000000012017d
- (id)resolveIntentExecutionInfo:(id)arg1;	// IMP=0x000000000012007d

@end

