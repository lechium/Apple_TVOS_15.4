//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SANoteUpdateCompleted <SAServerBoundCommand>
{
}

+ (id)updateCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f8f9
+ (id)updateCompleted;	// IMP=0x000000000000f8e7
- (_Bool)requiresResponse;	// IMP=0x000000000000f903
- (id)encodedClassName;	// IMP=0x000000000000f8da
- (id)groupIdentifier;	// IMP=0x000000000000f8c6

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
