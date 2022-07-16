//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PPScoreInterpreterBytecode : NSObject
{
    struct unique_ptr<std::vector<PPSubscoreIdentifier>, std::default_delete<std::vector<PPSubscoreIdentifier>>> _subscoreComputeOrder;	// 8 = 0x8
    NSArray *_bytecodeDataBySubscoreTypeAndIndex;	// 16 = 0x10
    NSArray *_bytecodeRetainedObjectSlots;	// 24 = 0x18
    struct unique_ptr<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> _subscoreDependencies;	// 32 = 0x20
    const struct __CFBitVector *_scalarScoreInputsNeeded;	// 40 = 0x28
    const struct __CFBitVector *_arrayScoreInputsNeeded;	// 48 = 0x30
    const struct __CFBitVector *_objectScoreInputsNeeded;	// 56 = 0x38
}

+ (id)bytecodeFromFactorName:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000002696f
+ (id)bytecodeFromAsset:(id)arg1;	// IMP=0x0000000000026896
+ (id)scoreInterpreterParseRootFromAsset:(id)arg1 scalarSubscoreCount:(unsigned long long *)arg2 arraySubscoreCount:(unsigned long long *)arg3 objectSubscoreCount:(unsigned long long *)arg4;	// IMP=0x000000000002673b
- (id).cxx_construct;	// IMP=0x000000000002465b
- (void).cxx_destruct;	// IMP=0x0000000000024612
@property(readonly, nonatomic) const struct __CFBitVector *objectScoreInputsNeeded; // @synthesize objectScoreInputsNeeded=_objectScoreInputsNeeded;
@property(readonly, nonatomic) const struct __CFBitVector *arrayScoreInputsNeeded; // @synthesize arrayScoreInputsNeeded=_arrayScoreInputsNeeded;
@property(readonly, nonatomic) const struct __CFBitVector *scalarScoreInputsNeeded; // @synthesize scalarScoreInputsNeeded=_scalarScoreInputsNeeded;
- (void)dealloc;	// IMP=0x0000000000024573
- (id)initWithParseRoot:(id)arg1 scalarSubscoreCount:(unsigned long long)arg2 arraySubscoreCount:(unsigned long long)arg3 objectSubscoreCount:(unsigned long long)arg4;	// IMP=0x0000000000023af9
- (id)init;	// IMP=0x0000000000023af3

@end
