//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SALocalSearchNavigationPromptManeuverCompleted <SAServerBoundCommand>
{
}

+ (id)navigationPromptManeuverCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000025f31
+ (id)navigationPromptManeuverCompleted;	// IMP=0x0000000000025f1f
- (_Bool)requiresResponse;	// IMP=0x0000000000025f3b
- (id)encodedClassName;	// IMP=0x0000000000025f12
- (id)groupIdentifier;	// IMP=0x0000000000025efe

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

