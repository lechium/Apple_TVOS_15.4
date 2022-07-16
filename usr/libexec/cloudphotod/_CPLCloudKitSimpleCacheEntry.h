//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _CPLCloudKitSimpleCacheEntry : NSObject
{
    id _key;	// 8 = 0x8
    id _object;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e50c5
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
- (long long)compare:(id)arg1;	// IMP=0x00100000000e508d
- (_Bool)isExpiredForNow:(id)arg1 withLeeway:(double)arg2;	// IMP=0x00100000000e505d
- (id)initWithKey:(id)arg1 object:(id)arg2 expirationDate:(id)arg3;	// IMP=0x00100000000e4f93

@end

