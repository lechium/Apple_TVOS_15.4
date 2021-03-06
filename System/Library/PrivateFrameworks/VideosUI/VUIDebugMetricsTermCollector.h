//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIDebugMetricsTermCollector-Protocol.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector>
{
}

@property(readonly, nonatomic) NSArray *filteredTerms;
- (id)pageRenderTerms;	// IMP=0x0000000000105cea
- (id)impressionsTerms;	// IMP=0x0000000000105cdd
- (id)accountTerms;	// IMP=0x0000000000105cd0
- (id)searchTerms;	// IMP=0x0000000000105cc3
- (id)exitTerms;	// IMP=0x0000000000105cb6
- (id)enterTerms;	// IMP=0x0000000000105ca9
- (id)clickTerms;	// IMP=0x0000000000105c9c
- (id)dialogTerms;	// IMP=0x0000000000105c8f
- (id)pageTerms;	// IMP=0x0000000000105c82
@property(readonly, nonatomic) NSDictionary *primaryTerms;
@property(readonly, nonatomic) NSArray *metricsKitTerms;
@property(readonly, nonatomic) NSArray *baseTerms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

