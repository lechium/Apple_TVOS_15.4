//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSOutputStream, TRIPBCodedOutputStream;

@interface TRIClientFactorPackStreamingWriter : NSObject
{
    NSOutputStream *_underlying;	// 8 = 0x8
    TRIPBCodedOutputStream *_stream;	// 16 = 0x10
    NSError *_firstError;	// 24 = 0x18
    _Bool _hasFactorPackId;	// 32 = 0x20
    _Bool _hasSelectedNamespace;	// 33 = 0x21
}

+ (_Bool)copySourceFactorPack:(id)arg1 toDestPath:(id)arg2 error:(id *)arg3 modifyFactorLevel:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ba05
- (void).cxx_destruct;	// IMP=0x000000000000bd1f
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000000b805
- (void)appendFactorLevel:(id)arg1;	// IMP=0x000000000000b6c3
- (void)writeSelectedNamespace:(id)arg1;	// IMP=0x000000000000b582
- (void)writeFactorPackId:(id)arg1;	// IMP=0x000000000000b441
- (_Bool)_streamExecWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b1d2
- (unsigned int)_fieldNumberForFieldName:(id)arg1;	// IMP=0x000000000000af27
- (id)initWithPath:(id)arg1;	// IMP=0x000000000000ae6b
- (id)init;	// IMP=0x000000000000ae65

@end

