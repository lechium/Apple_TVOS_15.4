//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SADomainObjectCommand-Protocol.h>
#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SADomainObjectDeleteCompleted <SAServerBoundCommand, SADomainObjectCommand>
{
}

+ (id)domainObjectDeleteCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000034184
+ (id)domainObjectDeleteCompleted;	// IMP=0x0000000000034172
- (_Bool)requiresResponse;	// IMP=0x000000000003418e
- (id)encodedClassName;	// IMP=0x0000000000034165
- (id)groupIdentifier;	// IMP=0x0000000000034151

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

