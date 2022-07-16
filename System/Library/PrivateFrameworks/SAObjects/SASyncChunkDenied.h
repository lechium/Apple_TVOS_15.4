//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAClientBoundCommand-Protocol.h>

@class NSArray, NSString, SASyncAnchor;

@interface SASyncChunkDenied <SAClientBoundCommand>
{
}

+ (id)chunkDeniedWithErrorCode:(long long)arg1;	// IMP=0x00000000000122cf
+ (id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000122c5
+ (id)chunkDenied;	// IMP=0x00000000000122b3
- (_Bool)mutatingCommand;	// IMP=0x000000000001238b
- (_Bool)requiresResponse;	// IMP=0x0000000000012383
@property(nonatomic) long long errorCode;
@property(retain, nonatomic) SASyncAnchor *current;
- (id)initWithErrorCode:(long long)arg1;	// IMP=0x0000000000012305
- (id)encodedClassName;	// IMP=0x00000000000122a6
- (id)groupIdentifier;	// IMP=0x0000000000012292

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

