//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVCKDataQuery;

@protocol TVCKCloudQueryHandler
+ (NSString *)mlPropertyForATVProperty:(NSString *)arg1;
+ (NSString *)mlPredicatePropertyForATVProperty:(NSString *)arg1;
+ (NSString *)mlQueryPropertyForATVProperty:(NSString *)arg1;
- (void)handleQuery:(TVCKDataQuery *)arg1 withContext:(void *)arg2;
@end

