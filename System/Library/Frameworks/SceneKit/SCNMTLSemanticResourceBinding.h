//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNMTLSemanticResourceBinding
{
    struct {
        CDUnknownBlockType _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_semantics;	// 48 = 0x30
    long long semanticsCount;	// 56 = 0x38
    long long bufferSize;	// 64 = 0x40
}

@property(nonatomic) long long bufferSize; // @synthesize bufferSize;
@property(nonatomic) long long semanticsCount; // @synthesize semanticsCount;
- (void)dealloc;	// IMP=0x0000000000113b2c

@end

