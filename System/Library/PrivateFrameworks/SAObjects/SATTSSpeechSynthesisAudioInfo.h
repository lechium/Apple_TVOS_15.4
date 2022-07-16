//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SATTSSpeechSynthesisAudioInfo <SAAceSerializable>
{
}

+ (id)speechSynthesisAudioInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021ac3
+ (id)speechSynthesisAudioInfo;	// IMP=0x0000000000021ab1
@property(copy, nonatomic) NSArray *wordTimingInfoList;
- (id)encodedClassName;	// IMP=0x0000000000021aa4
- (id)groupIdentifier;	// IMP=0x0000000000021a90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

