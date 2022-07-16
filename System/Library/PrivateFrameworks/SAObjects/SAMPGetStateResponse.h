//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString, SAMPMediaItem;

@interface SAMPGetStateResponse <SAServerBoundCommand>
{
}

+ (id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000c74d
+ (id)getStateResponse;	// IMP=0x000000000000c73b
- (_Bool)requiresResponse;	// IMP=0x000000000000c85c
@property(nonatomic) int state;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSNumber *listeningToMusicApplication;
@property(retain, nonatomic) SAMPMediaItem *listeningToItem;
@property(copy, nonatomic) NSString *hashedGroupID;
- (id)encodedClassName;	// IMP=0x000000000000c72e
- (id)groupIdentifier;	// IMP=0x000000000000c71a

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

