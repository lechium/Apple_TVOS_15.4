//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIDebugLogReport : NSObject
{
    unsigned long long _currentIndentLevel;	// 8 = 0x8
    CDUnknownBlockType _fallbackMessagePrefixHandler;	// 16 = 0x10
    NSMutableArray *_statements;	// 24 = 0x18
    NSMutableArray *_prefixStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005c8912
@property(retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack; // @synthesize prefixStack=_prefixStack;
@property(retain, nonatomic, getter=_statements) NSMutableArray *statements; // @synthesize statements=_statements;
@property(copy, nonatomic) CDUnknownBlockType fallbackMessagePrefixHandler; // @synthesize fallbackMessagePrefixHandler=_fallbackMessagePrefixHandler;
@property(nonatomic) unsigned long long currentIndentLevel; // @synthesize currentIndentLevel=_currentIndentLevel;
- (void)decrementIndentLevelAndPopMessagePrefix;	// IMP=0x00000000005c888b
- (void)incrementIndentLevelAndPushMessagePrefix:(id)arg1;	// IMP=0x00000000005c8839
- (id)_messagePrefixAtIndentLevel:(unsigned long long)arg1;	// IMP=0x00000000005c86bc
- (void)clearAllMessagePrefixes;	// IMP=0x00000000005c867f
- (void)popMessagePrefix;	// IMP=0x00000000005c8642
- (void)pushMessagePrefixHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005c8553
- (void)pushMessagePrefix:(id)arg1;	// IMP=0x00000000005c8475
- (void)resetIndentLevel;	// IMP=0x00000000005c8408
- (void)decrementIndentLevel;	// IMP=0x00000000005c83d6
- (void)incrementIndentLevel;	// IMP=0x00000000005c83a4
- (void)addLineBreak;	// IMP=0x00000000005c8329
- (void)addMessage:(id)arg1;	// IMP=0x00000000005c81b5
- (void)addMessageWithFormat:(id)arg1;	// IMP=0x00000000005c8032
@property(readonly, nonatomic) unsigned long long messageCount;
- (id)init;	// IMP=0x00000000005c7f79

@end
