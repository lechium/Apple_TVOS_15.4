//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFInvertedIndex, NSBundle, NSLock;

@interface EMFIndexManager : NSObject
{
    NSBundle *_searchEngineBundle;	// 8 = 0x8
    NSLock *_defaultIndexLock;	// 16 = 0x10
    NSLock *_stemmedIndexLock;	// 24 = 0x18
    _Bool _triedLoadingDefaultIndex;	// 32 = 0x20
    _Bool _triedLoadingStemmedIndex;	// 33 = 0x21
    EMFInvertedIndex *_defaultIndex;	// 40 = 0x28
    EMFInvertedIndex *_stemmedIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002411d
@property(copy, nonatomic) EMFInvertedIndex *stemmedIndex; // @synthesize stemmedIndex=_stemmedIndex;
@property(copy, nonatomic) EMFInvertedIndex *defaultIndex; // @synthesize defaultIndex=_defaultIndex;
- (void)preheatIndexes;	// IMP=0x00000000000240c2
- (id)initWithBundle:(id)arg1;	// IMP=0x0000000000023f17

@end

