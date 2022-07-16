//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SATTSSpeechSynthesisVoice <SAAceSerializable>
{
}

+ (id)speechSynthesisVoiceWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000163f4
+ (id)speechSynthesisVoice;	// IMP=0x00000000000163e2
@property(nonatomic) _Bool useServer;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *quality;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *keyString;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSString *contentVersion;
- (id)encodedClassName;	// IMP=0x00000000000163d5
- (id)groupIdentifier;	// IMP=0x00000000000163c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

