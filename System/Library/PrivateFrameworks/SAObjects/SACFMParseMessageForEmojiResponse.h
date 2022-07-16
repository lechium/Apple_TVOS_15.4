//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SACFMParseMessageForEmojiResponse <SAServerBoundCommand>
{
}

+ (id)parseMessageForEmojiResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000004009a
+ (id)parseMessageForEmojiResponse;	// IMP=0x0000000000040088
- (_Bool)requiresResponse;	// IMP=0x00000000000400e2
@property(copy, nonatomic) NSArray *parseChunks;
- (id)encodedClassName;	// IMP=0x000000000004007b
- (id)groupIdentifier;	// IMP=0x0000000000040067

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
