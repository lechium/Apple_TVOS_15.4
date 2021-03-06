//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMemoryEntity.h>

@class NSData, SSDownloadPolicy;

@interface DownloadPolicy : SSMemoryEntity
{
    SSDownloadPolicy *_cachedPolicy;	// 8 = 0x8
}

+ (id)defaultProperties;	// IMP=0x0020000000178247
+ (Class)databaseEntityClass;	// IMP=0x0010000000178236
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x002000000017826e
@property(copy, nonatomic) NSData *policyData;
@property(readonly, nonatomic) SSDownloadPolicy *downloadPolicy;
- (void)dealloc;	// IMP=0x0010000000177fbd

@end

