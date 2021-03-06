//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ASDPurgeAppsResponse <NSCopying, NSSecureCoding>
{
    long long _purgedSize;	// 8 = 0x8
    NSArray *_purgedApps;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000036f45
- (void).cxx_destruct;	// IMP=0x0000000000037151
@property(readonly, nonatomic) NSArray *purgedApps; // @synthesize purgedApps=_purgedApps;
@property(readonly, nonatomic) long long purgedSize; // @synthesize purgedSize=_purgedSize;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003706e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036f4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000036eae
- (id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2;	// IMP=0x0000000000036e2e
- (id)init;	// IMP=0x0000000000036e13

@end

