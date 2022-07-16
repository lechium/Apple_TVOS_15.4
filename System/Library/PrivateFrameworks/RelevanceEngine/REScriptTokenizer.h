//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RETokenBuffer-Protocol.h>

@class NSString, REScriptToken;
@protocol REScriptBuffer, REScriptTokenizerDelegate;

@interface REScriptTokenizer : NSObject <RETokenBuffer>
{
    id <REScriptBuffer> _buffer;	// 8 = 0x8
    REScriptToken *_currentToken;	// 16 = 0x10
    unsigned long long _line;	// 24 = 0x18
    unsigned long long _column;	// 32 = 0x20
    id <REScriptTokenizerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b7917
@property(nonatomic) __weak id <REScriptTokenizerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_matchTokenStart:(CDUnknownFunctionPointerType)arg1 body:(CDUnknownFunctionPointerType)arg2 value:(id *)arg3;	// IMP=0x00000000000b7780
- (void)_popChar;	// IMP=0x00000000000b76f2
- (unsigned short)_peekChar;	// IMP=0x00000000000b76dc
- (_Bool)_hasChar;	// IMP=0x00000000000b76c3
- (void)_consumeWhitespace;	// IMP=0x00000000000b763e
- (void)_validateToken;	// IMP=0x00000000000b72c7
- (id)_readString;	// IMP=0x00000000000b71b0
- (id)_readMultilineComment;	// IMP=0x00000000000b70a1
- (id)_readSingleComment;	// IMP=0x00000000000b6fc1
- (void)next;	// IMP=0x00000000000b665d
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) REScriptToken *currentToken;
- (id)initWithScriptBuffer:(id)arg1;	// IMP=0x00000000000b6575

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
