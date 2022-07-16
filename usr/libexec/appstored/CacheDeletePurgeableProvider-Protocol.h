//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@protocol CacheDeletePurgeableProvider <NSObject>
- (long long)purgeForVolume:(NSString *)arg1 urgency:(long long)arg2 desiredPurge:(NSNumber *)arg3 client:(NSString *)arg4;
- (long long)purgeableForVolume:(NSString *)arg1 urgency:(long long)arg2 client:(NSString *)arg3;
- (NSDictionary *)allPurgeablesForVolume:(NSString *)arg1 client:(NSString *)arg2;

@optional
- (void)cacheInvalidated;
- (long long)purgeableForVolume:(NSString *)arg1 urgency:(long long)arg2 override:(_Bool)arg3 client:(NSString *)arg4;
- (void)cancelPurge;
@end

