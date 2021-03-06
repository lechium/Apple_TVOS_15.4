//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SASMultilingualDictationLanguageSelected <SAServerBoundCommand>
{
}

+ (id)multilingualDictationLanguageSelectedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000008ab4
+ (id)multilingualDictationLanguageSelected;	// IMP=0x0000000000008aa2
- (_Bool)requiresResponse;	// IMP=0x0000000000008b02
@property(copy, nonatomic) NSString *languageDetected;
@property(copy, nonatomic) NSDictionary *confidenceScoresByLanguage;
- (id)encodedClassName;	// IMP=0x0000000000008a95
- (id)groupIdentifier;	// IMP=0x0000000000008a81

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

