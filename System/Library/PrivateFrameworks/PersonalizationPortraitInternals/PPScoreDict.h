//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/MLFeatureProvider-Protocol.h>

@class NSMutableArray, NSSet, PPBaseScoreInputSet;

@interface PPScoreDict : NSObject <MLFeatureProvider>
{
    PPBaseScoreInputSet *_scoreInputSet;	// 8 = 0x8
    struct unique_ptr<std::vector<float>, std::default_delete<std::vector<float>>> _scalarValueStorage;	// 16 = 0x10
    struct unique_ptr<std::vector<std::shared_ptr<std::vector<float>>>, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> _arrayValueStorage;	// 24 = 0x18
    NSMutableArray *_objectStorage;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000009766f
- (void).cxx_destruct;	// IMP=0x0000000000097626
- (id)description;	// IMP=0x000000000009731f
- (id)objectDictionary;	// IMP=0x00000000000971c3
- (id)arrayValueDictionary;	// IMP=0x0000000000097067
- (id)scalarValueDictionary;	// IMP=0x0000000000096ee9
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000009614b
@property(readonly, nonatomic) NSSet *featureNames;
- (unsigned long long)objectCount;	// IMP=0x0000000000095f63
- (unsigned long long)arrayValueCount;	// IMP=0x0000000000095f45
- (unsigned long long)scalarValueCount;	// IMP=0x0000000000095f27
- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x0000000000095e85
- (id)objectForIndex:(unsigned long long)arg1;	// IMP=0x0000000000095df3
- (void)setArraySharedPtr:(shared_ptr_60ebf058)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x0000000000095d79
- (void)setArrayStorage:(void *)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x0000000000095c76
- (void)setArrayValue:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x00000000000958cc
- (shared_ptr_60ebf058)arraySharedPtrForIndex:(unsigned long long)arg1;	// IMP=0x0000000000095886
- (id)arrayValueForIndex:(unsigned long long)arg1;	// IMP=0x00000000000956f5
- (void)setScalarValue:(float)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x00000000000956ce
- (float)scalarValueForIndex:(unsigned long long)arg1;	// IMP=0x00000000000956a7
- (id)initWithScoreInputSet:(id)arg1;	// IMP=0x00000000000955b4
- (id)initWithScalarValueCount:(unsigned long long)arg1 arrayValueCount:(unsigned long long)arg2 objectCount:(unsigned long long)arg3;	// IMP=0x000000000009559e
- (id)init;	// IMP=0x0000000000095598

@end

