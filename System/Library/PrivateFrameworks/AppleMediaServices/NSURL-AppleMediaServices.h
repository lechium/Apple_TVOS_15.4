//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSDictionary;

@interface NSURL (AppleMediaServices)
+ (id)ams_unescapedStringForString:(id)arg1;	// IMP=0x000000000025c543
+ (id)ams_engagementDirectory;	// IMP=0x000000000025bf02
+ (id)ams_cachesDirectory;	// IMP=0x000000000025ba98
+ (_Bool)_isAppendWithUnmodifiedParametersFeatureFlagEnabled;	// IMP=0x000000000025dcee
+ (id)ams_realHomeDirectory;	// IMP=0x000000000025cbba
+ (id)ams_dataVaultDirectory;	// IMP=0x000000000025c5c3
- (id)ams_URLByReplaceingQueryParameters:(id)arg1;	// IMP=0x000000000025c5af
@property(readonly, nonatomic) NSDictionary *ams_parameters;
@property(readonly, nonatomic) NSDictionary *ams_unmodifiedParameters;
- (id)_sortedQueryStringFromParameters:(id)arg1;	// IMP=0x000000000025da44
- (id)_ams_URLWithSortedParameters:(id)arg1;	// IMP=0x000000000025d7b1
- (id)ams_valueForQueryParameter:(id)arg1;	// IMP=0x000000000025d645
- (id)ams_URLByReplaceingQueryParameters:(id)arg1 withEncodedParameters:(_Bool)arg2;	// IMP=0x000000000025d493
- (id)ams_URLBySortingQueryParameters;	// IMP=0x000000000025d434
- (id)ams_URLByReplacingSchemeWithScheme:(id)arg1;	// IMP=0x000000000025d335
- (id)ams_URLByDeletingTrailingSlash;	// IMP=0x000000000025d27b
- (id)ams_URLByAppendingQueryParameters:(id)arg1;	// IMP=0x000000000025cf2b
- (id)ams_URLByAppendingQueryParameter:(id)arg1 name:(id)arg2;	// IMP=0x000000000025ce4a
- (id)ams_URLQueryAllowedCharacterSet;	// IMP=0x000000000025cd9e
- (id)ams_schemeSwizzledURL;	// IMP=0x000000000025cbfc
@end

