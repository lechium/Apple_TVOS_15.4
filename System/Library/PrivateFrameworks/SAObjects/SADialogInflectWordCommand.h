//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SADialogInflectWordCommand <SAServerBoundCommand>
{
}

+ (id)inflectWordCommandWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003ece4
+ (id)inflectWordCommand;	// IMP=0x000000000003ecd2
- (_Bool)requiresResponse;	// IMP=0x000000000003edba
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *semanticFeatureName;
@property(copy, nonatomic) NSString *locale;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) _Bool defaultToSemantic;
@property(copy, nonatomic) NSArray *constraints;
- (id)encodedClassName;	// IMP=0x000000000003ecc5
- (id)groupIdentifier;	// IMP=0x000000000003ecb1

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

