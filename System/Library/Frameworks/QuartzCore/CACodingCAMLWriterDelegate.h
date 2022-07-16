//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/CAMLWriterDelegate-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate>
{
    NSString *_resourceDir;	// 8 = 0x8
    int _serial;	// 16 = 0x10
    NSString *_imageFormat;	// 24 = 0x18
    NSDictionary *_imageEncodeOptions;	// 32 = 0x20
    _Bool _skipHiddenLayers;	// 40 = 0x28
}

@property _Bool skipHiddenLayers; // @synthesize skipHiddenLayers=_skipHiddenLayers;
@property(copy) NSDictionary *imageEncodeOptions; // @synthesize imageEncodeOptions=_imageEncodeOptions;
@property(copy) NSString *imageFormat; // @synthesize imageFormat=_imageFormat;
- (_Bool)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2;	// IMP=0x000000000001f516
- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;	// IMP=0x000000000001f1c6
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;	// IMP=0x000000000001f0da
- (id)initWithResourceDir:(id)arg1;	// IMP=0x000000000001f078
- (void)dealloc;	// IMP=0x000000000001f00b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
