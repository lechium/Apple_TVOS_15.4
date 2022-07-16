//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Espresso/ETDataProvider-Protocol.h>

@class ETImagePreprocessor, NSArray, NSString;

@interface ETImageFolderDataProvider : NSObject <ETDataProvider>
{
    struct vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>> samples;	// 8 = 0x8
    struct vector<NSString *, std::allocator<NSString *>> classes;	// 32 = 0x20
    struct shared_ptr<Espresso::blob_cpu> labelBlob;	// 56 = 0x38
    NSString *imageTensorName;	// 72 = 0x48
    NSString *labelTensorName;	// 80 = 0x50
    NSArray *labelShape;	// 88 = 0x58
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> randomgen;	// 96 = 0x60
    ETImagePreprocessor *imageProcessor;	// 104 = 0x68
    _Bool shuffleBeforeEpoch;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0000000000256cf7
- (void).cxx_destruct;	// IMP=0x0000000000256c2d
- (void)prepareForEpoch;	// IMP=0x0000000000256b6d
- (unsigned long long)numberOfDataPoints;	// IMP=0x0000000000256b5b
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000002569cf
- (id)initWithFolder:(id)arg1 forImageTensor:(id)arg2 andLabelTensor:(id)arg3 shuffleBeforeEachEpoch:(_Bool)arg4 shuffleRandomSeed:(id)arg5 withImagePreprocessParams:(id)arg6;	// IMP=0x0000000000255b1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
