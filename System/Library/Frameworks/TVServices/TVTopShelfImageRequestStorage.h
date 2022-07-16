//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/NSCopying-Protocol.h>
#import <TVServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface TVTopShelfImageRequestStorage : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_requests;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004c52f
- (void).cxx_destruct;	// IMP=0x000000000004c7a5
@property(readonly, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c762
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004c712
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000004c67f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004c5ff
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004c537
- (void)enumerateImageRequestsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c43d
- (id)imageRequestWithTraits:(unsigned long long)arg1;	// IMP=0x000000000004c3d6
- (void)setImageRequest:(id)arg1 forTraits:(unsigned long long)arg2;	// IMP=0x000000000004c346
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000004c31c
- (unsigned long long)hash;	// IMP=0x000000000004c306
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004c1ed
- (id)init;	// IMP=0x000000000004c1d9
- (id)_initWithRequests:(id)arg1;	// IMP=0x000000000004c11c

@end
