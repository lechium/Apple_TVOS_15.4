//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface VNCluster : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldUpdateRepresentative;	// 8 = 0x8
    NSArray *_objects;	// 16 = 0x10
    unsigned long long _clusterId;	// 24 = 0x18
    unsigned long long _totalObjectCount;	// 32 = 0x20
    NSArray *_suggestedIdsForRepresentative;	// 40 = 0x28
    NSDictionary *_representativenessById;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000143e3f
- (void).cxx_destruct;	// IMP=0x0000000000143e0c
@property(retain, nonatomic) NSDictionary *representativenessById; // @synthesize representativenessById=_representativenessById;
@property(retain, nonatomic) NSArray *suggestedIdsForRepresentative; // @synthesize suggestedIdsForRepresentative=_suggestedIdsForRepresentative;
@property(nonatomic) _Bool shouldUpdateRepresentative; // @synthesize shouldUpdateRepresentative=_shouldUpdateRepresentative;
@property(nonatomic) unsigned long long totalObjectCount; // @synthesize totalObjectCount=_totalObjectCount;
@property(nonatomic) unsigned long long clusterId; // @synthesize clusterId=_clusterId;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000143b3c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000143a4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000143865
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014359e
- (unsigned long long)hash;	// IMP=0x0000000000143445
- (id)description;	// IMP=0x0000000000143210

@end
