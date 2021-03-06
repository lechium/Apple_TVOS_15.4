//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class REFeature;

@interface REFeatureValuePair : NSObject <NSCopying>
{
    REFeature *_feature;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009a9eb
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009a98a
- (id)description;	// IMP=0x000000000009a902
- (unsigned long long)hash;	// IMP=0x000000000009a8d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009a7c1
- (void)dealloc;	// IMP=0x000000000009a787
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000009a709

@end

