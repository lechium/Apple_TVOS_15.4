//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CATRemoteConnectionSocketOptions : NSObject
{
    NSNumber *_adaptiveWriteTimeout;	// 8 = 0x8
    NSNumber *_keepAliveEnabled;	// 16 = 0x10
    NSNumber *_keepAliveDelay;	// 24 = 0x18
    NSNumber *_keepAliveInterval;	// 32 = 0x20
    NSNumber *_keepAliveCount;	// 40 = 0x28
    NSNumber *_netServiceType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001c71a
@property(copy, nonatomic) NSNumber *netServiceType; // @synthesize netServiceType=_netServiceType;
@property(copy, nonatomic) NSNumber *keepAliveCount; // @synthesize keepAliveCount=_keepAliveCount;
@property(copy, nonatomic) NSNumber *keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property(copy, nonatomic) NSNumber *keepAliveDelay; // @synthesize keepAliveDelay=_keepAliveDelay;
@property(copy, nonatomic) NSNumber *keepAliveEnabled; // @synthesize keepAliveEnabled=_keepAliveEnabled;
@property(copy, nonatomic) NSNumber *adaptiveWriteTimeout; // @synthesize adaptiveWriteTimeout=_adaptiveWriteTimeout;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c527

@end

