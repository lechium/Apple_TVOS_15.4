//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SATTSSpeechSynthesisResource <SAAceSerializable>
{
}

+ (id)speechSynthesisResourceWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000372dc
+ (id)speechSynthesisResource;	// IMP=0x00000000000372ca
@property(copy, nonatomic) NSString *resourceVersion;
@property(copy, nonatomic) NSString *languageCode;
- (id)encodedClassName;	// IMP=0x00000000000372bd
- (id)groupIdentifier;	// IMP=0x00000000000372a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
