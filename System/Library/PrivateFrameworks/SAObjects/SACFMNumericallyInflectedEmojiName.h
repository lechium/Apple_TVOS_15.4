//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SACFMNumericallyInflectedEmojiName <SAAceSerializable>
{
}

+ (id)numericallyInflectedEmojiNameWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000028d7e
+ (id)numericallyInflectedEmojiName;	// IMP=0x0000000000028d6c
@property(copy, nonatomic) NSString *withoutEmoji;
@property(copy, nonatomic) NSString *withEmoji;
- (id)encodedClassName;	// IMP=0x0000000000028d5f
- (id)groupIdentifier;	// IMP=0x0000000000028d4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
