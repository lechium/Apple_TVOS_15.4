//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>

@class NSString;

@interface HMClientContext : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_metricIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006d5ea
@property(retain, nonatomic) NSString *metricIdentifier; // @synthesize metricIdentifier=_metricIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d566
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d55b
- (id)initWithMetricIdentifier:(id)arg1;	// IMP=0x000000000006d4e8

@end

